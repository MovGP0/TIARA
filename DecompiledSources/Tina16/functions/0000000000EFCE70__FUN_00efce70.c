/* Ghidra address: 00efce70 */
/* Ghidra symbol: FUN_00efce70 */


undefined1 * FUN_00efce70(undefined1 *param_1,byte *param_2,int param_3)

{
  ulonglong uVar1;
  
  *param_1 = 0;
  if (param_2 == (byte *)0x0) {
    return param_1;
  }
  uVar1 = (ulonglong)*param_2;
  if (uVar1 < 0x1e) {
    if (uVar1 < 0x11) {
      if (2 < uVar1 - 9) {
        if (uVar1 - 9 != 3) {
          return param_1;
        }
        FUN_00415020(param_1,*(longlong *)(param_2 + 0xa8) + -0x30 + (longlong)param_3 * 0x40,
                     CONCAT71((int7)((ulonglong)((longlong)param_3 * 8) >> 8),0x28));
        return param_1;
      }
    }
    else if (3 < uVar1 - 0x11) {
      if (1 < uVar1 - 0x18) {
        if (3 < uVar1 - 0x1a) {
          return param_1;
        }
LAB_00efcfa9:
        if (param_2[0xa5] != 8) {
          return param_1;
        }
        FUN_00415020(param_1,*(longlong *)(param_2 + 0xa8) + -0x30 + (longlong)param_3 * 0x40,
                     CONCAT71((int7)((ulonglong)((longlong)param_3 * 8) >> 8),0x28));
        return param_1;
      }
LAB_00efcf71:
      if (param_2[0xa5] != 3) {
        return param_1;
      }
      FUN_00415020(param_1,*(longlong *)(param_2 + 0xa8) + -0x30 + (longlong)param_3 * 0x40,
                   CONCAT71((int7)((ulonglong)((longlong)param_3 * 8) >> 8),0x28));
      return param_1;
    }
LAB_00efcf2e:
    FUN_00415020(param_1,*(longlong *)(param_2 + 0xa8) + 0x10,0x28);
  }
  else {
    if (uVar1 < 0x57) {
      if (1 < uVar1 - 0x1e) {
        if (1 < uVar1 - 0x25) {
          return param_1;
        }
        goto LAB_00efcf2e;
      }
    }
    else {
      if (uVar1 - 0x57 < 2) goto LAB_00efcf71;
      if (uVar1 - 0x59 < 4) goto LAB_00efcfa9;
      if (1 < uVar1 - 0x5d) {
        return param_1;
      }
    }
    if (param_2[0xa5] == 2) {
      FUN_00415020(param_1,*(longlong *)(param_2 + 0xa8) + -0x30 + (longlong)param_3 * 0x40,
                   CONCAT71((int7)((ulonglong)((longlong)param_3 * 8) >> 8),0x28));
    }
  }
  return param_1;
}

