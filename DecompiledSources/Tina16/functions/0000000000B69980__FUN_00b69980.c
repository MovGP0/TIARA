/* Ghidra address: 00b69980 */
/* Ghidra symbol: FUN_00b69980 */


undefined8 FUN_00b69980(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong local_20 [2];
  
  local_20[0] = 0;
  FUN_00415dd0(local_20,param_2,0);
  iVar2 = 0;
  if (local_20[0] != 0) {
    iVar2 = *(int *)(local_20[0] + -4);
  }
  FUN_004169f0(param_1,(ulonglong)(uint)(iVar2 / 4) * 3);
  uVar3 = FUN_00414df0(local_20);
  uVar4 = FUN_00414de0(param_1);
  uVar1 = 0;
  if (local_20[0] != 0) {
    uVar1 = *(undefined4 *)(local_20[0] + -4);
  }
  iVar2 = FUN_00b69770(uVar3,uVar4,uVar1);
  FUN_004169f0(param_1,(longlong)iVar2 / 2 & 0xffffffff);
  FUN_004144d0(local_20);
  return param_1;
}

