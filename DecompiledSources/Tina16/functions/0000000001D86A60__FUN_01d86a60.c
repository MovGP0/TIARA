/* Ghidra address: 01d86a60 */
/* Ghidra symbol: FUN_01d86a60 */


bool FUN_01d86a60(longlong param_1,char *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  bool bVar4;
  
  bVar4 = true;
  lVar1 = *(longlong *)(param_1 + 0x68);
  if (lVar1 != 0) {
    if (*(longlong *)(*(longlong *)(lVar1 + 0x8c0) + 0x408) !=
        *(longlong *)(*(longlong *)PTR_DAT_02004e40 + 0x2788)) {
      FUN_010e19d0(lVar1);
      uVar3 = FUN_0065b870(*(undefined8 *)(param_1 + 0x68));
      thunk_FUN_041b2403(uVar3,0x1234,0,
                         (longlong)
                         *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x68) + 0x8c0) + 0x408));
    }
    FUN_01b6e340(*(undefined8 *)(param_1 + 0x68),*param_2);
    cVar2 = FUN_01b6e500(*(undefined8 *)(param_1 + 0x68));
    bVar4 = cVar2 != *param_2;
    *param_2 = cVar2;
  }
  return bVar4;
}

