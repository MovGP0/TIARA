/* Ghidra address: 01a369c0 */
/* Ghidra symbol: FUN_01a369c0 */


undefined1 FUN_01a369c0(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined1 auStack_108 [32];
  wchar_t *local_e8;
  undefined8 local_d8;
  undefined1 *local_d0;
  undefined8 local_c0;
  int local_a8;
  int local_a4;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong *local_50;
  undefined1 local_39;
  longlong local_38;
  undefined8 local_30 [2];
  
  local_d0 = auStack_108;
  local_d8 = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  local_90 = 0;
  local_98 = 0;
  local_30[0] = 0;
  local_38 = 0;
  local_e8 = L"temp-solution.json";
  FUN_00416cd0(&local_78,3,*(undefined8 *)(param_1 + 0x50),L"\\temp\\");
  FUN_00414480(local_30);
  uVar4 = FUN_0045ae90();
  local_c0 = uVar4;
  FUN_005d10a0(local_78,uVar4,1);
  FUN_005d13b0(local_30,local_78,uVar4);
  local_38 = FUN_00f30500(local_30[0],0,0);
  FUN_00414480(local_30);
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 1;
  local_58 = FUN_004113f0(local_38,&LAB_00f23b78);
  iVar5 = *(int *)(*(longlong *)(local_58 + 0x10) + 0x10);
  local_a4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      local_68 = FUN_00f30ba0(local_58,local_a4);
      (**(code **)(**(longlong **)(local_68 + 0x10) + 0x18))
                (*(longlong **)(local_68 + 0x10),&local_90);
      iVar1 = FUN_00416db0(local_90,L"calculation");
      if (iVar1 == 0) {
        local_60 = FUN_004113f0(*(undefined8 *)(local_68 + 0x18),&LAB_00f23b78);
        iVar1 = *(int *)(*(longlong *)(local_60 + 0x10) + 0x10);
        local_a8 = 0;
        if (-1 < iVar1 + -1) {
          do {
            local_70 = FUN_00f30ba0(local_60,local_a8);
            (**(code **)(**(longlong **)(local_70 + 0x10) + 0x18))
                      (*(longlong **)(local_70 + 0x10),&local_98);
            local_50 = *(longlong **)(local_70 + 0x18);
            iVar2 = FUN_00416db0(local_98,L"valid");
            if (iVar2 == 0) {
              FUN_013ba600(local_50);
              uVar3 = FUN_0040c840();
              *(undefined4 *)(param_1 + 0xb0) = uVar3;
            }
            else {
              iVar2 = FUN_00416db0(local_98,L"error");
              if (iVar2 == 0) {
                FUN_013ba600(local_50);
                uVar3 = FUN_0040c840();
                *(undefined4 *)(param_1 + 0xb4) = uVar3;
              }
              else {
                iVar2 = FUN_00416db0(local_98,L"status");
                if (iVar2 == 0) {
                  (**(code **)(*local_50 + 0x18))(local_50,&local_d8);
                  FUN_00414ad0(param_1 + 0xc0,local_d8);
                }
              }
            }
            local_a8 = local_a8 + 1;
            iVar1 = iVar1 + -1;
          } while (iVar1 != 0);
        }
      }
      local_a4 = local_a4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if ((*(int *)(param_1 + 0xb4) == 0) && (*(int *)(param_1 + 0xb0) == 1)) {
    local_39 = 1;
  }
  else {
    local_39 = 0;
  }
  if ((*(int *)(param_1 + 0xb4) == 0) && (*(int *)(param_1 + 0xb0) == 0)) {
    FUN_00414ad0(param_1 + 0xc0,L"Can not analyse this circuit using series parallel rules");
    *(undefined4 *)(param_1 + 0xb4) = 1;
  }
  if (local_38 != 0) {
    FUN_00410f20(local_38);
  }
  FUN_00414480(&local_d8);
  FUN_00414560(&local_98,5);
  FUN_00414480(local_30);
  return local_39;
}

