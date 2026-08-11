/* Ghidra address: 00984f80 */
/* Ghidra symbol: FUN_00984f80 */


void FUN_00984f80(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_2 == 0) {
    uVar2 = FUN_0044d490(&PTR_FUN_004361b8,1,L"Input source not specified.");
    FUN_004134c0(uVar2);
  }
  if (*(longlong *)(param_1 + 0x78) == 0) {
    uVar2 = FUN_0044d490(&PTR_FUN_004361b8,1,L"DOM implementation not specified.");
    FUN_004134c0(uVar2);
  }
  (**(code **)(**(longlong **)(param_1 + 0x98) + 0xf8))(*(longlong **)(param_1 + 0x98));
  cVar1 = FUN_00984520(param_1);
  if ((cVar1 == '\0') && (cVar1 = FUN_00984540(param_1), cVar1 == '\0')) {
    return;
  }
  uVar2 = FUN_0044d490(&PTR_FUN_00901a10,1,L"Parser error.");
  FUN_004134c0(uVar2);
  return;
}

