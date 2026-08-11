/* Ghidra address: 00f40a90 */
/* Ghidra symbol: FUN_00f40a90 */


void FUN_00f40a90(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = FUN_0082a4a0(*(undefined8 *)(param_1 + 0x4d8));
    FUN_0060a8f0(uVar1,PTR_IMAGE_DOS_HEADER_0200c280,L"MySpinDown");
    FUN_0082a4f0(*(undefined8 *)(param_1 + 0x4d8),1);
    (**(code **)(**(longlong **)(param_1 + 0x4d8) + 0x180))(*(longlong **)(param_1 + 0x4d8));
  }
  else {
    FUN_0082a4b0(*(undefined8 *)(param_1 + 0x4d8));
  }
  return;
}

