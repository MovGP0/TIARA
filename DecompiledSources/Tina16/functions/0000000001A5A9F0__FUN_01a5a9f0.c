/* Ghidra address: 01a5a9f0 */
/* Ghidra symbol: FUN_01a5a9f0 */


undefined1 FUN_01a5a9f0(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined1 *local_e0;
  longlong local_c0;
  longlong local_b0;
  int local_84;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_31;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  
  local_e0 = auStack_108;
  local_e8 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_30 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  local_20 = 0;
  local_31 = 0;
  local_28 = 0;
  FUN_00414b50(&local_50,*(undefined8 *)(param_1 + 0x2ba0));
  FUN_00416ba0(&local_30,local_50,L"\\ls_cmd.txt");
  cVar1 = FUN_00440a20(local_30,1);
  if (cVar1 == '\0') {
    FUN_01a5ad00(0,local_e0);
  }
  else {
    FUN_00414480(&local_20);
    FUN_005d10a0(local_30,0,0);
    FUN_005d1300(&local_20,local_30);
    local_28 = FUN_00f30500(local_20,0,0);
    FUN_00414480(&local_20);
    local_b0 = FUN_004113f0(local_28,&LAB_00f23b78);
    iVar4 = *(int *)(*(longlong *)(local_b0 + 0x10) + 0x10);
    local_84 = 0;
    if (-1 < iVar4 + -1) {
      do {
        local_c0 = FUN_00f30ba0(local_b0,local_84);
        (**(code **)(**(longlong **)(local_c0 + 0x10) + 0x18))
                  (*(longlong **)(local_c0 + 0x10),&local_68);
        iVar2 = FUN_00416db0(local_68,L"running");
        if (iVar2 == 0) {
          (**(code **)(**(longlong **)(local_c0 + 0x18) + 0x18))
                    (*(longlong **)(local_c0 + 0x18),&local_58);
          FUN_0043e1a0(&local_e8,local_58);
          iVar2 = FUN_00416db0(local_e8,L"true");
          if (iVar2 == 0) {
            local_31 = 1;
          }
        }
        else {
          iVar2 = FUN_00416db0(local_68,L"port");
          if (iVar2 == 0) {
            (**(code **)(**(longlong **)(local_c0 + 0x18) + 0x18))
                      (*(longlong **)(local_c0 + 0x18),&local_58);
            uVar3 = FUN_0043fc00(local_58);
            *param_2 = uVar3;
          }
        }
        local_84 = local_84 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    if (local_28 != 0) {
      FUN_00410f20(local_28);
    }
    cVar1 = FUN_00440a20(local_30,1);
    if (cVar1 != '\0') {
      FUN_004412f0(local_30);
    }
  }
  FUN_00414480(&local_e8);
  FUN_00414560(&local_78,7);
  FUN_00414480(&local_30);
  FUN_00414480(&local_20);
  return local_31;
}

