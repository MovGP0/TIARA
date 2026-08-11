/* Ghidra address: 01cdfc50 */
/* Ghidra symbol: FUN_01cdfc50 */


ulonglong FUN_01cdfc50(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                      longlong *param_5)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  int iVar8;
  
  if (*param_5 == 0) {
    lVar4 = FUN_00410e60(&PTR_FUN_00472dd0,1);
    *param_5 = lVar4;
  }
  uVar7 = 0;
  cVar2 = FUN_01d2dd00(param_1 + 0x14,param_3,param_4);
  if (cVar2 != '\0') {
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x28))(*(longlong **)(param_1 + 0x80));
    if (0 < iVar3) {
      do {
        plVar5 = (longlong *)
                 (**(code **)(**(longlong **)(param_1 + 0x80) + 0x30))
                           (*(longlong **)(param_1 + 0x80),iVar3 + -1);
        cVar2 = (**(code **)(*plVar5 + 0x88))(plVar5,param_2,param_3,param_4);
        if (cVar2 != '\0') {
          uVar7 = 2;
          uVar6 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x30))
                            (*(longlong **)(param_1 + 0x80),iVar3 + -1);
          FUN_004ae7e0(*param_5,uVar6);
        }
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x28))(*(longlong **)(param_1 + 0x70));
    iVar8 = 1;
    if (0 < iVar3) {
      do {
        uVar6 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x30))
                          (*(longlong **)(param_1 + 0x70),iVar8 + -1);
        plVar5 = (longlong *)FUN_004113f0(uVar6,&DAT_01ccbf00);
        cVar2 = (**(code **)(*plVar5 + 0x88))(plVar5,param_2,param_3,param_4);
        if (cVar2 != '\0') {
          uVar7 = uVar7 | 1;
          uVar6 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x30))
                            (*(longlong **)(param_1 + 0x70),iVar8 + -1);
          FUN_004ae7e0(*param_5,uVar6);
        }
        iVar8 = iVar8 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x28))(*(longlong **)(param_1 + 0x78));
    iVar8 = 1;
    if (0 < iVar3) {
      do {
        uVar6 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))
                          (*(longlong **)(param_1 + 0x78),iVar8 + -1);
        plVar5 = (longlong *)FUN_004113f0(uVar6,&DAT_01ccbf00);
        cVar2 = (**(code **)(*plVar5 + 0x88))(plVar5,param_2,param_3,param_4);
        if (cVar2 != '\0') {
          uVar7 = uVar7 | 1;
          uVar6 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))
                            (*(longlong **)(param_1 + 0x78),iVar8 + -1);
          FUN_004ae7e0(*param_5,uVar6);
        }
        plVar1 = (longlong *)plVar5[0x23];
        if ((plVar1 != (longlong *)0x0) &&
           (cVar2 = (**(code **)(*plVar1 + 0x88))(plVar1,param_2,param_3,param_4), cVar2 != '\0')) {
          uVar7 = uVar7 | 1;
          FUN_004ae7e0(*param_5,plVar5[0x23]);
        }
        iVar8 = iVar8 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  return uVar7;
}

