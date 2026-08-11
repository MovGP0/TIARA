/* Ghidra address: 016d4f70 */
/* Ghidra symbol: FUN_016d4f70 */


void FUN_016d4f70(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_016d4e80(param_1);
  uVar1 = FUN_00608c80(&PTR_FUN_005f92e8,1);
  FUN_0060a8f0(uVar1,PTR_IMAGE_DOS_HEADER_0200c280,L"TAUDIOOUT");
  (**(code **)(**(longlong **)(param_1 + 0x490) + 0x88))(*(longlong **)(param_1 + 0x490),2,2,uVar1);
  FUN_00410f20(uVar1);
  return;
}

