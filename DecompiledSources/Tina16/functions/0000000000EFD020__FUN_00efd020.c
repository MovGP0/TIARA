/* Ghidra address: 00efd020 */
/* Ghidra symbol: FUN_00efd020 */


undefined2 FUN_00efd020(byte *param_1,int param_2)

{
  undefined2 uVar1;
  ulonglong uVar2;
  
  uVar1 = 9;
  if (param_1 == (byte *)0x0) {
    return 9;
  }
  uVar2 = (ulonglong)*param_1;
  if (uVar2 < 0x1e) {
    if (uVar2 < 0x11) {
      if (2 < uVar2 - 9) {
        if (uVar2 - 9 != 3) {
          return 9;
        }
        return *(undefined2 *)(*(longlong *)(param_1 + 0xa8) + -0x40 + (longlong)param_2 * 0x40);
      }
    }
    else if (3 < uVar2 - 0x11) {
      if (1 < uVar2 - 0x18) {
        if (3 < uVar2 - 0x1a) {
          return 9;
        }
LAB_00efd12d:
        if (param_1[0xa5] != 8) {
          return 9;
        }
        return *(undefined2 *)(*(longlong *)(param_1 + 0xa8) + -0x40 + (longlong)param_2 * 0x40);
      }
LAB_00efd101:
      if (param_1[0xa5] != 3) {
        return 9;
      }
      return *(undefined2 *)(*(longlong *)(param_1 + 0xa8) + -0x40 + (longlong)param_2 * 0x40);
    }
LAB_00efd0d3:
    uVar1 = **(undefined2 **)(param_1 + 0xa8);
  }
  else {
    if (uVar2 < 0x57) {
      if (1 < uVar2 - 0x1e) {
        if (1 < uVar2 - 0x25) {
          return 9;
        }
        goto LAB_00efd0d3;
      }
    }
    else {
      if (uVar2 - 0x57 < 2) goto LAB_00efd101;
      if (uVar2 - 0x59 < 4) goto LAB_00efd12d;
      if (1 < uVar2 - 0x5d) {
        return 9;
      }
    }
    if (param_1[0xa5] == 2) {
      uVar1 = *(undefined2 *)(*(longlong *)(param_1 + 0xa8) + -0x40 + (longlong)param_2 * 0x40);
    }
  }
  return uVar1;
}

