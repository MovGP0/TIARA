/* Ghidra address: 01c75d90 */
/* Ghidra symbol: FUN_01c75d90 */


void FUN_01c75d90(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  cVar2 = FUN_014f6590(*(undefined8 *)(param_1 + 0x2788),0,0,0);
  if (cVar2 == '\0') {
    FUN_013d8d70(*(undefined8 *)(*(longlong *)(param_1 + 0x2788) + 0xe00),PTR_DAT_02004010[0x3ba],1)
    ;
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x2788) + 0xe00);
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 8) != 0)) {
      FUN_013c7550(*(undefined1 *)(*(longlong *)(lVar1 + 8) + 0x434));
    }
    FUN_00414ad0(param_1 + 0x27e8,L"NoiseClick");
  }
  return;
}

