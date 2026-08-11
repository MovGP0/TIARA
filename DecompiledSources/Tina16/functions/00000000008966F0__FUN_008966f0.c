/* Ghidra address: 008966f0 */
/* Ghidra symbol: FUN_008966f0 */


void FUN_008966f0(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  int local_c;
  
  local_20 = auStack_48;
  FUN_0089b8c0();
  iVar1 = *(int *)(param_1 + 0x10);
  if ((iVar1 != 0) && (local_c = 0, -1 < iVar1 + -1)) {
    do {
      if (*(longlong *)(param_1 + 0x18 + (longlong)local_c * 8) == param_2) {
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
        *(undefined8 *)(param_1 + 0x18 + (longlong)local_c * 8) =
             *(undefined8 *)(param_1 + 0x18 + (ulonglong)*(uint *)(param_1 + 0x10) * 8);
        *(undefined8 *)(param_1 + 0x18 + (ulonglong)*(uint *)(param_1 + 0x10) * 8) = 0;
        break;
      }
      local_c = local_c + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_0089b920(param_1);
  return;
}

