/* Ghidra address: 00f409e0 */
/* Ghidra symbol: FUN_00f409e0 */


void FUN_00f409e0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = FUN_0082a4a0(*(undefined8 *)(param_1 + 0x4d0));
    FUN_0060a8f0(uVar1,PTR_IMAGE_DOS_HEADER_0200c280,L"MySpinUp");
    FUN_0082a4f0(*(undefined8 *)(param_1 + 0x4d0),1);
    (**(code **)(**(longlong **)(param_1 + 0x4d0) + 0x180))(*(longlong **)(param_1 + 0x4d0));
  }
  else {
    FUN_0082a4b0(*(undefined8 *)(param_1 + 0x4d0));
  }
  return;
}

