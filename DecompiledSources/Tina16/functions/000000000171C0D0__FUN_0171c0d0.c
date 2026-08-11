/* Ghidra address: 0171c0d0 */
/* Ghidra symbol: FUN_0171c0d0 */


void FUN_0171c0d0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = FUN_0171bf00(param_1,param_3,param_2);
  lVar2 = (longlong)(int)~uVar1;
  *(undefined4 *)(*(longlong *)(param_1 + 8) + lVar2 * 0x10) = param_2;
  *(char *)(*(longlong *)(param_1 + 8) + 4 + lVar2 * 0x10) = (char)param_3;
  *(undefined8 *)(*(longlong *)(param_1 + 8) + 8 + lVar2 * 0x10) = param_4;
  return;
}

