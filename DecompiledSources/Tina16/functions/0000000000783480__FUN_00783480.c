/* Ghidra address: 00783480 */
/* Ghidra symbol: FUN_00783480 */


void FUN_00783480(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 local_b0;
  longlong local_a0;
  longlong *local_68 [2];
  longlong local_58;
  longlong *local_20 [2];
  
  local_c0 = 0;
  if (param_2 == (longlong *)0x0) {
    uVar2 = FUN_0044d710(&PTR_FUN_00777610,1,PTR_PTR_02002468);
    FUN_004134c0(uVar2);
  }
  else {
    if (param_2 == DAT_02012598) {
      uVar2 = FUN_0044d710(&PTR_FUN_00777890,1,PTR_PTR_020059a8);
      FUN_004134c0(uVar2);
    }
    local_58 = DAT_02012590 + 8;
    local_20[0] = param_2;
    iVar1 = FUN_00596a10(local_58,local_20);
    if (iVar1 == -1) {
      (**(code **)(*param_2 + 0xa0))(param_2,&local_c0);
      local_b8 = local_c0;
      local_b0 = 0x11;
      uVar2 = FUN_0044d8d0(&PTR_FUN_00777890,1,PTR_PTR_020026e8,&local_b8,0);
      FUN_004134c0(uVar2);
    }
    else {
      local_a0 = DAT_02012590 + 8;
      local_68[0] = param_2;
      FUN_005974f0(local_a0,local_68);
      if (DAT_02012550 == param_2) {
        FUN_00782920(param_1,DAT_02012598);
      }
    }
  }
  FUN_00414480(&local_c0);
  return;
}

