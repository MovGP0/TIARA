/* Ghidra address: 0077e890 */
/* Ghidra symbol: FUN_0077e890 */


void FUN_0077e890(longlong *param_1)

{
  ulonglong uVar1;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  byte local_19;
  
  local_30 = auStack_58;
  *(undefined1 *)(param_1 + 0x68) = 1;
  local_19 = 0;
  do {
    uVar1 = (ulonglong)local_19;
    if (param_1[uVar1 + 0xe] != 0) {
      (**(code **)PTR_DAT_02003590)(param_1[uVar1 + 0xe]);
      param_1[uVar1 + 0xe] = 0;
    }
    local_19 = local_19 + 1;
  } while (local_19 != 0x2d);
  (**(code **)(*param_1 + 0xc0))(param_1);
  *(undefined1 *)(param_1 + 0x68) = 0;
  return;
}

