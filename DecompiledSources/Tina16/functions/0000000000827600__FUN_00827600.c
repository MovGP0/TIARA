/* Ghidra address: 00827600 */
/* Ghidra symbol: FUN_00827600 */


longlong FUN_00827600(longlong param_1,int param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(longlong *)(param_1 + 8) + 0x10) + -1;
  if (-1 < iVar2) {
    do {
      lVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 8),iVar2);
      if ((param_2 == *(int *)(lVar1 + 0x94)) && (param_3 == *(int *)(lVar1 + 0x90))) {
        return lVar1;
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != -1);
  }
  lVar1 = FUN_00827300(&PTR_FUN_008268c0,1,param_2,param_3);
  FUN_004ae7e0(*(undefined8 *)(param_1 + 8),lVar1);
  return lVar1;
}

