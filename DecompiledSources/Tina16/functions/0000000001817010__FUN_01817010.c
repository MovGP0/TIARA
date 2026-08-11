/* Ghidra address: 01817010 */
/* Ghidra symbol: FUN_01817010 */


int FUN_01817010(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int local_24;
  undefined8 local_20;
  
  local_20 = 0;
  local_24 = -1;
  iVar2 = FUN_004b2060();
  iVar5 = 0;
  iVar1 = local_24;
  if (-1 < iVar2 + -1) {
    do {
      FUN_0046c3f0(&local_20,param_2);
      lVar4 = FUN_01817000(param_1,iVar5);
      iVar3 = FUN_0043e6d0(local_20,*(undefined8 *)(lVar4 + 0x20));
      iVar1 = iVar5;
      if (iVar3 == 0) break;
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + -1;
      iVar1 = local_24;
    } while (iVar2 != 0);
  }
  local_24 = iVar1;
  FUN_00414480(&local_20);
  return local_24;
}

