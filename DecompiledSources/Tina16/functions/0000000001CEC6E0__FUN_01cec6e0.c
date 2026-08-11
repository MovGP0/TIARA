/* Ghidra address: 01cec6e0 */
/* Ghidra symbol: FUN_01cec6e0 */


void FUN_01cec6e0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                 longlong *param_5,undefined8 param_6,undefined8 param_7,char param_8)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_30 = 0;
  local_20[0] = 0;
  plVar5 = (longlong *)FUN_006d6380(param_7);
  iVar2 = (**(code **)(*plVar5 + 0x28))(plVar5);
  if (iVar2 == 0) {
    uVar6 = FUN_00b89270();
    FUN_00b8e520(uVar6,local_20,0x824);
    FUN_0064de00(param_6,local_20[0]);
    *param_4 = 0;
    goto LAB_01cec973;
  }
  plVar5 = (longlong *)FUN_006d6380(param_7);
  uVar3 = FUN_006d5120(param_7);
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_30,uVar3);
  FUN_00416cd0(&local_28,3,*(undefined8 *)(param_1 + 0x48),&DAT_01cec9b8,local_30);
  FUN_0064de00(param_6,local_28);
  iVar2 = FUN_006d5120(param_7);
  if (iVar2 != *(int *)(param_1 + 0x18) || param_8 != '\0') {
    uVar3 = FUN_006d5120(param_7);
    *(undefined4 *)(param_1 + 0x18) = uVar3;
    uVar6 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))
                      (*(longlong **)(param_1 + 0x10),uVar3);
    cVar1 = FUN_004113d0(uVar6,&DAT_013d1e58);
    if (cVar1 == '\0') {
      lVar7 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))
                        (*(longlong **)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
      *param_4 = lVar7;
      *param_5 = 0;
      iVar2 = FUN_0064d0b0(param_6);
      if (*(int *)(*param_4 + 0x104) == iVar2) {
        iVar2 = FUN_0064d120(param_6);
        if (*(int *)(*param_4 + 0x100) != iVar2) goto LAB_01cec937;
        FUN_01aceb90(*param_4,1);
      }
      else {
LAB_01cec937:
        FUN_01a77f90(param_6,param_2);
      }
      FUN_01ae4310(*param_4);
    }
    else {
      *param_4 = 0;
      lVar7 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))
                        (*(longlong **)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
      *param_5 = lVar7;
      FUN_013d2900(*param_5);
      iVar2 = FUN_004230a0(*param_5 + 0x40);
      iVar4 = FUN_0064d0b0(param_6);
      if (iVar2 == iVar4) {
        iVar2 = FUN_004230c0(*param_5 + 0x40);
        iVar4 = FUN_0064d120(param_6);
        if (iVar2 == iVar4) {
          FUN_013d2b30(*param_5,1);
          goto LAB_01cec963;
        }
      }
      FUN_01a77f90(param_6,param_2);
    }
  }
LAB_01cec963:
  FUN_01a7fc90(*(undefined8 *)PTR_DAT_02001e00);
LAB_01cec973:
  FUN_00414560(&local_30,3);
  return;
}

