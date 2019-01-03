#include "pch.h"
#include "TestClass.h"

int
TestClass::GetInt()
{
    return m_Int;
}

void
TestClass::SetInt(
    int tmp
)
{
    this->m_Int = tmp;
}