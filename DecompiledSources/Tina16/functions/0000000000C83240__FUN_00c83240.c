/* Ghidra address: 00c83240 */
/* Ghidra symbol: FUN_00c83240 */


longlong *
FUN_00c83240(longlong param_1,longlong *param_2,int param_3,undefined8 param_4,longlong param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  bool bVar6;
  undefined8 local_res20;
  int local_4c;
  int local_48;
  int local_44;
  longlong local_38;
  undefined8 local_30;
  
  local_38 = 0;
  local_30 = 0;
  local_res20 = param_4;
  FUN_00414610(param_4);
  FUN_00414610(param_5);
  FUN_00414480(param_2);
  local_4c = -1;
  iVar3 = *(int *)(*(longlong *)(param_1 + 8) + 0x10);
  local_48 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 8),local_48);
      FUN_00414ad0(param_2,*(undefined8 *)(lVar4 + 0x28));
      if (*(int *)(lVar4 + 0x50) == param_3) {
        local_4c = *(int *)(lVar4 + 0x54);
        if (*param_2 != 0) goto LAB_00c83464;
        break;
      }
      if (*(int *)(lVar4 + 0x50) < 0) {
        plVar5 = (longlong *)FUN_00c81e70(lVar4);
        iVar1 = (**(code **)(*plVar5 + 0x28))(plVar5,0);
        local_44 = 0;
        if (-1 < iVar1 + -1) {
          do {
            if ((param_3 == 0x39) && (param_5 != 0)) {
              (**(code **)(*plVar5 + 0x30))(plVar5,&local_30,local_44,local_res20,0);
              iVar2 = FUN_00416db0(param_5,local_30);
              bVar6 = iVar2 == 0;
            }
            else {
              iVar2 = (**(code **)(*plVar5 + 0x40))(plVar5,local_44);
              bVar6 = param_3 == iVar2;
            }
            if (bVar6) {
              local_4c = *(int *)(lVar4 + 0x54);
              (**(code **)(*plVar5 + 0x48))(plVar5,&local_38,local_44);
              if (local_38 != 0) {
                (**(code **)(*plVar5 + 0x48))(plVar5,param_2,local_44);
              }
              if (*param_2 == 0) goto LAB_00c8341f;
              goto LAB_00c83464;
            }
            local_44 = local_44 + 1;
            iVar1 = iVar1 + -1;
          } while (iVar1 != 0);
        }
      }
      local_48 = local_48 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
LAB_00c8341f:
  if (local_4c < 0) {
    FUN_00414480(param_2);
  }
  else {
    FUN_00c84e80(param_1,param_2,local_4c);
  }
  iVar3 = FUN_00416db0(*param_2,L"<none>");
  if (iVar3 == 0) {
    FUN_00414480(param_2);
  }
LAB_00c83464:
  FUN_00414560(&local_38,2);
  FUN_00414560(&local_res20,2);
  return param_2;
}

