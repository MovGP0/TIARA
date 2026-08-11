/* Ghidra address: 01c8ef70 */
/* Ghidra symbol: FUN_01c8ef70 */


void FUN_01c8ef70(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_01529c10();
  if (cVar1 == '\0') {
    FUN_013d87d0(*(undefined8 *)(*(longlong *)(param_1 + 0x2788) + 0xe00),1);
    FUN_00414ad0(param_1 + 0x27e8,L"ACTimeFunctionMnuClick");
  }
  return;
}

