/* Ghidra address: 01717ce0 */
/* Ghidra symbol: FUN_01717ce0 */


undefined8
FUN_01717ce0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30;
  
  local_68 = 0;
  local_70 = 0;
  local_60 = 0;
  local_50 = 0;
  local_58 = 0;
  local_48 = 0;
  local_40 = 0;
  local_30 = 0;
  local_38 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  FUN_00414610(local_res20);
  FUN_00414610(param_5);
  FUN_00414480(param_2);
  iVar1 = FUN_00c856a0(*(undefined8 *)PTR_DAT_02002c40,*(undefined1 *)(param_1 + 0x268));
  iVar7 = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar5 = FUN_00c856d0(*(undefined8 *)PTR_DAT_02002c40,iVar7,*(undefined1 *)(param_1 + 0x268));
      plVar6 = (longlong *)FUN_00c81e70();
      if (plVar6 == (longlong *)0x0) {
        if (*(int *)(lVar5 + 0x50) == param_6) {
          FUN_004169a0(&local_60,param_1 + 0x120);
          FUN_00c85a00(*(undefined8 *)PTR_DAT_02002c40,&local_30,*(undefined4 *)(lVar5 + 0x54),
                       local_60,*(undefined1 *)(param_1 + 0x268));
          uVar4 = 0;
          if (local_30 != 0) {
            uVar4 = *(undefined4 *)(local_30 + -4);
          }
          FUN_00416dc0(&local_30,local_30,2,uVar4);
          FUN_004169a0(&local_70,param_1 + 0x120);
          FUN_00c858e0(*(undefined8 *)PTR_DAT_02002c40,&local_68,iVar7,local_70,
                       *(undefined1 *)(param_1 + 0x268));
          FUN_00416cd0(param_2,8,local_res18,&DAT_017181f4,&DAT_01718208,local_30,&DAT_0171821c,
                       local_68,&DAT_0171821c,param_5);
          break;
        }
      }
      else {
        iVar2 = (**(code **)(*plVar6 + 0x28))(plVar6,*(undefined8 *)(param_1 + 0x240));
        iVar8 = 0;
        if (-1 < iVar2 + -1) {
          do {
            iVar3 = (**(code **)(*plVar6 + 0x40))(plVar6,iVar8);
            if (iVar3 == param_6) {
              uVar4 = FUN_00c81900(plVar6);
              FUN_004169a0(&local_40,param_1 + 0x120);
              FUN_00c85a00(*(undefined8 *)PTR_DAT_02002c40,&local_30,uVar4,local_40,
                           *(undefined1 *)(param_1 + 0x268));
              uVar4 = 0;
              if (local_30 != 0) {
                uVar4 = *(undefined4 *)(local_30 + -4);
              }
              FUN_00416dc0(&local_30,local_30,2,uVar4);
              FUN_004169a0(&local_48,param_1 + 0x120);
              FUN_00c85700(*(undefined8 *)PTR_DAT_02002c40,&local_38,*(undefined4 *)(lVar5 + 0x50),
                           local_48,*(undefined1 *)(param_1 + 0x268),
                           *(undefined8 *)(param_1 + 0x240));
              FUN_004169a0(&local_58,param_1 + 0x120);
              (**(code **)(*plVar6 + 0x30))
                        (plVar6,&local_50,iVar8,local_58,*(undefined8 *)(param_1 + 0x240));
              FUN_00416cd0(param_2,10,local_res18,&DAT_017181f4,&DAT_01718208,local_30,&DAT_0171821c
                           ,local_38,&DAT_0171821c,local_50,&DAT_0171821c,param_5);
              goto LAB_0171817c;
            }
            iVar8 = iVar8 + 1;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
      }
      iVar7 = iVar7 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
LAB_0171817c:
  FUN_00414560(&local_70,9);
  FUN_00414560(&local_res18,3);
  return param_2;
}

