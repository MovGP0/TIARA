/* Ghidra address: 01c97cf0 */
/* Ghidra symbol: FUN_01c97cf0 */


void FUN_01c97cf0(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_0152b4a0();
  if (cVar1 == '\0') {
    FUN_013e0570(*(undefined8 *)(*(longlong *)(param_1 + 0x2788) + 0xe00));
    FUN_00414ad0(param_1 + 0x27e8,L"ACVectorDiagramClick");
  }
  return;
}

