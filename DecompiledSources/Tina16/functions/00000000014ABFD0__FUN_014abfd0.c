/* Ghidra address: 014abfd0 */
/* Ghidra symbol: FUN_014abfd0 */


void FUN_014abfd0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined2 local_1f;
  undefined2 local_1d;
  undefined2 local_1b;
  undefined1 local_19;
  
  lVar2 = *(longlong *)(*param_1 + 0x48);
  if (*(longlong *)(*param_1 + 0x48) == 0) {
    lVar2 = DAT_0210eae0;
  }
  FUN_01d30f00(*param_1,&local_1f,7);
  iVar1 = FUN_01d31a40(*param_1);
  if (iVar1 == 0) {
    *(undefined2 *)(lVar2 + 0xc59) = local_1f;
    *(undefined2 *)(lVar2 + 0xc5b) = local_1d;
    *(undefined2 *)(lVar2 + 0xc5d) = local_1b;
    *(undefined1 *)(lVar2 + 0xc5f) = local_19;
  }
  return;
}

