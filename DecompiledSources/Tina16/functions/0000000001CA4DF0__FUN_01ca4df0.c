/* Ghidra address: 01ca4df0 */
/* Ghidra symbol: FUN_01ca4df0 */


void FUN_01ca4df0(void)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong *local_20;
  longlong local_18;
  
  local_30 = auStack_58;
  uVar1 = FUN_019a4600();
  local_18 = FUN_01b4c3a0(&DAT_01b4bb30,1,uVar1,*(undefined8 *)PTR_DAT_02005010);
  FUN_01b4e970(local_18);
  local_20 = (longlong *)FUN_007fc180(&PTR_FUN_01b52488,1,*(undefined8 *)PTR_DAT_02004030);
  FUN_01b53190(local_20,*(undefined8 *)(local_18 + 0x14b8));
  FUN_01b53570(local_20,local_18);
  (**(code **)(*local_20 + 0x2d0))(local_20);
  FUN_00410f20(local_20);
  if (local_18 != 0) {
    FUN_00410f20(local_18);
  }
  return;
}

