/* Ghidra address: 00ef6ef0 */
/* Ghidra symbol: FUN_00ef6ef0 */


void FUN_00ef6ef0(undefined8 param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
                 longlong param_5)

{
  longlong lVar1;
  undefined8 *puVar2;
  int local_c8;
  undefined4 local_c4;
  int local_c0;
  undefined4 local_bc;
  undefined8 local_78;
  undefined4 local_70;
  
  puVar2 = &local_78;
  for (lVar1 = 10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  local_c8 = *(int *)(param_5 + 0x40) + 1;
  local_c4 = (undefined4)local_78;
  local_c0 = *(int *)(param_5 + 0x40) + 2;
  local_bc = local_70;
  FUN_00ef69b0(param_1,&local_c8,param_4,param_5);
  local_c8 = *(int *)(param_5 + 0x40) + 2;
  local_c4 = (undefined4)local_78;
  local_c0 = 0;
  local_bc = 0;
  FUN_00ef5070(param_1,&local_c8,9,param_5);
  local_c8 = *(int *)(param_5 + 0x40) + 1;
  local_c4 = local_78._4_4_;
  local_c0 = 0;
  local_bc = 0;
  FUN_00ef5070(param_1,&local_c8,param_3,param_5);
  *(int *)(param_5 + 0x40) = *(int *)(param_5 + 0x40) + 2;
  return;
}

