/* Ghidra address: 01848540 */
/* Ghidra symbol: FUN_01848540 */


int FUN_01848540(longlong param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  local_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uVar4 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  FUN_004ae7e0(*(undefined8 *)(param_1 + 0x98),uVar4);
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x98) + 0x10);
  iVar3 = FUN_0184caf0();
  iVar8 = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar5 = FUN_0184cd80(*(undefined8 *)(param_1 + 0x90),iVar8);
      cVar2 = FUN_004113d0(uVar5,&DAT_01843700);
      if (cVar2 == '\0') {
        uVar5 = FUN_0184cd80(*(undefined8 *)(param_1 + 0x90),iVar8);
        cVar2 = FUN_004113d0(uVar5,&PTR_FUN_01843af8);
        if (cVar2 != '\0') goto LAB_0184860d;
      }
      else {
LAB_0184860d:
        lVar6 = FUN_00410e60(&DAT_01843e10,1);
        plVar7 = (longlong *)FUN_0184cd80(*(undefined8 *)(param_1 + 0x90),iVar8);
        (**(code **)(*plVar7 + 0x10))(plVar7,&local_50);
        FUN_00461840(lVar6 + 8,&local_50);
        uVar5 = FUN_0184cd80(*(undefined8 *)(param_1 + 0x90),iVar8);
        *(undefined8 *)(lVar6 + 0x20) = uVar5;
        FUN_004ae7e0(uVar4,lVar6);
      }
      iVar8 = iVar8 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00460ba0(&local_50);
  return iVar1 + -1;
}

