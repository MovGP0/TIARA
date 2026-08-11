/* Ghidra address: 01ad9580 */
/* Ghidra symbol: FUN_01ad9580 */


void FUN_01ad9580(longlong param_1,char param_2,undefined1 param_3,longlong param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong local_res20;
  ulonglong local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_60 = 0;
  local_70 = 0;
  local_68 = 0;
  local_48 = 0;
  local_58 = 0;
  local_50 = 0;
  local_30 = 0;
  local_40 = 0;
  local_38 = 0;
  local_res20 = param_4;
  FUN_00414610(param_4);
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x28))(*(longlong **)(param_1 + 0xd8));
  iVar7 = 1;
  if (0 < iVar1) {
    do {
      lVar4 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x30))
                        (*(longlong **)(param_1 + 0xd8),iVar7 + -1);
      iVar2 = (**(code **)(**(longlong **)(lVar4 + 0x70) + 0x28))(*(longlong **)(lVar4 + 0x70));
      iVar8 = 1;
      if (0 < iVar2) {
        do {
          if (local_res20 == 0) {
LAB_01ad970f:
            uVar5 = (**(code **)(**(longlong **)(lVar4 + 0x70) + 0x30))
                              (*(longlong **)(lVar4 + 0x70),iVar8 + -1);
            FUN_01ad85f0(param_1,uVar5,param_3);
          }
          else {
            uVar5 = (**(code **)(**(longlong **)(lVar4 + 0x70) + 0x30))
                              (*(longlong **)(lVar4 + 0x70),iVar8 + -1);
            FUN_01cd6430(uVar5,&local_38);
            FUN_00416cd0(&local_30,3,&DAT_01ad99bc,local_38,&DAT_01ad99bc);
            FUN_00416cd0(&local_40,3,&DAT_01ad99bc,local_res20,&DAT_01ad99bc);
            iVar3 = FUN_004170c0(local_30,local_40,1);
            if (0 < iVar3) goto LAB_01ad970f;
          }
          iVar8 = iVar8 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      iVar2 = (**(code **)(**(longlong **)(lVar4 + 0x78) + 0x28))(*(longlong **)(lVar4 + 0x78));
      iVar8 = 1;
      if (0 < iVar2) {
        do {
          if (local_res20 == 0) {
LAB_01ad9806:
            uVar5 = (**(code **)(**(longlong **)(lVar4 + 0x78) + 0x30))
                              (*(longlong **)(lVar4 + 0x78),iVar8 + -1);
            FUN_01ad85f0(param_1,uVar5,param_3);
          }
          else {
            uVar5 = (**(code **)(**(longlong **)(lVar4 + 0x78) + 0x30))
                              (*(longlong **)(lVar4 + 0x78),iVar8 + -1);
            FUN_01cd6430(uVar5,&local_50);
            FUN_00416cd0(&local_48,3,&DAT_01ad99bc,local_50,&DAT_01ad99bc);
            FUN_00416cd0(&local_58,3,&DAT_01ad99bc,local_res20,&DAT_01ad99bc);
            iVar3 = FUN_004170c0(local_48,local_58,1);
            if (0 < iVar3) goto LAB_01ad9806;
          }
          lVar6 = (**(code **)(**(longlong **)(lVar4 + 0x78) + 0x30))
                            (*(longlong **)(lVar4 + 0x78),iVar8 + -1);
          if (*(longlong *)(lVar6 + 0x118) != 0) {
            if (local_res20 != 0) {
              uVar5 = (**(code **)(**(longlong **)(lVar4 + 0x78) + 0x30))
                                (*(longlong **)(lVar4 + 0x78),iVar8 + -1);
              FUN_01cd6430(uVar5,&local_68);
              FUN_00416cd0(&local_60,3,&DAT_01ad99bc,local_68,&DAT_01ad99bc);
              FUN_00416cd0(&local_70,3,&DAT_01ad99bc,local_res20,&DAT_01ad99bc);
              iVar3 = FUN_004170c0(local_60,local_70,1);
              if (iVar3 < 1) goto LAB_01ad9910;
            }
            lVar6 = (**(code **)(**(longlong **)(lVar4 + 0x78) + 0x30))
                              (*(longlong **)(lVar4 + 0x78),iVar8 + -1);
            FUN_01ad85f0(param_1,*(undefined8 *)(lVar6 + 0x118),param_3);
          }
LAB_01ad9910:
          iVar8 = iVar8 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      FUN_01ce27e0(lVar4);
      iVar7 = iVar7 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  if (param_2 != '\0') {
    FUN_01acfc60(param_1);
    FUN_01aceb90(param_1,1);
  }
  FUN_00414560(&local_70,9);
  FUN_00414480(&local_res20);
  return;
}

