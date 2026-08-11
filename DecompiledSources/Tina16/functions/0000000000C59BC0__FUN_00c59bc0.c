/* Ghidra address: 00c59bc0 */
/* Ghidra symbol: FUN_00c59bc0 */


void FUN_00c59bc0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_2 == 0) {
    uVar1 = FUN_0082a4a0(*(undefined8 *)(param_1 + 0x498));
    uVar2 = thunk_FUN_041628f5(PTR_IMAGE_DOS_HEADER_0200c280,L"SpinDown");
    FUN_0060b650(uVar1,uVar2);
    FUN_0082a4f0(*(undefined8 *)(param_1 + 0x498),1);
    (**(code **)(**(longlong **)(param_1 + 0x498) + 0x180))(*(longlong **)(param_1 + 0x498));
  }
  else {
    FUN_0082a4b0(*(undefined8 *)(param_1 + 0x498));
  }
  return;
}

