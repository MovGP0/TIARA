/* Ghidra address: 01a53320 */
/* Ghidra symbol: FUN_01a53320 */


void FUN_01a53320(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  undefined8 local_res10;
  longlong local_res18;
  undefined1 auStack_108 [40];
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 *local_d0;
  longlong local_b0;
  longlong local_a0;
  undefined4 local_78;
  int local_74;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong local_28;
  undefined8 local_20;
  
  local_d0 = auStack_108;
  local_e0 = 0;
  local_d8 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_20 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  local_28 = 0;
  FUN_00416ba0(&local_40,*(undefined8 *)PTR_DAT_020049a0,L"\\Vhdl\\aiprompts\\");
  FUN_00414480(&local_20);
  FUN_00416ba0(&local_d8,local_40,local_res10);
  FUN_005d10a0(local_d8,0,0);
  FUN_00416ba0(&local_e0,local_40,local_res10);
  FUN_005d1300(&local_20,local_e0);
  local_28 = FUN_00f30500(local_20,0,0);
  FUN_00414480(&local_20);
  local_a0 = FUN_004113f0(local_28,&LAB_00f23b78);
  iVar2 = *(int *)(*(longlong *)(local_a0 + 0x10) + 0x10);
  local_74 = 0;
  if (-1 < iVar2 + -1) {
    do {
      local_b0 = FUN_00f30ba0(local_a0,local_74);
      (**(code **)(**(longlong **)(local_b0 + 0x10) + 0x18))
                (*(longlong **)(local_b0 + 0x10),&local_58);
      iVar1 = FUN_00416db0(local_58,L"welcome");
      if (iVar1 == 0) {
        (**(code **)(**(longlong **)(local_b0 + 0x18) + 0x18))
                  (*(longlong **)(local_b0 + 0x18),&local_48);
        FUN_00414ad0(local_res18 + 0x10,local_48);
      }
      else {
        iVar1 = FUN_00416db0(local_58,L"instructions");
        if (iVar1 == 0) {
          (**(code **)(**(longlong **)(local_b0 + 0x18) + 0x18))
                    (*(longlong **)(local_b0 + 0x18),&local_48);
          FUN_00414ad0(local_res18 + 0x18,local_48);
        }
        else {
          iVar1 = FUN_00416db0(local_58,L"question");
          if (iVar1 == 0) {
            (**(code **)(**(longlong **)(local_b0 + 0x18) + 0x18))
                      (*(longlong **)(local_b0 + 0x18),&local_48);
            FUN_00414ad0(local_res18 + 0x20,local_48);
          }
          else {
            iVar1 = FUN_00416db0(local_58,L"history");
            if (iVar1 == 0) {
              (**(code **)(**(longlong **)(local_b0 + 0x18) + 0x18))
                        (*(longlong **)(local_b0 + 0x18),&local_48);
              local_78 = FUN_0043fc00(local_48);
              *(undefined4 *)(local_res18 + 0x48) = local_78;
            }
          }
        }
      }
      local_74 = local_74 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (local_28 != 0) {
    FUN_00410f20(local_28);
  }
  FUN_00414560(&local_e0,2);
  FUN_00414560(&local_68,7);
  FUN_00414480(&local_20);
  FUN_00414480(&local_res10);
  return;
}

