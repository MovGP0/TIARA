/* Ghidra address: 01d4d9a0 */
/* Ghidra symbol: FUN_01d4d9a0 */


void FUN_01d4d9a0(undefined8 param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  ulonglong in_stack_ffffffffffffff98;
  
  dVar1 = (double)FUN_016eb0a0(param_1,1);
  dVar2 = (double)FUN_016eb0a0(param_1,2);
  dVar3 = (double)FUN_016eb0a0(param_1,3);
  dVar4 = (double)FUN_016eb0a0(param_1,4);
  FUN_016e9cd0(param_1,5);
  FUN_016e9e20(param_1,10);
  FUN_016ebe60(param_1,1,1,3,in_stack_ffffffffffffff98 & 0xffffffffffffff00);
  FUN_016ed320(param_1,1,0,1.0 / dVar1,0);
  FUN_016ebe60(param_1,2,4,0,1);
  FUN_016ed320(param_1,2,0,1.0 / dVar1,0);
  FUN_016ebe60(param_1,3,3,5,1);
  FUN_016ed320(param_1,3,0,1.0 / (dVar2 * dVar1),0);
  FUN_016ebfa0(param_1,4,1,3,1);
  FUN_016ed220(param_1,4,(dVar3 + dVar4) / dVar1,0);
  FUN_016ebfa0(param_1,5,3,5,1);
  FUN_016ed220(param_1,5,dVar4 / (dVar2 * dVar1),0);
  FUN_016ec580(param_1,6,4,3,5);
  FUN_016ebe60(param_1,7,5,6,1);
  FUN_016ed320(param_1,7,0,1.0 / dVar1,0);
  FUN_016ebe60(param_1,8,6,2,1);
  FUN_016ed320(param_1,8,0,1.0 / dVar1,0);
  FUN_016ebe60(param_1,9,7,0,1);
  FUN_016ed320(param_1,9,0,1.0 / dVar1,0);
  FUN_016ec580(param_1,10,7,6,2);
  FUN_016e9f40(param_1,FUN_01d4d990);
  return;
}

