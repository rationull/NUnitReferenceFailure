// This is the main DLL file.

#include "stdafx.h"

using namespace System;
using namespace NUnit::Framework;
using namespace ReferencedAssembly;

class MixedClass
{
public:
	MixedClass()
	{
		// Use ReferencedClass, requiring ReferencedAssembly to be loaded
		ReferencedClass ^rc = gcnew ReferencedClass();
	}
};

// Static instance of MixedClass, resulting in a constructor call during managed assembly initialization (cctor)
static MixedClass sMC;

[TestFixture]
public ref class Fixture
{
public:
	[Test]
	void RunTest()
	{
		// Do nothing
	}
};