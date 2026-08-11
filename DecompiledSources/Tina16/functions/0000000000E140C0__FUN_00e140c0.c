/* Ghidra address: 00e140c0 */
/* Ghidra symbol: FUN_00e140c0 */


byte FUN_00e140c0(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  byte local_2a;
  byte local_29;
  
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  iVar5 = *(int *)(param_1 + 0x10);
  bVar3 = 0;
  bVar4 = 0;
  iVar2 = 0;
  if (-1 < iVar5 + -1) {
    do {
      lVar1 = FUN_01d347d0(param_1,iVar2);
      FUN_00e13930(*(undefined8 *)(lVar1 + 0x10),*(undefined4 *)(lVar1 + 0x24),&local_2a,&local_29,
                   param_2);
      bVar4 = bVar4 | local_2a;
      bVar3 = bVar3 | local_29;
      iVar2 = iVar2 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_00414560(&local_48,3);
  return bVar3 & bVar4;
}

