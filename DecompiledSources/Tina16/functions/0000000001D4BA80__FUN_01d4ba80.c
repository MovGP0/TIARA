/* Ghidra address: 01d4ba80 */
/* Ghidra symbol: FUN_01d4ba80 */


void FUN_01d4ba80(undefined8 param_1,longlong param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  ulonglong in_stack_ffffffffffffff98;
  
  dVar1 = (double)FUN_016eb0a0(param_1,1);
  dVar2 = (double)FUN_016eb0a0(param_1,2);
  dVar3 = (double)FUN_016eb0a0(param_1,3);
  FUN_016e9cd0(param_1,6);
  FUN_016e9e20(param_1,10);
  FUN_016ebe60(param_1,1,1,3,in_stack_ffffffffffffff98 & 0xffffffffffffff00);
  FUN_016ed320(param_1,1,0,1.0 / dVar1,0);
  FUN_016ebe60(param_1,2,4,0,1);
  FUN_016ed320(param_1,2,0,1.0 / dVar1,0);
  FUN_016ebe60(param_1,3,3,5,1);
  FUN_016ed320(param_1,3,0,1.0 / (dVar2 * dVar1),0);
  FUN_016ebfa0(param_1,4,5,6,1);
  FUN_016ed220(param_1,4,dVar3 / (dVar2 * dVar1),0);
  FUN_016ebe60(param_1,5,6,5,1);
  FUN_016ed320(param_1,5,0,*(undefined8 *)(param_2 + 0x430),0);
  FUN_016ec580(param_1,6,4,3,6);
  FUN_016ebe60(param_1,7,6,7,1);
  FUN_016ed320(param_1,7,0,1.0 / dVar1,0);
  FUN_016ebe60(param_1,8,7,2,1);
  FUN_016ed320(param_1,8,0,1.0 / dVar1,0);
  FUN_016ebe60(param_1,9,8,0,1);
  FUN_016ed320(param_1,9,0,1.0 / dVar1,0);
  FUN_016ec580(param_1,10,8,7,2);
  FUN_016e9f40(param_1,FUN_01d4ba70);
  return;
}

