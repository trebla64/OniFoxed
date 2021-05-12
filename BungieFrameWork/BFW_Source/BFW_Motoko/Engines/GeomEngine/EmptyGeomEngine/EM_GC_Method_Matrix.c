/*
	FILE:	EM_GC_Method_Matrix.c
	
	AUTHOR:	Brent H. Pease
	
	CREATED: June 10, 1999
	
	PURPOSE: 
	
	Copyright 1997

*/

#include "BFW.h"
#include "BFW_Motoko.h"
#include "BFW_Console.h"

#include "EM_GC_Private.h"
#include "EM_GC_Method_Matrix.h"

UUtError
EGrGeomContext_Method_MatrixStack_Push(
	void)
{

	return UUcError_None;
}

UUtError
EGrGeomContext_Method_MatrixStack_Pop(
	void)
{
	
	return UUcError_None;
}

UUtError
EGrGeomContext_Method_MatrixStack_Get(
	M3tMatrix4x3*		outMatrix3)
{

	return UUcError_None;
}

UUtError
EGrGeomContext_Method_MatrixStack_Identity(
	void)
{
	
	return UUcError_None;
}

UUtError
EGrGeomContext_Method_MatrixStack_Clear(
	void)
{
	
	return UUcError_None;
}

UUtError
EGrGeomContext_Method_MatrixStack_UniformScale(
	float			inScale)
{

	return UUcError_None;
}

UUtError
EGrGeomContext_Method_MatrixStack_Rotate(
	float			inRadians,
	float			inX,
	float			inY,
	float			inZ)
{

	return UUcError_None;
}

UUtError
EGrGeomContext_Method_MatrixStack_Translate(
	float			inX,
	float			inY,
	float			inZ)
{

	return UUcError_None;
}

UUtError
EGrGeomContext_Method_MatrixStack_Quaternion(
	const M3tQuaternion*	inQuaternion)
{

	return UUcError_None;
}


UUtError
EGrGeomContext_Method_MatrixStack_Multiply(
	const M3tMatrix4x3*	inMatrix)
{

	return UUcError_None;
}

void
EGrGeomContext_Method_MatrixToQuat(
	const M3tMatrix4x3 *inMatrix, 
	M3tQuaternion *outQuat)
{
}

void
EGrGeomContext_Method_QuatToMatrix(
	const M3tQuaternion *inQuat, 
	M3tMatrix4x3 *outMatrix)
{
}

void 
EGrGeomContext_Method_Matrix_GetTranslation(
	const M3tMatrix4x3 *inMatrix, 
	M3tPoint3D *outTranslation)
{
}

void
EGrGeomContext_Method_Matrix_Multiply (
	const M3tMatrix4x3	*inMatrixA, 
	const M3tMatrix4x3	*inMatrixB, 
	M3tMatrix4x3			*outResult)
{
}

void
EGrGeomContext_Method_Matrix_MultiplyPoints (
	const M3tMatrix4x3	 *inMatrix, 
	const UUtUns16	      inNumPoints,
	const M3tPoint3D	 *inPoints, 
	M3tPoint3D			 *outPoints)
{
}

void
EGrGeomContext_Method_Matrix_Alignment(
	const M3tVector3D *inFrom,
	const M3tVector3D *inTo,
	M3tMatrix4x3 *outMatrix)
{
}
