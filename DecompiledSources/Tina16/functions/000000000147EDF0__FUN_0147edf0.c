/* Ghidra address: 0147edf0 */
/* Ghidra symbol: FUN_0147edf0 */


undefined4
FUN_0147edf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined1 *param_5)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 auStack_128 [40];
  undefined8 *local_100;
  undefined8 local_f8;
  undefined1 *local_f0;
  bool local_d9;
  longlong local_d8;
  longlong local_d0;
  char local_b9;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  uint local_70;
  uint local_6c;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  
  local_f0 = auStack_128;
  local_f8 = 0;
  local_100 = (undefined8 *)0x0;
  local_78 = (undefined8 *)0x0;
  local_80 = (undefined8 *)0x0;
  local_20 = 0;
  local_28 = 0;
  FUN_00414480(&local_20);
  FUN_005d10a0(param_1,0,0);
  FUN_005d1300(&local_20,param_1);
  uVar3 = FUN_00f30500(local_20,0,0);
  local_38 = FUN_004113f0(uVar3,&LAB_00f23b78);
  FUN_00414480(&local_20);
  FUN_00414480(&local_28);
  FUN_005d10a0(param_2,0,0);
  FUN_005d1300(&local_28,param_2);
  uVar3 = FUN_00f30500(local_28,0,0);
  local_40 = FUN_004113f0(uVar3,&LAB_00f23b78);
  FUN_00414480(&local_28);
  uVar3 = FUN_014860a0(local_38,L"graph");
  local_50 = FUN_014860c0(uVar3,L"components");
  uVar3 = FUN_014860a0(local_40,L"graph");
  local_58 = FUN_014860c0(uVar3,L"components");
  local_60 = FUN_00f33100(&LAB_00f256b8,1);
  local_68 = FUN_00f33100(&LAB_00f256b8,1);
  *param_5 = 0;
  param_5[1] = 1;
  *(undefined4 *)(param_5 + 4) = 0;
  iVar4 = *(int *)(*(longlong *)(local_50 + 0x10) + 0x10);
  local_6c = 0;
  if (-1 < iVar4 + -1) {
    do {
      local_d0 = *(longlong *)(local_50 + 0x10);
      if (*(uint *)(local_d0 + 0x10) <= local_6c) {
        FUN_00594f90();
      }
      local_88 = FUN_004113f0(*(undefined8 *)
                               (*(longlong *)(local_d0 + 8) + (longlong)(int)local_6c * 8),
                              &LAB_00f23b78);
      FUN_014861c0(local_88,&local_78,L"label");
      local_b9 = '\0';
      iVar1 = *(int *)(*(longlong *)(local_58 + 0x10) + 0x10);
      local_70 = 0;
      if (-1 < iVar1 + -1) {
        do {
          local_d8 = *(longlong *)(local_58 + 0x10);
          if (*(uint *)(local_d8 + 0x10) <= local_70) {
            FUN_00594f90();
          }
          local_90 = FUN_004113f0(*(undefined8 *)
                                   (*(longlong *)(local_d8 + 8) + (longlong)(int)local_70 * 8),
                                  &LAB_00f23b78);
          FUN_014861c0(local_90,&local_80,L"label");
          if (local_78 == local_80) {
            local_d9 = true;
          }
          else if ((local_78 == (undefined8 *)0x0) || (local_80 == (undefined8 *)0x0)) {
            local_d9 = false;
          }
          else {
            iVar2 = FUN_0043e420(local_78,local_80);
            local_d9 = iVar2 == 0;
          }
          if (local_d9 != false) {
            local_98 = FUN_00f31350(local_90);
            FUN_00f335b0(local_60,local_98);
            local_b9 = '\x01';
            iVar1 = FUN_01486270(local_88,L"classID");
            iVar2 = FUN_01486270(local_90,L"classID");
            if (iVar1 != iVar2) {
              local_a0 = FUN_00f309b0(&LAB_00f23b78,1);
              FUN_00f30ec0(local_a0,L"label",local_78);
              FUN_00f30ec0(local_a0,L"reason",L"classID mismatch");
              FUN_00f335b0(local_68,local_a0);
              *param_5 = 1;
              param_5[1] = 0;
              *(int *)(param_5 + 4) = *(int *)(param_5 + 4) + 1;
            }
            local_a8 = FUN_014860c0(local_88,L"pins");
            local_b0 = FUN_014860c0(local_90,L"pins");
            FUN_00f2d080(local_a8,&local_f8);
            FUN_00f2d080(local_b0,&local_100);
            iVar1 = FUN_00416db0(local_f8,local_100);
            if (iVar1 != 0) {
              local_a0 = FUN_00f309b0(&LAB_00f23b78,1);
              FUN_00f30ec0(local_a0,L"label",local_78);
              FUN_00f30ec0(local_a0,L"reason",L"pins mismatch");
              FUN_00f335b0(local_68,local_a0);
              *param_5 = 1;
              *(int *)(param_5 + 4) = *(int *)(param_5 + 4) + 1;
            }
            break;
          }
          local_70 = local_70 + 1;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
      if (local_b9 == '\0') {
        local_a0 = FUN_00f309b0(&LAB_00f23b78,1);
        FUN_00f30ec0(local_a0,L"label",local_78);
        FUN_00f30ec0(local_a0,L"reason",L"missing in json2");
        FUN_00f335b0(local_68,local_a0);
        *param_5 = 1;
        param_5[1] = 0;
        *(int *)(param_5 + 4) = *(int *)(param_5 + 4) + 1;
      }
      local_6c = local_6c + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  uVar3 = FUN_014860a0(local_40,L"graph");
  FUN_00f31ff0(uVar3,L"components");
  uVar3 = FUN_014860a0(local_40,L"graph");
  FUN_00f30e70(uVar3,L"components",local_60);
  local_48 = FUN_00f309b0(&LAB_00f23b78,1);
  FUN_00f30e70(local_48,L"differences",local_68);
  FUN_0147d210(param_3,local_40);
  FUN_0147d210(param_4,local_48);
  FUN_00410f20(local_38);
  FUN_00410f20(local_40);
  local_2c = *(undefined4 *)(param_5 + 4);
  FUN_00414560(&local_100,2);
  FUN_00414560(&local_80,2);
  FUN_00414560(&local_28,2);
  return local_2c;
}

