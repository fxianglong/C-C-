#include<vector>
#include<map>
#include<iostream>
#include<queue>
using namespace std;
//图的存储：顶点集合，边的集合，边一般是两个顶点+边的权值构成
//1.邻接矩阵
namespace vectortable{
	template<class V, class W, bool D = false>//D有无方向
	class Graph
	{
	public:
		Graph(const V *a, int n){
			_vertexs.resize(n);
			_edges.resize(n);
			for (int i = 0; i < n; i++){
				_edges.resize(n, W());
				_vertexs.push_back(a[i]);
				_vertexIndexMap[a[i]] = i;
			}
		}

		int GetVertexIndex(const V& v){
			//for (size_t i = 0; i < _vertexs; i++){
			//	if (_vertexs[i] == v){
			//		return 1;
			//	}
			//}
			//throw invalid_argument("非法顶点");

			if (_vertexIndexMap.find(v) != _vertexIndexMap.end()){
				return _vertexIndexMap[v];
			}
			throw invalid_argument("非法顶点");
		}

		void AddEdge(const V&src, const V& dst, const W& w){
			int srcIndex = GetVertexIndex(src);
			int dstIndex = GetVertexIndex(dst);
			_edges[srcIndex][dstIndex] = w;
			if (D == false){
				_edges[dstIndex][srcIndex] = w;
			}
		}

		void _DFS(int srcindex, vector<bool>& visited){
			visited[srcindex] = true;
			cout << _vertexs[srcindex] << ":" << srcindex << "->";
			for (int i = 0; i < _edges[srcindex].size(); i++){
				if (_edges[srcindex][i] != W() && visited[i] == false){
					_DFS(i, visited);
				}
			}
		}
		void DFS(const V& src){
			int srcindex = GetVertexIndex(src);
			vector<bool> visited;
			visited.resize(_vertexs.size(), false);
			_DFS(srcindex, visited);
		}
		void BFS(const V& src){
			int srcindex = GetVertexIndex(src);
			vector<bool> visited;
			visited.resize(_vertexs.size(), false);
			queue<int> q;
			q.push(srcindex);
			visited[front] = true;
			while (!q.empty()){
				int front = q.front();
				q.pop();
				cout << _vertexs[front] << ":" << srcindex << " ";
				for (size_t i = 0; i < _edges[front].size(); i++)
				{
					if (_edges[front][i] != W() && visited[i] == false){
						q.push(i);
						visited[i] = true;
					}
				}

			}
		}
	private:
		vector<V> _vertexs;//顶点集合
		vector<vector<W>> _edges;//边的集合

		map<V, int> _vertexIndexMap;//通过顶点找下标的映射关系
	};
}
namespace linktable{
	//2.邻接表
	template<class W>
	struct LinkEdge
	{
		int _dst;
		int _src;
		W _w;
		LinkEdge<W> _next;
	};
	template<class V, class W, bool D = false>//D有无方向
	class Graph
	{
		typedef LinkEdge<W> Edge;
	public:
		Graph(const V *a, int n){
			_vertexs.resize(n);
			_linktable.resize(n, nullptr);
			for (int i = 0; i < n; i++){
				_vertexs.push_back(a[i]);
				_vertexIndexMap[a[i]] = i;
			}
		}

		int GetVertexIndex(const V& v){
			//for (size_t i = 0; i < _vertexs; i++){
			//	if (_vertexs[i] == v){
			//		return 1;
			//	}
			//}
			//throw invalid_argument("非法顶点");

			if (_vertexIndexMap.find(v) != _vertexIndexMap.end()){
				return _vertexIndexMap[v];
			}
			throw invalid_argument("非法顶点");
		}


		void _AddEdge(const V& srcIndex, const V& dstIndex, const W& w){
			Edge* edge = new Edge;
			edge->_w = w;
			edge->_src = srcIndex;
			edge->_dst = dstIndex;
			edge->_next = nullptr;
			//头插
			edge->_next = _linktable[srcIndex];
			_linktable[srcIndex] = edge;
		}
		void AddEdge(const V&src, const V& dst, const W& w){
			int srcIndex = GetVertexIndex(src);
			int dstIndex = GetVertexIndex(dst);
			_AddEdge(srcIndex, dstIndex, w);
			if (D == false){
				_AddEdge(dstIndex, srcIndex, w);
			}
		}
	private:
		vector<V> _vertexs;//顶点集合
		vector<Edge*> _linktable;//边的集合--邻接表
	};
}
