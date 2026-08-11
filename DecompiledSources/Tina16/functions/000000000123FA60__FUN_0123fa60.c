/* Ghidra address: 0123fa60 */
/* Ghidra symbol: FUN_0123fa60 */


void FUN_0123fa60(longlong param_1)

{
  int iVar1;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined1 local_60;
  undefined1 *local_50;
  int local_38;
  longlong local_20;
  
  local_50 = auStack_88;
  local_20 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  iVar1 = *(int *)(param_1 + 0x70);
  local_38 = 0;
  if (-1 < iVar1 + -1) {
    do {
      FUN_0123fa30(auStack_88,*(undefined4 *)(param_1 + 0x120 + (longlong)local_38 * 0xc),
                   *(undefined4 *)(param_1 + 0x124 + (longlong)local_38 * 0xc));
      local_38 = local_38 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  if (0 < *(int *)(local_20 + 0x10)) {
    local_68 = 0;
    local_60 = 0;
    FUN_01992db0(*(undefined8 *)(param_1 + 0x50),local_20,0,0xffffffff);
  }
  FUN_00410f20(local_20);
  return;
}

