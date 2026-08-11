/* Ghidra address: 01717260 */
/* Ghidra symbol: FUN_01717260 */


void FUN_01717260(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                 char param_5,longlong param_6)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50 [2];
  undefined8 local_40 [2];
  
  local_60 = 0;
  local_68 = 0;
  local_58 = 0;
  local_50[0] = 0;
  local_40[0] = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  FUN_00414610(local_res20);
  FUN_00414610(param_6);
  if (param_5 == '\0') {
    plVar4 = *(longlong **)(param_1 + 0x10);
  }
  else if (param_5 == '\x01') {
    plVar4 = *(longlong **)(param_1 + 0x18);
  }
  else if (param_5 == '\x02') {
    plVar4 = *(longlong **)(param_1 + 0x20);
  }
  else if (param_5 == '\x03') {
    plVar4 = *(longlong **)(param_1 + 0x28);
  }
  else {
    plVar4 = *(longlong **)(param_1 + 0x30);
  }
  (**(code **)(*param_2 + 0x90))(param_2);
  iVar1 = (**(code **)(*plVar4 + 0x28))();
  iVar5 = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar3 = (**(code **)(*plVar4 + 0x30))(plVar4,iVar5);
      iVar2 = FUN_00415a60(*(undefined8 *)(lVar3 + 0x20),"[Internal]");
      if (iVar2 != 0) {
        iVar2 = FUN_00416db0(local_res18,L"[All]");
        if (iVar2 != 0) {
          FUN_00416880(local_50,*(undefined8 *)(lVar3 + 0x20));
          iVar2 = FUN_00416db0(local_res18,local_50[0]);
          if (iVar2 != 0) {
            FUN_00416880(&local_58,*(undefined8 *)(lVar3 + 0x28));
            iVar2 = FUN_004170c0(local_res18,local_58,1);
            if (iVar2 < 1) goto LAB_0171752a;
          }
        }
        if (((((param_6 == 0) || (iVar2 = FUN_00416db0(param_6,L"[All]"), iVar2 == 0)) ||
             (iVar2 = FUN_00416db0(param_6,*(undefined8 *)(lVar3 + 0x30)), iVar2 == 0)) ||
            (iVar2 = FUN_004170c0(param_6,*(undefined8 *)(lVar3 + 0x38),1), 0 < iVar2)) &&
           ((iVar2 = FUN_00416db0(local_res20,L"[All]"), iVar2 == 0 ||
            (iVar2 = FUN_0043e6d0(local_res20,*(undefined8 *)(lVar3 + 0x40)), iVar2 == 0)))) {
          (**(code **)(*plVar4 + 0x18))(plVar4,local_40,iVar5);
          if ((param_5 == '\x02') || (param_5 == '\x03')) {
            iVar2 = FUN_004413f0(&DAT_01717604,local_40[0]);
            if (0 < iVar2) {
              FUN_00416dc0(&local_68,local_40[0],1,iVar2 + -1);
              FUN_0043ea00(&local_60,local_68);
              FUN_00414b50(local_40,local_60);
            }
            iVar2 = (**(code **)(*param_2 + 0xb0))(param_2,local_40[0]);
            if (iVar2 == -1) {
              (**(code **)(*param_2 + 0x80))(param_2,local_40[0],lVar3);
            }
          }
          else {
            (**(code **)(*param_2 + 0x80))(param_2,local_40[0],lVar3);
          }
        }
      }
LAB_0171752a:
      iVar5 = iVar5 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414560(&local_68,4);
  FUN_00414480(local_40);
  FUN_00414560(&local_res18,2);
  FUN_00414480(&param_6);
  return;
}

