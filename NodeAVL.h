// NodeAVL.h
#ifndef __NODE_AVL_H__
#define __NODE_AVL_H__
#include "Alimentos.h"

#include <string>

class NodeAVL
{
public:
	NodeAVL(std::string key, Alimentos *dados_alimentos, NodeAVL *parent = nullptr, NodeAVL *left = nullptr, NodeAVL *right = nullptr);
	~NodeAVL();

	void CopyDataFrom(const NodeAVL *node);

	string GetID() const;
	// void SetID(int id);

	Alimentos *GetData() const;
	void SetData(Alimentos *data);

	NodeAVL *GetParent() const;
	void SetParent(NodeAVL *parent);

	NodeAVL *GetLeft() const;
	void SetLeft(NodeAVL *left);

	NodeAVL *GetRight() const;
	void SetRight(NodeAVL *right);

	bool IsRoot() const;
	bool IsLeaf() const;

	int GetDegree() const;
	int GetDepth() const;
	int GetHeight() const;

	int GetBalanceFactor() const;
	void UpdateBalanceFactor();

private:
	std::string m_ID;
	Alimentos *m_Data;

	NodeAVL *m_Parent;
	NodeAVL *m_Left;
	NodeAVL *m_Right;

	int m_BalanceFactor;

	int GetDepthInternal(const NodeAVL *node) const;
	int GetHeightInternal(const NodeAVL *node) const;
};

#endif