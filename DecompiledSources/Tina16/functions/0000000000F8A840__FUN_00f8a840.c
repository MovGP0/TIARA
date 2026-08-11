/* Ghidra address: 00f8a840 */
/* Ghidra symbol: FUN_00f8a840 */


void FUN_00f8a840(longlong param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int local_c4;
  int local_c0;
  undefined1 local_b0 [96];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  
  local_40[0] = 0;
  local_48 = 0;
  local_50 = 0;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0x510);
  (**(code **)(*plVar1 + 0x90))(plVar1);
  lVar3 = FUN_00f8b910(param_1,*(undefined4 *)(param_1 + 0x345c));
  if (lVar3 != 0) {
    lVar4 = _get_mcu_ram_result(*(undefined8 *)(param_1 + 0x60));
    if (*(int *)(lVar3 + 0x1c) == 0x800) {
      local_c0 = 4;
    }
    else {
      local_c0 = 1;
    }
    if (*(int *)(lVar3 + 0x2c) == 0) {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0x510);
      (**(code **)(*plVar1 + 0x78))(plVar1,L"<no memory>");
    }
    else {
      iVar6 = *(int *)(lVar3 + 0x2c) / local_c0;
      local_c4 = 0;
      if (-1 < iVar6 + -1) {
        do {
          iVar5 = *(int *)(lVar3 + 0x30) + local_c4 * local_c0;
          if (*(int *)(lVar3 + 0x1c) == 0x800) {
            uVar2 = _get_sram_value(*(undefined8 *)(param_1 + 0x60),iVar5);
            FUN_0043fba0(local_40,iVar5,8);
            FUN_00416ad0(local_40,L"    ");
            FUN_00414480(&local_48);
            FUN_015fa440(local_b0,uVar2,0x20);
            FUN_004169a0(&local_48,local_b0);
            FUN_015fa320(&local_48,*(undefined4 *)(param_1 + 0x33fc),8);
          }
          else if ((lVar4 == 0) ||
                  ((*(int *)(lVar3 + 0x1c) != 0x100 && (*(int *)(lVar3 + 0x1c) != 0x400)))) {
            if (lVar4 != 0) {
              FUN_0043fba0(local_40,iVar5,4);
              FUN_00416ad0(local_40,L"    ");
              FUN_00414480(&local_48);
              FUN_015fa440(local_b0,*(undefined1 *)(lVar4 + iVar5),8);
              FUN_004169a0(&local_48,local_b0);
              FUN_015fa320(&local_48,*(undefined4 *)(param_1 + 0x33fc),2);
            }
          }
          else {
            FUN_0043fba0(local_40,iVar5,8);
            FUN_00416ad0(local_40,L"    ");
            FUN_00414480(&local_48);
            FUN_015fa440(local_b0,*(undefined4 *)
                                   (lVar4 + ((longlong)iVar5 - (ulonglong)*(uint *)(lVar3 + 0x20)) *
                                            4),0x20);
            FUN_004169a0(&local_48,local_b0);
            FUN_015fa320(&local_48,*(undefined4 *)(param_1 + 0x33fc),8);
          }
          FUN_00414b50(&local_50,local_40[0]);
          FUN_00416ad0(local_40,local_48);
          plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0x510);
          (**(code **)(*plVar1 + 0x78))(plVar1,local_40[0]);
          local_c4 = local_c4 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
    }
    FUN_010a6f30(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x3498));
  }
  FUN_00414560(&local_50,3);
  return;
}

