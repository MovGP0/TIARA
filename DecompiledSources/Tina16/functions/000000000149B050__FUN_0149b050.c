/* Ghidra address: 0149b050 */
/* Ghidra symbol: FUN_0149b050 */


void FUN_0149b050(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  int local_34;
  int local_30;
  
  plVar4 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  lVar1 = *(longlong *)(param_1 + 0x700);
  iVar3 = FUN_01497c00(param_1);
  local_34 = *(int *)(lVar1 + 0x4c0);
  if (local_34 <= iVar3 + -2) {
    iVar7 = ((iVar3 + -2) - local_34) + 1;
    do {
      local_30 = local_34 + 1;
      if (local_30 <= iVar3 + -1) {
        iVar8 = ((iVar3 + -1) - local_30) + 1;
        do {
          cVar2 = FUN_0149af80(param_1,param_2,local_34,local_30,*(undefined4 *)(param_1 + 0x920));
          if (cVar2 != '\0') {
            uVar5 = FUN_0084e3c0(lVar1,local_30);
            (**(code **)(*plVar4 + 0x10))(plVar4,uVar5);
            plVar6 = (longlong *)FUN_0084e3c0(lVar1,local_30);
            uVar5 = FUN_0084e3c0(lVar1,local_34);
            (**(code **)(*plVar6 + 0x10))(plVar6,uVar5);
            plVar6 = (longlong *)FUN_0084e3c0(lVar1,local_34);
            (**(code **)(*plVar6 + 0x10))(plVar6,plVar4);
          }
          local_30 = local_30 + 1;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      local_34 = local_34 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  FUN_00410f20(plVar4);
  return;
}

