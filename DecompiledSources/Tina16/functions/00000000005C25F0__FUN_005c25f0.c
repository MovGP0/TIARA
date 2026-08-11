/* Ghidra address: 005c25f0 */
/* Ghidra symbol: FUN_005c25f0 */


void FUN_005c25f0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = FUN_005c2340(param_1,param_3,param_2);
  lVar2 = (longlong)(int)~uVar1;
  *(undefined4 *)(*(longlong *)(param_1 + 8) + lVar2 * 0x38) = param_2;
  *(short *)(*(longlong *)(param_1 + 8) + 4 + lVar2 * 0x38) = (short)param_3;
  FUN_00417c40(*(longlong *)(param_1 + 8) + 8 + lVar2 * 0x38,param_4,&DAT_005bc4e0);
  return;
}

