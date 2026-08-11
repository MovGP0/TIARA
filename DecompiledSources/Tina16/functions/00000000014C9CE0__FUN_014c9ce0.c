/* Ghidra address: 014c9ce0 */
/* Ghidra symbol: FUN_014c9ce0 */


undefined1
FUN_014c9ce0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  double dVar2;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined1 *local_f0;
  undefined8 local_d8;
  undefined8 local_d0;
  int local_b4;
  undefined1 local_a9;
  undefined8 local_a8 [7];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  int local_54;
  
  local_f0 = auStack_138;
  local_60 = 0;
  local_68 = 0;
  local_a8[0] = 0;
  local_d8 = FUN_014cdce0(*(undefined8 *)(param_1 + 0xe8));
  local_70 = FUN_014cdd20(*(undefined8 *)(param_1 + 0xe8));
  local_d0 = FUN_00b92140(0);
  local_118 = param_5;
  local_110 = param_6;
  local_108 = param_7;
  local_a9 = __run_digital(local_d8,param_2,param_3,param_4);
  dVar2 = (double)FUN_00b92140(local_d0);
  *(double *)PTR_DAT_020059b8 = dVar2 + *(double *)PTR_DAT_020059b8;
  iVar1 = _GetMCUModelCount(local_d8);
  local_54 = 0;
  local_b4 = iVar1;
  if (-1 < iVar1 + -1) {
    do {
      FUN_014c9450(auStack_138);
      local_54 = local_54 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414480(local_a8);
  FUN_00414560(&local_68,2);
  return local_a9;
}

