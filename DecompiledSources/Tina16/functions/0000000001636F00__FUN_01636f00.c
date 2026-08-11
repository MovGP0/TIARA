/* Ghidra address: 01636f00 */
/* Ghidra symbol: FUN_01636f00 */


void FUN_01636f00(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  local_38 = 0;
  plVar1 = *(longlong **)(param_1 + 0x70);
  lVar2 = FUN_0161bc10(*(undefined4 *)(param_1 + 0x5bc),*(undefined8 *)(param_2 + 0x48));
  iVar4 = *(int *)(lVar2 + 0xc);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      FUN_0043f750(local_30,iVar3);
      FUN_0161afd0(&DAT_0161a6f8,1,0);
      (**(code **)(*plVar1 + 0x80))(plVar1,local_30[0]);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00414560(&local_38,2);
  return;
}

