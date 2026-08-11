/* Ghidra address: 01a51560 */
/* Ghidra symbol: FUN_01a51560 */


void FUN_01a51560(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 local_40 [2];
  undefined8 local_30 [2];
  
  local_40[0] = 0;
  local_30[0] = 0;
  lVar4 = FUN_019a4600();
  iVar1 = *(int *)(lVar4 + 0x10);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    lVar5 = FUN_00b94e60(lVar4,iVar1);
    cVar3 = FUN_0198a580(lVar5);
    if ((cVar3 == '\b') && (*(char *)(*(longlong *)(lVar5 + 0x28) + 0x98) == '\0')) {
      plVar2 = *(longlong **)(*(longlong *)(*(longlong *)(lVar5 + 0x28) + 0x90) + 0xa0);
      (**(code **)(*plVar2 + 0x38))(plVar2,local_40);
      FUN_0043ea00(local_30,local_40[0]);
      (**(code **)(*param_2 + 0x78))(param_2,local_30[0]);
    }
  }
  FUN_00414480(local_40);
  FUN_00414480(local_30);
  return;
}

