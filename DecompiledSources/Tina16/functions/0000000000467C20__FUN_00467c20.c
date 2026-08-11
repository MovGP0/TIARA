/* Ghidra address: 00467c20 */
/* Ghidra symbol: FUN_00467c20 */


void FUN_00467c20(undefined8 param_1,undefined8 param_2,ushort *param_3)

{
  ushort uVar1;
  
  uVar1 = *param_3 & 0xbfff;
  if (uVar1 < 0xd) {
    if (uVar1 == 0xc) {
      FUN_00467e90(param_2,*(undefined8 *)(param_3 + 4));
      return;
    }
    if (uVar1 < 7) {
      if (uVar1 == 6) {
        FUN_004679a0(param_1,param_2,**(undefined8 **)(param_3 + 4));
        return;
      }
      if (uVar1 == 2) {
        FUN_00467730(param_1,param_2,(longlong)**(short **)(param_3 + 4));
        return;
      }
      if (uVar1 == 3) {
        FUN_00467730(param_1,param_2,**(undefined4 **)(param_3 + 4));
        return;
      }
      if (uVar1 == 4) {
        FUN_004678f0(param_1,param_2,(double)**(float **)(param_3 + 4));
        return;
      }
      if (uVar1 == 5) {
        FUN_004678f0(param_1,param_2,**(undefined8 **)(param_3 + 4));
        return;
      }
    }
    else {
      if (uVar1 == 7) {
        FUN_00467a10(param_1,param_2,**(undefined8 **)(param_3 + 4));
        return;
      }
      if (uVar1 == 8) {
        FUN_004167d0(param_2,**(undefined8 **)(param_3 + 4));
        return;
      }
      if (uVar1 == 0xb) {
        FUN_00414ad0(param_2,*(undefined8 *)
                              (&DAT_02010988 +
                              (ulonglong)DAT_01dc4379 * 8 +
                              (ulonglong)(**(short **)(param_3 + 4) != 0) * 0x18));
        return;
      }
    }
  }
  else if (uVar1 < 0x15) {
    if (uVar1 == 0x14) {
      FUN_00467810(param_1,param_2,**(undefined8 **)(param_3 + 4));
      return;
    }
    if (uVar1 == 0x10) {
      FUN_00467730(param_1,param_2,(longlong)**(char **)(param_3 + 4));
      return;
    }
    if (uVar1 == 0x11) {
      FUN_004677a0(param_1,param_2,**(undefined1 **)(param_3 + 4));
      return;
    }
    if (uVar1 == 0x12) {
      FUN_004677a0(param_1,param_2,**(undefined2 **)(param_3 + 4));
      return;
    }
    if (uVar1 == 0x13) {
      FUN_004677a0(param_1,param_2,**(undefined4 **)(param_3 + 4));
      return;
    }
  }
  else {
    if (uVar1 == 0x15) {
      FUN_00467880(param_1,param_2,**(undefined8 **)(param_3 + 4));
      return;
    }
    if (uVar1 == 0x100) {
      FUN_00414ad0(param_2,**(undefined8 **)(param_3 + 4));
      return;
    }
    if (uVar1 == 0x102) {
      FUN_004167d0(param_2,**(undefined8 **)(param_3 + 4));
      return;
    }
  }
  FUN_00467a80(param_1,param_2);
  return;
}

