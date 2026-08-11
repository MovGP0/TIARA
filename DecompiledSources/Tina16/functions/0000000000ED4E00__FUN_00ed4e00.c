/* Ghidra address: 00ed4e00 */
/* Ghidra symbol: FUN_00ed4e00 */


void FUN_00ed4e00(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  int iVar8;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_48 = 0;
  local_40 = 0;
  local_30 = 0;
  local_38 = 0;
  plVar1 = *(longlong **)(param_1 + 0x838);
  FUN_00416ba0(&local_40,*(undefined8 *)PTR_DAT_020049a0,*(undefined8 *)PTR_DAT_02004c08);
  FUN_00724420(plVar1,local_40);
  cVar2 = (**(code **)(*plVar1 + 0xa8))(plVar1);
  if (cVar2 != '\0') {
    FUN_00724270(plVar1,&local_48);
    plVar6 = (longlong *)FUN_005dc9d0(&PTR_FUN_005d4e78,1,local_48);
    plVar7 = (longlong *)FUN_007fc180(&PTR_FUN_00ebd618,1,*(undefined8 *)PTR_DAT_02004030);
    FUN_0064dd90(plVar7,&local_50);
    FUN_00724270(plVar1,&local_60);
    FUN_00441920(&local_58,local_60);
    FUN_00416ad0(&local_50,local_58);
    FUN_0064de00(plVar7,local_50);
    (**(code **)(*plVar6 + 0x90))
              (plVar6,*(undefined8 *)(param_1 + 0x8d0),*(undefined8 *)(plVar7[0xda] + 0x4a0));
    iVar4 = (**(code **)(*plVar7 + 0x2d0))(plVar7);
    if (iVar4 == 1) {
      iVar4 = (**(code **)(**(longlong **)(plVar7[0xda] + 0x4a0) + 0x28))();
      iVar8 = 0;
      if (-1 < iVar4 + -1) {
        do {
          cVar2 = FUN_0068bca0(plVar7[0xda],iVar8);
          if (cVar2 != '\0') {
            (**(code **)(**(longlong **)(plVar7[0xda] + 0x4a0) + 0x18))
                      (*(longlong **)(plVar7[0xda] + 0x4a0),&local_30,iVar8);
            (**(code **)(*plVar6 + 0x10))
                      (plVar6,&local_38,*(undefined8 *)(param_1 + 0x8d0),local_30,0);
            sVar3 = FUN_00eab320(*(undefined8 *)(param_1 + 0x888),*(undefined8 *)(param_1 + 0x8d0),
                                 &local_30);
            if (sVar3 == 6) {
              (**(code **)(**(longlong **)(param_1 + 0x888) + 0x18))
                        (*(longlong **)(param_1 + 0x888),*(undefined8 *)(param_1 + 0x8d0),local_30,
                         local_38);
              plVar1 = *(longlong **)(param_1 + 0x858);
              uVar5 = (**(code **)(*plVar1 + 0x260))(plVar1);
              (**(code **)(*(longlong *)plVar1[0x9e] + 0x48))((longlong *)plVar1[0x9e],uVar5,1);
            }
            if (sVar3 == 2) break;
          }
          iVar8 = iVar8 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
    }
    FUN_00410f20(plVar7);
    FUN_00410f20(plVar6);
    FUN_00ece0d0(param_1,param_2);
  }
  FUN_00414480(&local_60);
  FUN_00414480(&local_58);
  FUN_00414480(&local_50);
  FUN_00414480(&local_48);
  FUN_00414560(&local_40,3);
  return;
}

