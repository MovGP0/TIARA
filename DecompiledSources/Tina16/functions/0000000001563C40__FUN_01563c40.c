/* Ghidra address: 01563c40 */
/* Ghidra symbol: FUN_01563c40 */


bool FUN_01563c40(undefined8 param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  bool local_29;
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0;
  local_28 = 0;
  lVar1 = *(longlong *)(param_2 + 0x40);
  local_29 = true;
  cVar3 = FUN_01d3f210(lVar1);
  if ((cVar3 != '\0') && (-1 < param_3)) {
    lVar2 = *(longlong *)(lVar1 + 0x1a8);
    FUN_015639b0(param_1,&local_20,lVar1,param_3);
    FUN_01563ad0(param_1,&local_28,local_20,*(undefined8 *)(lVar2 + 0x198));
    iVar4 = FUN_00416db0(local_28,&LAB_01563d28);
    local_29 = iVar4 == 0;
  }
  FUN_00414560(&local_28,2);
  return local_29;
}

