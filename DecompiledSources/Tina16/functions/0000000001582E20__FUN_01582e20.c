/* Ghidra address: 01582e20 */
/* Ghidra symbol: FUN_01582e20 */


uint FUN_01582e20(longlong *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  int local_f4;
  undefined1 *local_f0;
  bool local_da;
  bool local_d9;
  longlong local_d8;
  longlong local_d0;
  undefined8 local_c8;
  longlong local_c0;
  longlong local_b8;
  uint local_ac;
  uint local_a8;
  undefined1 local_a4 [66];
  undefined1 local_62 [42];
  longlong local_38;
  longlong local_20;
  
  local_f0 = auStack_128;
  local_20 = 0;
  FUN_00417580(local_a4,&DAT_015764a8);
  FUN_00417580(local_62,&DAT_015764a8);
  local_a8 = 0xffffffff;
  local_f4 = *(int *)(param_1[6] + 0x10) + -1;
  local_ac = 0;
  iVar2 = *(int *)(param_1[6] + 0x10);
  if (-1 < local_f4) {
    do {
      local_f4 = iVar2;
      FUN_00417740(local_a4,&DAT_015764a8);
      uVar1 = local_ac;
      local_b8 = param_1[6];
      if (*(uint *)(local_b8 + 0x10) <= local_ac) {
        FUN_00594f90();
      }
      lVar3 = (longlong)(int)local_ac;
      FUN_00417c40(local_a4,*(longlong *)(local_b8 + 8) + lVar3 * 0x42,&DAT_015764a8);
      local_c8 = (**(code **)(*param_1 + 0x28))(param_1,local_a4);
      FUN_00417740(local_62,&DAT_015764a8);
      local_c0 = param_1[6];
      if (*(uint *)(local_c0 + 0x10) <= uVar1) {
        FUN_00594f90();
      }
      FUN_00417c40(local_62,*(longlong *)(local_c0 + 8) + lVar3 * 0x42,&DAT_015764a8);
      FUN_00414480(&local_20);
      local_d0 = local_38;
      local_d8 = local_38;
      if (local_38 != 0) {
        local_d8 = *(longlong *)(local_38 + -8);
      }
      local_108 = (undefined4)local_d8;
      FUN_0045aba0(local_c8,&local_20,local_38,0);
      if (local_20 == param_2) {
        local_d9 = true;
      }
      else if ((local_20 == 0) || (param_2 == 0)) {
        local_d9 = false;
      }
      else {
        iVar2 = FUN_0043e420(local_20,param_2);
        local_d9 = iVar2 == 0;
      }
      local_da = local_d9;
      FUN_00414480(&local_20);
      FUN_00417740(local_62,&DAT_015764a8);
      FUN_00417740(local_a4,&DAT_015764a8);
      if (local_da != false) {
        local_a8 = local_ac;
        break;
      }
      local_ac = local_ac + 1;
      local_f4 = local_f4 + -1;
      iVar2 = local_f4;
    } while (local_f4 != 0);
  }
  FUN_00417840(local_a4,&DAT_015764a8,2);
  FUN_00414480(&local_20);
  return local_a8;
}

