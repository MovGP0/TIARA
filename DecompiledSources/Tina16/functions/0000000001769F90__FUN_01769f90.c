/* Ghidra address: 01769f90 */
/* Ghidra symbol: FUN_01769f90 */


void FUN_01769f90(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_1 + 0x10);
  FUN_00414ad0(param_2 + 0x38,*(undefined8 *)(param_1 + 0x38));
  FUN_00414ad0(param_2 + 0x40,*(undefined8 *)(param_1 + 0x40));
  FUN_00414ad0(param_2 + 0x48,*(undefined8 *)(param_1 + 0x48));
  FUN_00414ad0(param_2 + 0x50,*(undefined8 *)(param_1 + 0x50));
  FUN_00414ad0(param_2 + 0x58,*(undefined8 *)(param_1 + 0x58));
  *(undefined1 *)(param_2 + 99) = *(undefined1 *)(param_1 + 99);
  FUN_00410f20(*(undefined8 *)(param_2 + 0x68));
  uVar1 = FUN_00c3f320(*(undefined8 *)(param_1 + 0x68));
  *(undefined8 *)(param_2 + 0x68) = uVar1;
  *(undefined1 *)(param_2 + 0x70) = *(undefined1 *)(param_1 + 0x70);
  FUN_00414ad0(param_2 + 0x30,*(undefined8 *)(param_1 + 0x30));
  *(undefined8 *)(param_2 + 0x90) = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(param_1 + 0x88);
  *(undefined1 *)(param_2 + 0x61) = *(undefined1 *)(param_1 + 0x61);
  *(undefined1 *)(param_2 + 0x80) = *(undefined1 *)(param_1 + 0x80);
  *(undefined1 *)(param_2 + 0x62) = *(undefined1 *)(param_1 + 0x62);
  *(undefined8 *)(param_2 + 0xa8) = *(undefined8 *)(param_1 + 0xa8);
  return;
}

