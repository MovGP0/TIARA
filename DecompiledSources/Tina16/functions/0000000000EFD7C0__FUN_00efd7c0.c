/* Ghidra address: 00efd7c0 */
/* Ghidra symbol: FUN_00efd7c0 */


void FUN_00efd7c0(byte *param_1,int param_2,undefined2 param_3)

{
  ulonglong uVar1;
  
  if (param_1 == (byte *)0x0) {
    return;
  }
  uVar1 = (ulonglong)*param_1;
  if (uVar1 < 0x1e) {
    if (uVar1 == 0xc) {
      *(undefined2 *)(*(longlong *)(param_1 + 0xa8) + -0x40 + (longlong)param_2 * 0x40) = param_3;
      return;
    }
    if (1 < uVar1 - 0x18) {
      if (3 < uVar1 - 0x1a) {
LAB_00efd8c4:
        **(undefined2 **)(param_1 + 0xa8) = param_3;
        return;
      }
LAB_00efd870:
      if (param_1[0xa5] != 8) {
        return;
      }
      *(undefined2 *)(*(longlong *)(param_1 + 0xa8) + -0x40 + (longlong)param_2 * 0x40) = param_3;
      return;
    }
LAB_00efd846:
    if (param_1[0xa5] == 3) {
      *(undefined2 *)(*(longlong *)(param_1 + 0xa8) + -0x40 + (longlong)param_2 * 0x40) = param_3;
    }
  }
  else {
    if (1 < uVar1 - 0x1e) {
      if (uVar1 - 0x57 < 2) goto LAB_00efd846;
      if (uVar1 - 0x59 < 4) goto LAB_00efd870;
      if (1 < uVar1 - 0x5d) goto LAB_00efd8c4;
    }
    if (param_1[0xa5] == 2) {
      *(undefined2 *)(*(longlong *)(param_1 + 0xa8) + -0x40 + (longlong)param_2 * 0x40) = param_3;
    }
  }
  return;
}

