/* Ghidra address: 01b82420 */
/* Ghidra symbol: FUN_01b82420 */


void FUN_01b82420(longlong param_1)

{
  int iVar1;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined1 local_50;
  undefined1 *local_40;
  int local_2c;
  longlong local_20;
  
  local_40 = auStack_78;
  local_20 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  iVar1 = *(int *)(param_1 + 0x348);
  local_2c = 0;
  if (-1 < iVar1 + -1) {
    do {
      FUN_01b823f0(auStack_78,*(undefined4 *)(param_1 + 0x20 + (longlong)local_2c * 8),
                   *(undefined4 *)(param_1 + 0x24 + (longlong)local_2c * 8));
      local_2c = local_2c + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  if (0 < *(int *)(local_20 + 0x10)) {
    local_58 = 0;
    local_50 = 0;
    FUN_01992db0(*(undefined8 *)(param_1 + 0x10),local_20,0,0xffffffff);
  }
  FUN_00410f20(local_20);
  return;
}

