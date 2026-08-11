/* Ghidra address: 01c7e0d0 */
/* Ghidra symbol: FUN_01c7e0d0 */


void FUN_01c7e0d0(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong local_20;
  longlong *local_18;
  undefined8 local_10;
  
  local_30 = auStack_58;
  local_20 = FUN_01c7d9d0(param_1);
  local_18 = (longlong *)FUN_007fc180(&PTR_FUN_01b72088,1,*(undefined8 *)PTR_DAT_02004030);
  local_10 = FUN_012bdec0(&DAT_012bcee8,1);
  FUN_01b72750(local_18,*(int *)(*(longlong *)(local_20 + 0x18) + 0x10) + 1,local_10);
  iVar1 = (**(code **)(*local_18 + 0x2d0))(local_18);
  if (iVar1 == 1) {
    FUN_01b72860(local_18,local_10);
    uVar2 = FUN_004ae7e0(*(undefined8 *)(local_20 + 0x18),local_10);
    *(undefined4 *)(param_1 + 0x17f8) = uVar2;
    FUN_01c7e2a0(param_1);
  }
  else {
    FUN_00410f20(local_10);
  }
  FUN_00410f20(local_18);
  return;
}

