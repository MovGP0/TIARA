/* Ghidra address: 00848db0 */
/* Ghidra symbol: FUN_00848db0 */


void FUN_00848db0(longlong *param_1)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  if (param_1[0xa2] != 0) {
    FUN_008490a0(param_1);
    *(undefined4 *)(param_1 + 0xa3) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x51c) = 0xffffffff;
    FUN_0083e670(param_1[0xa2]);
    if ((char)param_1[0x8f] != '\0') {
      (**(code **)(*param_1 + 0x180))(param_1);
    }
  }
  return;
}

