// NodeAVL.cpp
#include "NodeAVL.h"
#include "Utils.h"
#include <sstream>

NodeAVL::NodeAVL(std::string key, Alimentos *dados_alimentos, NodeAVL *parent, NodeAVL *left, NodeAVL *right)
	: m_ID(key), m_Data(dados_alimentos), m_Parent(parent), m_Left(left), m_Right(right), m_BalanceFactor(0)
{
}

NodeAVL::~NodeAVL()
{
	m_Parent = nullptr;
	m_Left = nullptr;
	m_Right = nullptr;
}

void NodeAVL::CopyDataFrom(const NodeAVL *node)
{
	m_ID = node->GetID();
	m_Data = node->GetData();
}

std::string NodeAVL::GetID() const
{
	return m_ID;
}

// void NodeAVL::SetID(int id)
//{
//	m_ID = id;
// }

Alimentos *NodeAVL::GetData() const
{
	return m_Data;
}

void NodeAVL::SetData(Alimentos *data)
{
	m_Data = data;
}

NodeAVL *NodeAVL::GetParent() const
{
	return m_Parent;
}

void NodeAVL::SetParent(NodeAVL *parent)
{
	m_Parent = parent;
}

NodeAVL *NodeAVL::GetLeft() const
{
	return m_Left;
}

void NodeAVL::SetLeft(NodeAVL *left)
{
	m_Left = left;
}

NodeAVL *NodeAVL::GetRight() const
{
	return m_Right;
}

void NodeAVL::SetRight(NodeAVL *right)
{
	m_Right = right;
}

bool NodeAVL::IsRoot() const
{
	return m_Parent == nullptr;
}

bool NodeAVL::IsLeaf() const
{
	return m_Left == nullptr && m_Right == nullptr;
}

int NodeAVL::GetDegree() const
{
	int degree = 0;

	if (m_Left != nullptr)
		++degree;
	if (m_Right != nullptr)
		++degree;

	return degree;
}

int NodeAVL::GetDepth() const
{
	return GetDepthInternal(this);
}

int NodeAVL::GetDepthInternal(const NodeAVL *node) const
{
	if (node->IsRoot())
	{
		return 0;
	}
	else
	{
		return 1 + GetDepthInternal(node->GetParent());
	}
}

int NodeAVL::GetHeight() const
{
	return GetHeightInternal(this);
}

int NodeAVL::GetHeightInternal(const NodeAVL *node) const
{
	if (node == nullptr || node->IsLeaf())
	{
		return 0;
	}
	else
	{
		return 1 + Utils::Max(GetHeightInternal(node->GetLeft()), GetHeightInternal(node->GetRight()));
	}
}

int NodeAVL::GetBalanceFactor() const
{
	return m_BalanceFactor;
}

void NodeAVL::UpdateBalanceFactor()
{
	int leftHeight = m_Left == nullptr ? -1 : GetHeightInternal(m_Left);
	int rightHeight = m_Right == nullptr ? -1 : GetHeightInternal(m_Right);
	m_BalanceFactor = rightHeight - leftHeight;

	// Read the comments inside AVL::Balance().
	// m_BalanceFactor = leftHeight - rightHeight;
}
