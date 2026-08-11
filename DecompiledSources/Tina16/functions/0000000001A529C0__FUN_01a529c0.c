/* Ghidra address: 01a529c0 */
/* Ghidra symbol: FUN_01a529c0 */


undefined1 FUN_01a529c0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined1 auStack_128 [40];
  undefined8 local_100;
  undefined8 local_f8;
  undefined1 *local_f0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c0;
  undefined8 local_b0;
  undefined4 local_a0;
  int local_9c;
  int local_94;
  int local_90;
  longlong local_80 [9];
  undefined1 local_31;
  longlong local_30;
  
  local_f0 = auStack_128;
  local_100 = 0;
  local_f8 = 0;
  local_80[7] = 0;
  local_80[6] = 0;
  local_80[5] = 0;
  local_80[4] = 0;
  local_80[3] = 0;
  local_80[2] = 0;
  local_80[1] = 0;
  local_80[0] = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  local_31 = 0;
  FUN_00414480(local_res18);
  local_30 = 0;
  FUN_00414480(local_80);
  local_30 = FUN_00f30500(local_res10,0,0);
  local_d8 = FUN_004113f0(local_30,&LAB_00f256b8);
  iVar2 = *(int *)(*(longlong *)(local_d8 + 0x10) + 0x10);
  local_90 = 0;
  if (-1 < iVar2 + -1) {
    do {
      local_b0 = FUN_00f33510(local_d8,local_90);
      local_c0 = FUN_004113f0(local_b0,&LAB_00f23b78);
      iVar3 = *(int *)(*(longlong *)(local_c0 + 0x10) + 0x10);
      local_94 = 0;
      if (-1 < iVar3 + -1) {
        do {
          local_d0 = FUN_00f30ba0(local_c0,local_94);
          (**(code **)(**(longlong **)(local_d0 + 0x10) + 0x18))
                    (*(longlong **)(local_d0 + 0x10),local_80 + 2);
          iVar1 = FUN_00416db0(local_80[2],L"event");
          if (iVar1 == 0) {
            (**(code **)(**(longlong **)(local_d0 + 0x18) + 0x18))
                      (*(longlong **)(local_d0 + 0x18),&local_f8);
            FUN_00414ad0(local_res18,local_f8);
            local_31 = 1;
          }
          else {
            iVar1 = FUN_00416db0(local_80[2],L"event_f");
            if (iVar1 == 0) {
              (**(code **)(**(longlong **)(local_d0 + 0x18) + 0x18))
                        (*(longlong **)(local_d0 + 0x18),local_80 + 6);
              local_9c = FUN_004170c0(L"stream state",local_80[6],1);
              if (0 < local_9c) {
                FUN_00416dc0(local_80 + 6,local_80[6],local_9c + 0xd,0xff);
                FUN_0043ea00(local_80,local_80[6]);
              }
              local_9c = FUN_004170c0(L"intent time",local_80[6],1);
              if (0 < local_9c) {
                FUN_00416dc0(local_80 + 6,local_80[6],local_9c + 0xc,0xff);
                FUN_0043ea00(&local_100,local_80[6]);
                FUN_00414ad0(param_1 + 0x840,local_100);
              }
            }
          }
          local_94 = local_94 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      local_90 = local_90 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (local_80[0] != 0) {
    local_a0 = FUN_0043fc00(local_80[0]);
    FUN_01a52e40(param_1,local_a0);
  }
  if (local_30 != 0) {
    FUN_00410f20(local_30);
  }
  FUN_00414560(&local_100,2);
  FUN_00414560(local_80,8);
  FUN_00414480(&local_res10);
  return local_31;
}

