/* Ghidra address: 01c96f90 */
/* Ghidra symbol: FUN_01c96f90 */


void FUN_01c96f90(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  cVar2 = FUN_01349310(0,3,*(undefined8 *)(param_1 + 0x2788),0,0,0,0,0,0,0,0,0,0,0,0,0,0,0x1c7,0,0,0
                       ,0,0,0);
  if (cVar2 == '\0') {
    FUN_013d4bc0(*(undefined8 *)(*(longlong *)(param_1 + 0x2788) + 0xe20),
                 *(undefined2 *)(PTR_DAT_02004010 + 0x8fb),0,0,1);
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x2788) + 0xe00);
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 8) != 0)) {
      FUN_013c7550(*(undefined1 *)(*(longlong *)(lVar1 + 8) + 0x434));
    }
    FUN_00414ad0(param_1 + 0x27e8,L"ACMultiSineClick");
  }
  return;
}

