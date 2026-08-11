/* Ghidra address: 00c3f350 */
/* Ghidra symbol: FUN_00c3f350 */


void FUN_00c3f350(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  short sVar2;
  short sVar3;
  
  if (param_2 != param_1) {
    FUN_00c3f140(param_2);
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined1 *)(param_2 + 0xc) = *(undefined1 *)(param_1 + 0xc);
    *(undefined1 *)(param_2 + 0xd) = *(undefined1 *)(param_1 + 0xd);
    *(undefined1 *)(param_2 + 0xe) = *(undefined1 *)(param_1 + 0xe);
    FUN_00414ad0(param_2 + 0x10,*(undefined8 *)(param_1 + 0x10));
    FUN_00414ad0(param_2 + 0x18,*(undefined8 *)(param_1 + 0x18));
    *(undefined2 *)(param_2 + 0x28) = *(undefined2 *)(param_1 + 0x28);
    FUN_00414ad0(param_2 + 0x20,*(undefined8 *)(param_1 + 0x20));
    sVar3 = *(short *)(*(longlong *)(param_1 + 0x38) + 0x10);
    sVar2 = 0;
    if (-1 < (short)(sVar3 + -1)) {
      do {
        uVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x38),(longlong)sVar2);
        uVar1 = FUN_00c3ca20(uVar1);
        FUN_004ae7e0(*(undefined8 *)(param_2 + 0x38),uVar1);
        sVar2 = sVar2 + 1;
        sVar3 = sVar3 + -1;
      } while (sVar3 != 0);
    }
  }
  return;
}

