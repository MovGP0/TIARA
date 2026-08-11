/* Ghidra address: 018bb720 */
/* Ghidra symbol: FUN_018bb720 */


void FUN_018bb720(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined8 local_30;
  
  local_30 = 0;
  lVar1 = FUN_01951400(param_2);
  iVar4 = *(int *)(lVar1 + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar2 = FUN_004aeac0(lVar1,iVar3);
      FUN_01814710(*(undefined8 *)(param_1 + 0x58),&local_30,lVar2,0);
      FUN_00414ad0(lVar2 + 0x100,local_30);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00414480(&local_30);
  return;
}

