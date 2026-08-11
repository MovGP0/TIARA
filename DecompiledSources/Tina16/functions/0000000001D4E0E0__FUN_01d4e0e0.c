/* Ghidra address: 01d4e0e0 */
/* Ghidra symbol: FUN_01d4e0e0 */


void FUN_01d4e0e0(undefined8 param_1)

{
  double dVar1;
  double dVar2;
  ulonglong in_stack_ffffffffffffffb8;
  
  dVar1 = (double)FUN_016eb0a0(param_1,1);
  dVar2 = (double)FUN_016eb0a0(param_1,2);
  FUN_016e9cd0(param_1,5);
  FUN_016e9e20(param_1,8);
  FUN_016ebe60(param_1,1,1,3,in_stack_ffffffffffffffb8 & 0xffffffffffffff00);
  FUN_016ed320(param_1,1,0,1.0 / dVar1,0);
  FUN_016ebe60(param_1,2,4,0,1);
  FUN_016ed320(param_1,2,0,1.0 / dVar1,0);
  FUN_016ebe60(param_1,3,3,5,1);
  FUN_016ed320(param_1,3,0,1.0 / (dVar2 * dVar1),0);
  FUN_016ec580(param_1,4,4,3,5);
  FUN_016ebe60(param_1,5,5,6,1);
  FUN_016ed320(param_1,5,0,1.0 / dVar1,0);
  FUN_016ebe60(param_1,6,6,2,1);
  FUN_016ed320(param_1,6,0,1.0 / dVar1,0);
  FUN_016ebe60(param_1,7,7,0,1);
  FUN_016ed320(param_1,7,0,1.0 / dVar1,0);
  FUN_016ec580(param_1,8,7,6,2);
  FUN_016e9f40(param_1,FUN_01d4ba70);
  return;
}

