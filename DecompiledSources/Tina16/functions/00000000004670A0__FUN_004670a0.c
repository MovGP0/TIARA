/* Ghidra address: 004670a0 */
/* Ghidra symbol: FUN_004670a0 */


void FUN_004670a0(undefined8 param_1,undefined8 param_2,ushort *param_3)

{
  ushort uVar1;
  
  uVar1 = *param_3 & 0xbfff;
  if (uVar1 < 0xd) {
    if (uVar1 == 0xc) {
      FUN_00467310(param_2,*(undefined8 *)(param_3 + 4));
      return;
    }
    if (uVar1 < 7) {
      if (uVar1 == 6) {
        FUN_00466e20(param_1,param_2,**(undefined8 **)(param_3 + 4));
        return;
      }
      if (uVar1 == 2) {
        FUN_00466bb0(param_1,param_2,(longlong)**(short **)(param_3 + 4));
        return;
      }
      if (uVar1 == 3) {
        FUN_00466bb0(param_1,param_2,**(undefined4 **)(param_3 + 4));
        return;
      }
      if (uVar1 == 4) {
        FUN_00466d70(param_1,param_2,(double)**(float **)(param_3 + 4));
        return;
      }
      if (uVar1 == 5) {
        FUN_00466d70(param_1,param_2,**(undefined8 **)(param_3 + 4));
        return;
      }
    }
    else {
      if (uVar1 == 7) {
        FUN_00466e90(param_1,param_2,**(undefined8 **)(param_3 + 4));
        return;
      }
      if (uVar1 == 8) {
        FUN_00415eb0(param_2,**(undefined8 **)(param_3 + 4));
        return;
      }
      if (uVar1 == 0xb) {
        FUN_004168e0(param_2,*(undefined8 *)
                              (&DAT_02010988 +
                              (ulonglong)DAT_01dc4379 * 8 +
                              (ulonglong)(**(short **)(param_3 + 4) != 0) * 0x18));
        return;
      }
    }
  }
  else if (uVar1 < 0x15) {
    if (uVar1 == 0x14) {
      FUN_00466c90(param_1,param_2,**(undefined8 **)(param_3 + 4));
      return;
    }
    if (uVar1 == 0x10) {
      FUN_00466bb0(param_1,param_2,(longlong)**(char **)(param_3 + 4));
      return;
    }
    if (uVar1 == 0x11) {
      FUN_00466c20(param_1,param_2,**(undefined1 **)(param_3 + 4));
      return;
    }
    if (uVar1 == 0x12) {
      FUN_00466c20(param_1,param_2,**(undefined2 **)(param_3 + 4));
      return;
    }
    if (uVar1 == 0x13) {
      FUN_00466c20(param_1,param_2,**(undefined4 **)(param_3 + 4));
      return;
    }
  }
  else {
    if (uVar1 == 0x15) {
      FUN_00466d00(param_1,param_2,**(undefined8 **)(param_3 + 4));
      return;
    }
    if (uVar1 == 0x100) {
      FUN_00415e80(param_2,**(undefined8 **)(param_3 + 4));
      return;
    }
    if (uVar1 == 0x102) {
      FUN_00415eb0(param_2,**(undefined8 **)(param_3 + 4));
      return;
    }
  }
  FUN_00466f00(param_1,param_2);
  return;
}

