/* Ghidra address: 014abf10 */
/* Ghidra symbol: FUN_014abf10 */


void FUN_014abf10(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined2 local_1a;
  
  lVar2 = *(longlong *)(*param_1 + 0x48);
  if (*(longlong *)(*param_1 + 0x48) == 0) {
    lVar2 = DAT_0210eae0;
  }
  FUN_01d30f00(*param_1,&local_1a,2);
  iVar1 = FUN_01d31a40(*param_1);
  if (iVar1 == 0) {
    *(undefined2 *)(lVar2 + 0xc54) = local_1a;
  }
  return;
}

