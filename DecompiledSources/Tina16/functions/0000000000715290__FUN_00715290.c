/* Ghidra address: 00715290 */
/* Ghidra symbol: FUN_00715290 */


/* WARNING: Removing unreachable block (ram,0x00715444) */

void FUN_00715290(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  int local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined1 *local_a0;
  undefined4 local_7c;
  longlong local_78;
  longlong local_70;
  undefined8 local_60;
  longlong local_58;
  int local_4c;
  longlong local_48;
  int local_3c;
  int local_38;
  uint local_34;
  longlong local_30;
  longlong *local_28;
  longlong *local_20;
  
  local_a0 = auStack_f8;
  local_b8 = 0;
  local_60 = 0;
  puVar2 = auStack_f8;
  if (param_3 != 0) {
    FUN_00414ad0(param_1 + 0x40,param_3);
    puVar2 = local_a0;
  }
  local_a0 = puVar2;
  if (0 < *(int *)(*(longlong *)(param_1 + 0x20) + 0x10)) {
    local_30 = FUN_00717190(&PTR_FUN_00713a10,1);
    iVar4 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x10);
    local_34 = 0;
    if (-1 < iVar4 + -1) {
      do {
        local_70 = *(longlong *)(param_1 + 0x20);
        if (*(uint *)(local_70 + 0x10) <= local_34) {
          FUN_00594f90();
        }
        local_48 = *(longlong *)(*(longlong *)(local_70 + 8) + (longlong)(int)local_34 * 8);
        local_3c = (**(code **)(**(longlong **)(local_48 + 8) + 0x20))
                             (*(longlong **)(local_48 + 8),param_2);
        if (0 < local_3c) {
          local_78 = local_48;
          local_7c = FUN_00597e50(local_30 + 8,&local_78);
        }
        local_34 = local_34 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    if (*(int *)(local_30 + 0x10) == 0) {
      local_b0 = FUN_00416740(param_2);
      local_a8 = 10;
      local_d8 = 0;
      uVar3 = FUN_0044d8d0(&PTR_FUN_00712030,1,PTR_PTR_020012f8,&local_b0);
      FUN_004134c0(uVar3);
    }
    else if (*(int *)(local_30 + 0x10) == 1) {
      plVar1 = *(longlong **)(**(longlong **)(local_30 + 8) + 8);
      (**(code **)(*plVar1 + 0x40))(plVar1,param_2);
    }
    else {
      local_28 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
      local_bc = *(int *)(local_30 + 0x10) + -1;
      local_34 = 0;
      iVar4 = *(int *)(local_30 + 0x10);
      if (-1 < local_bc) {
        do {
          local_bc = iVar4;
          if (*(uint *)(local_30 + 0x10) <= local_34) {
            FUN_00594f90();
          }
          local_48 = *(longlong *)(*(longlong *)(local_30 + 8) + (longlong)(int)local_34 * 8);
          local_20 = (longlong *)
                     (**(code **)(**(longlong **)(local_48 + 8) + 0x28))
                               (*(longlong **)(local_48 + 8),param_2);
          if (local_20 != (longlong *)0x0) {
            iVar4 = (**(code **)(*local_20 + 0x28))();
            local_38 = 0;
            if (-1 < iVar4 + -1) {
              do {
                (**(code **)(*local_20 + 0x18))(local_20,&local_b8,local_38);
                (**(code **)(*local_28 + 0x80))(local_28,local_b8,local_48);
                local_38 = local_38 + 1;
                iVar4 = iVar4 + -1;
              } while (iVar4 != 0);
            }
            FUN_00410f20(local_20);
          }
          local_34 = local_34 + 1;
          local_bc = local_bc + -1;
          iVar4 = local_bc;
        } while (local_bc != 0);
      }
      if (*(longlong *)(param_1 + 0x18) == 0) {
        local_58 = (**(code **)(*local_28 + 0x30))(local_28,0);
        (**(code **)(*local_28 + 0x18))(local_28,&local_60,0);
        (**(code **)(**(longlong **)(local_58 + 8) + 0x40))(*(longlong **)(local_58 + 8),local_60);
      }
      else {
        (**(code **)(*local_28 + 0x148))(local_28);
        local_4c = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))
                             (*(longlong **)(param_1 + 0x18),local_28);
        if (-1 < local_4c) {
          local_58 = (**(code **)(*local_28 + 0x30))(local_28,local_4c);
          (**(code **)(*local_28 + 0x18))(local_28,&local_60,local_4c);
          (**(code **)(**(longlong **)(local_58 + 8) + 0x40))(*(longlong **)(local_58 + 8),local_60)
          ;
        }
      }
      FUN_00410f20(local_28);
    }
    FUN_00410f20(local_30);
  }
  FUN_00414480(&local_b8);
  FUN_00414480(&local_60);
  return;
}

