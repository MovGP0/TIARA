/* Ghidra address: 01ac5e20 */
/* Ghidra symbol: FUN_01ac5e20 */


void FUN_01ac5e20(longlong param_1,undefined8 *param_2,ushort param_3,int param_4,undefined8 param_5
                 ,undefined8 param_6)

{
  longlong *plVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  short sVar7;
  undefined8 uVar8;
  short local_4a;
  undefined8 local_40 [2];
  
  local_40[0] = 0;
  FUN_00414610(param_5);
  sVar7 = *(short *)(param_1 + 0x10);
  local_4a = 0;
  do {
    FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
    lVar5 = FUN_004aeac0(param_1,local_4a);
    lVar5 = *(longlong *)(lVar5 + 0xe0);
    lVar6 = FUN_004aeac0(param_1,local_4a);
    plVar1 = *(longlong **)(lVar6 + 200);
    FUN_01cc0ae0(lVar5,local_40);
    uVar3 = FUN_004413f0(&LAB_01ac6144,local_40[0]);
    if (uVar3 != 0) {
      FUN_00416dc0(local_40,local_40[0],1,uVar3 - 1);
    }
    if (((*(char *)(lVar5 + 8) == '\0') &&
        (cVar2 = FUN_004113d0(lVar5,&PTR_FUN_01cb38a0), cVar2 != '\0')) &&
       (iVar4 = FUN_00416db0(local_40[0],param_5), iVar4 == 0)) {
      if (param_4 < 3) {
        if (param_4 == 2) {
          (**(code **)(*plVar1 + 0x10))(plVar1,lVar5,1);
          if (*(char *)(lVar5 + 0x39) == '\0') {
            uVar8 = (**(code **)(*plVar1 + 0x48))(plVar1,param_6);
            param_2[param_3] = uVar8;
          }
          else {
            uVar8 = (**(code **)(*plVar1 + 0x48))(plVar1,param_6);
            *param_2 = uVar8;
          }
        }
        else if (param_4 == 0) {
          if (*(char *)(lVar5 + 0x39) == '\0') {
            uVar8 = (**(code **)(*plVar1 + 0x80))(plVar1,lVar5);
            param_2[param_3] = uVar8;
          }
          else {
            uVar8 = (**(code **)(*plVar1 + 0x80))(plVar1,lVar5);
            *param_2 = uVar8;
          }
        }
        else if (param_4 == 1) {
          if (*(char *)(lVar5 + 0x39) == '\0') {
            uVar8 = (**(code **)(*plVar1 + 0x70))(plVar1,lVar5);
            param_2[param_3] = uVar8;
          }
          else {
            uVar8 = (**(code **)(*plVar1 + 0x70))(plVar1,lVar5);
            *param_2 = uVar8;
          }
        }
      }
      else if (param_4 == 3) {
        if (*(char *)(lVar5 + 0x39) == '\0') {
          uVar8 = (**(code **)(*plVar1 + 0x78))(plVar1,lVar5);
          param_2[param_3] = uVar8;
        }
        else {
          uVar8 = (**(code **)(*plVar1 + 0x78))(plVar1,lVar5);
          *param_2 = uVar8;
        }
      }
      else if (param_4 == 4) {
        if (*(char *)(lVar5 + 0x39) == '\0') {
          uVar8 = (**(code **)(*plVar1 + 0x68))(plVar1,lVar5);
          param_2[param_3] = uVar8;
        }
        else {
          uVar8 = (**(code **)(*plVar1 + 0x68))(plVar1,lVar5);
          *param_2 = uVar8;
        }
      }
      if (*(char *)(lVar5 + 0x39) == '\0') {
        param_3 = param_3 + 1;
      }
    }
    local_4a = local_4a + 1;
    sVar7 = sVar7 + -1;
  } while (sVar7 != 0);
  FUN_00414480(local_40);
  FUN_00414480(&param_5);
  return;
}

