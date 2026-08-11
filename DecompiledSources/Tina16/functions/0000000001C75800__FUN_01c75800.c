/* Ghidra address: 01c75800 */
/* Ghidra symbol: FUN_01c75800 */


void FUN_01c75800(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  cVar2 = FUN_01324990(0,*(undefined8 *)(param_1 + 0x2788),0,0,0,0,0,0,0);
  if (cVar2 == '\0') {
    FUN_013d3ef0(*(undefined8 *)(*(longlong *)(param_1 + 0x2788) + 0xe00),1);
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x2788) + 0xe00);
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 8) != 0)) {
      FUN_013c7550(*(undefined1 *)(*(longlong *)(lVar1 + 8) + 0x434));
    }
    FUN_00414ad0(param_1 + 0x27e8,L"DCTransferCharacteristicClick");
  }
  return;
}

