/* Ghidra address: 01c758f0 */
/* Ghidra symbol: FUN_01c758f0 */


void FUN_01c758f0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  cVar2 = FUN_01328250(*(undefined8 *)(param_1 + 0x2788),0,0,0);
  if (cVar2 == '\0') {
    FUN_013d45f0(*(undefined8 *)(*(longlong *)(param_1 + 0x2788) + 0xe00),1);
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x2788) + 0xe00);
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 8) != 0)) {
      FUN_013c7550(*(undefined1 *)(*(longlong *)(lVar1 + 8) + 0x434));
    }
    FUN_00414ad0(param_1 + 0x27e8,L"TemperatureAnalysisClick");
  }
  return;
}

