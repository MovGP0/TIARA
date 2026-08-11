/* Ghidra address: 00ad4730 */
/* Ghidra symbol: FUN_00ad4730 */


void FUN_00ad4730(longlong param_1)

{
  ushort uVar1;
  undefined1 auStack_28 [32];
  
  FUN_00a74cd0(*(undefined8 *)(param_1 + 0x28));
  *(undefined1 *)(param_1 + 0x45) = 0;
  uVar1 = *(short *)(param_1 + 0x20) - 1;
  if (uVar1 == 0xffff) {
    *(undefined1 *)(param_1 + 0x44) = 4;
  }
  else if (uVar1 < 8) {
    *(undefined1 *)(param_1 + 0x44) = 2;
    *(undefined2 *)(param_1 + 0x20) = 0x3f;
  }
  else if (*(short *)(param_1 + 0x20) == 0x3c) {
    FUN_00ad4020(auStack_28);
  }
  else {
    *(undefined1 *)(param_1 + 0x44) = 2;
    FUN_00adb540(param_1,*(undefined8 *)(param_1 + 0x28));
  }
  return;
}

