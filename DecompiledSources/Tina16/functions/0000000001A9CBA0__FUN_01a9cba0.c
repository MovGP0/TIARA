/* Ghidra address: 01a9cba0 */
/* Ghidra symbol: FUN_01a9cba0 */


void FUN_01a9cba0(longlong *param_1,undefined4 param_2,undefined1 param_3)

{
  ushort uVar1;
  undefined4 uVar2;
  
  if (*(char *)((longlong)param_1 + 0x12d) == '\0') {
    uVar1 = *(ushort *)(param_1 + 0x2c);
    if ((uVar1 & 2) == 0) {
      if ((uVar1 & 1) == 0) {
        uVar2 = FUN_005fbf20(param_2);
        *(undefined4 *)(param_1 + 0x11) = uVar2;
      }
      else if ((uVar1 & 8) == 0) {
        uVar2 = (**(code **)(*param_1 + 0xd0))(param_1,3);
        uVar2 = FUN_005fbf20(uVar2);
        *(undefined4 *)(param_1 + 0x11) = uVar2;
      }
      else {
        uVar2 = (**(code **)(*param_1 + 0xd0))(param_1,0x16);
        uVar2 = FUN_005fbf20(uVar2);
        *(undefined4 *)(param_1 + 0x11) = uVar2;
      }
    }
    else {
      uVar2 = (**(code **)(*param_1 + 0xd0))(param_1,2);
      uVar2 = FUN_005fbf20(uVar2);
      *(undefined4 *)(param_1 + 0x11) = uVar2;
    }
    if ((*(ushort *)(param_1 + 0x2c) & 4) != 0) {
      uVar2 = (**(code **)(*param_1 + 0xd0))(param_1,0);
      uVar2 = FUN_005fbf20(uVar2);
      *(undefined4 *)(param_1 + 0x11) = uVar2;
    }
    if ((*(ushort *)(param_1 + 0x2c) & 0x40) != 0) {
      uVar2 = (**(code **)(*param_1 + 0xd0))(param_1,4);
      uVar2 = FUN_005fbf20(uVar2);
      *(undefined4 *)(param_1 + 0x11) = uVar2;
    }
    if ((*(ushort *)(param_1 + 0x2c) & 0x20) != 0) {
      *(undefined4 *)(param_1 + 0x11) = 0x66d7;
    }
    *(undefined1 *)((longlong)param_1 + 0x86) = param_3;
    (**(code **)(*param_1 + 0xe0))(param_1,*(undefined1 *)((longlong)param_1 + 0x85));
  }
  return;
}

