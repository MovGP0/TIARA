/* Ghidra address: 01972d30 */
/* Ghidra symbol: FUN_01972d30 */


void FUN_01972d30(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 *local_20;
  longlong local_10;
  
  local_20 = auStack_58;
  local_38 = 0;
  local_28 = 0;
  local_30 = 0;
  iVar1 = FUN_00414cb0(*(undefined8 *)(param_1 + 0x1f8));
  if ((1 < iVar1) && (*(short *)(*(longlong *)(param_1 + 0x1f8) + 2) == 0x3a)) {
    FUN_00441640(&local_30,param_2);
    FUN_00441d00(&local_28,local_30,*(undefined8 *)(param_1 + 0x1f8));
    FUN_00414ad0(param_1 + 0x1f8,local_28);
  }
  local_10 = FUN_01979e40(&PTR_FUN_01942c90,1);
  FUN_00441640(&local_38,param_2);
  FUN_00414ad0(local_10 + 0x90,local_38);
  FUN_01977180(param_1,local_10,param_2,1);
  FUN_00410f20(local_10);
  FUN_00414560(&local_38,3);
  return;
}

