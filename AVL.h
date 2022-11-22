// AVL.h
#ifndef __AVL_H__
#define __AVL_H__

#include "NodeAVL.h"

class AVL
{
public:
	AVL();
	~AVL();

	NodeAVL *GetRoot() const;

	bool IsEmpty() const;
	void Clear();

	int GetDegree() const;
	int GetHeight() const;

	void PreencheArquivo(ostream &arquivoBkp) const;

	void TraverseInOrder() const;
	void TraversePreOrder() const;
	void TraversePostOrder() const;

	NodeAVL *FindMin() const;
	NodeAVL *FindMax() const;

	NodeAVL *Predecessor(std::string id) const;
	NodeAVL *Successor(std::string id) const;

	NodeAVL *Search(std::string id) const;
	NodeAVL *Insert(std::string id, Alimentos *data);
	void Remove(std::string id);

private:
	NodeAVL *m_Root;

	void Destroy(NodeAVL *node);

	int GetDegreeInternal(const NodeAVL *node) const;

	void PreencheArquivoInternal(const NodeAVL *node, ostream &arquivoAux) const;

	void TraverseInOrderInternal(const NodeAVL *node) const;
	void TraversePreOrderInternal(const NodeAVL *node) const;
	void TraversePostOrderInternal(const NodeAVL *node) const;

	NodeAVL *FindMinInternal(NodeAVL *node) const;
	NodeAVL *FindMaxInternal(NodeAVL *node) const;

	NodeAVL *PredecessorInternal(NodeAVL *node) const;
	NodeAVL *SuccessorInternal(NodeAVL *node) const;

	NodeAVL *SearchInternal(NodeAVL *node, std::string &id) const;
	NodeAVL *InsertInternal(NodeAVL *node, NodeAVL *parent, std::string id, Alimentos *data);
	NodeAVL *RemoveInternal(NodeAVL *node, std::string id);
	NodeAVL *RemoveNode(NodeAVL *node);
	void UpdateParentChild(NodeAVL *parent, const NodeAVL *child, NodeAVL *newChild);

	NodeAVL *RotateLeft(NodeAVL *node);
	NodeAVL *RotateRight(NodeAVL *node);
	NodeAVL *RotateLeftRight(NodeAVL *node);
	NodeAVL *RotateRightLeft(NodeAVL *node);

	NodeAVL *Balance(NodeAVL *node);
};

#endif