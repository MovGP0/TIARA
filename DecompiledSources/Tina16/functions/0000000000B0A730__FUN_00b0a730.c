/* Ghidra address: 00b0a730 */
/* Ghidra symbol: FUN_00b0a730 */


void FUN_00b0a730(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  uint local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  cVar1 = FUN_00b09b70(param_1,param_2,param_3);
  if (cVar1 == '\0') {
    return;
  }
  lVar4 = FUN_0084e390(param_1,param_2,param_3);
  if ((lVar4 != 0) &&
     ((*(int *)(param_1 + 0x63c) == -1 ||
      ((((iVar3 = *(int *)(param_1 + 0x640), *(int *)(param_1 + 0x4ec) <= iVar3 &&
         (iVar2 = FUN_00848350(param_1), iVar3 < *(int *)(param_1 + 0x4ec) + iVar2)) &&
        (*(int *)(param_1 + 0x4e8) <= *(int *)(param_1 + 0x63c))) &&
       (iVar3 = FUN_00848310(param_1), *(int *)(param_1 + 0x63c) < *(int *)(param_1 + 0x4e8) + iVar3
       )))))) {
    FUN_00849e90(param_1,&local_38,param_2,param_3);
    (**(code **)(**(longlong **)(param_1 + 0x618) + 400))
              (*(longlong **)(param_1 + 0x618),local_38,local_34,local_30 - local_38,
               local_2c - local_34);
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x618),1);
    plVar5 = (longlong *)FUN_00b07b40(*(undefined8 *)(param_1 + 0x618));
    (**(code **)(*plVar5 + 600))(plVar5);
    return;
  }
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x618),0);
  return;
}

