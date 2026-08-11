/* Ghidra address: 00b0b140 */
/* Ghidra symbol: FUN_00b0b140 */


void FUN_00b0b140(longlong param_1,int param_2,int param_3)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 local_48;
  undefined8 local_40 [2];
  
  local_48 = 0;
  local_40[0] = 0;
  iVar3 = *(int *)(param_1 + 0x4c0);
  iVar5 = *(int *)(param_1 + 0x4e0) + -1;
  if (iVar3 <= iVar5) {
    iVar5 = (iVar5 - iVar3) + 1;
    do {
      if (param_2 <= param_3 + -1) {
        iVar6 = ((param_3 + -1) - param_2) + 1;
        iVar4 = param_2;
        do {
          lVar1 = FUN_0084e390(param_1,iVar4,iVar3);
          if (lVar1 != 0) {
            plVar2 = (longlong *)FUN_0084e390(param_1,iVar4,iVar3);
            (**(code **)(*plVar2 + 0x18))(plVar2,local_40);
            FUN_00b0b2a0(param_1,iVar4,iVar3,local_40[0]);
          }
          iVar4 = iVar4 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  lVar1 = FUN_0084e390(param_1,*(undefined4 *)(param_1 + 0x4a8),*(undefined4 *)(param_1 + 0x4ac));
  if (lVar1 != 0) {
    plVar2 = (longlong *)
             FUN_0084e390(param_1,*(undefined4 *)(param_1 + 0x4a8),*(undefined4 *)(param_1 + 0x4ac))
    ;
    (**(code **)(*plVar2 + 0x18))(plVar2,&local_48);
    FUN_00b07aa0(*(undefined8 *)(param_1 + 0x618),local_48);
  }
  FUN_00414560(&local_48,2);
  return;
}

