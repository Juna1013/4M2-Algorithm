# ベルマンフォード法
import networkx as nx

# 空の有向グラフの生成
G = nx.DiGraph()

# 重み付きグラフの生成
nodes = [0, 1, 2, 3, 4, 5] # ノード
edges = [(0, 1, 5), (0, 2, 4), (0, 3, 5), (1, 4, -1), (2, 4, -1), (3, 2, -1), (3, 5, -3), (4, 5, 3), (2, 1, -2)]

G.add_nodes_from(nodes)
G.add_weighted_edges_from(edges)

# 各ノードの座標
pos = {0:(0, 0), 1:(1, 1), 2:(1, 0), 3:(1, -1), 4:(2, 1), 5:(2, -1)}

# 重みのみの表示
edge_labels = dict([((u, v,), d['weight']) for u,v,d in G.edges(data=True)])
nx.draw_networkx_edge_labels(G, pos, edge_labels=edge_labels)

# 描画
nx.draw(G, pos, with_labels=True)

# 実装
INF = 100000 # 十分大きい値
V = len(nodes) # ノード数
D = [INF for i in range(V)] # 更新していく各ノードまでの最小コスト配列（すべてINFで初期化）
D[0] = 0 # 始点のコストを0に設定

for i in range(V-1): # 負の閉路がない場合、V-1のループで終了できる
    for e in edges:
        if D[e[0]] + e[2] < D[e[1]]: # ノードuの最小コスト < ノードvの暫定最小コスト
            D[e[1]] = D[e[0]] + e[2] # ノードvの暫定最小コストを更新
    print(D)
