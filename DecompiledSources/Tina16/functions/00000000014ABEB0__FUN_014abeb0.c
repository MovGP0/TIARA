/* Ghidra address: 014abeb0 */
/* Ghidra symbol: FUN_014abeb0 */


void FUN_014abeb0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined1 local_19;
  
  lVar2 = *(longlong *)(*param_1 + 0x48);
  if (*(longlong *)(*param_1 + 0x48) == 0) {
    lVar2 = DAT_0210eae0;
  }
  FUN_01d30f00(*param_1,&local_19,1);
  iVar1 = FUN_01d31a40(*param_1);
  if (iVar1 == 0) {
    *(undefined1 *)(lVar2 + 0xc43) = local_19;
  }
  return;
}

