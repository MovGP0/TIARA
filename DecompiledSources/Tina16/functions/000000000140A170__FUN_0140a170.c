/* Ghidra address: 0140a170 */
/* Ghidra symbol: FUN_0140a170 */


void FUN_0140a170(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined8 local_30;
  
  local_30 = 0;
  lVar1 = *(longlong *)(param_1 + 0x728);
  iVar4 = *(int *)(lVar1 + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar2 = FUN_01d347d0(lVar1,iVar3);
      FUN_0084e320(*(undefined8 *)(param_1 + 0x6d0),&local_30,1,iVar3 + 1);
      FUN_00414ad0(lVar2 + 8,local_30);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00414480(&local_30);
  return;
}

