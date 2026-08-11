/* Ghidra address: 01d514b0 */
/* Ghidra symbol: FUN_01d514b0 */


void FUN_01d514b0(undefined8 param_1,longlong param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  ulonglong in_stack_ffffffffffffff88;
  
  dVar1 = (double)FUN_016eb0a0(param_1,1);
  dVar2 = (double)FUN_016eb0a0(param_1,2);
  dVar3 = (double)FUN_016eb0a0(param_1,3);
  dVar4 = (dVar2 * 2.0 * dVar3) / dVar1;
  FUN_016e9cd0(param_1,7);
  FUN_016e9e20(param_1,0xc);
  FUN_016ebe60(param_1,1,9,1,in_stack_ffffffffffffff88 & 0xffffffffffffff00);
  FUN_016ed320(param_1,1,0,1.0 / dVar1,0);
  FUN_016ebef0(param_1,2,8,9,1);
  FUN_016ed220(param_1,2,(dVar3 * dVar1) / (dVar2 * 2.0),0);
  FUN_016ebfa0(param_1,3,8,3,1);
  FUN_016ed220(param_1,3,dVar4,0);
  FUN_016ebe60(param_1,4,3,8,1);
  FUN_016ed320(param_1,4,0,*(undefined8 *)(param_2 + 0x430),0);
  FUN_016ebe60(param_1,5,4,0,1);
  FUN_016ed320(param_1,5,0,1.0 / dVar1,0);
  FUN_016ebfa0(param_1,6,3,5,1);
  FUN_016ed220(param_1,6,dVar4,0);
  FUN_016ebe60(param_1,7,5,3,1);
  FUN_016ed320(param_1,7,0,*(undefined8 *)(param_2 + 0x430),0);
  FUN_016ebe60(param_1,8,5,6,1);
  FUN_016ed320(param_1,8,0,1.0 / dVar1,0);
  FUN_016ebe60(param_1,9,7,0,1);
  FUN_016ed320(param_1,9,0,1.0 / dVar1,0);
  FUN_016ebe60(param_1,10,6,2,1);
  FUN_016ed320(param_1,10,0,1.0 / dVar1,0);
  FUN_016ec580(param_1,0xb,4,3,5);
  FUN_016ec580(param_1,0xc,7,6,2);
  FUN_016e9f40(param_1,FUN_01d4f470);
  return;
}

