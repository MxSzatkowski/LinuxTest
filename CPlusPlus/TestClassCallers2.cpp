#include "TestClassCallers2.h"

extern "C" EXAMPLEUNMANAGEDDLL_API Ent * CreateTestClass()
{
	return new Ent();
}

extern "C" EXAMPLEUNMANAGEDDLL_API void DisposeTestClass(Ent * pObject)
{

}

extern "C" EXAMPLEUNMANAGEDDLL_API float CallAdd(Ent * pObject, float a, float b)
{
	
		pObject->Add(a, b);
		return a + b;

}