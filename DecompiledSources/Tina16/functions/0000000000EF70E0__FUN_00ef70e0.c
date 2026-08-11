/* Ghidra address: 00ef70e0 */
/* Ghidra symbol: FUN_00ef70e0 */


void FUN_00ef70e0(undefined8 param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
                 longlong param_5)

{
  longlong lVar1;
  int *piVar2;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_78;
  int local_74;
  undefined4 local_70;
  
  piVar2 = &local_78;
  for (lVar1 = 10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined8 *)piVar2 = *param_2;
    param_2 = param_2 + 1;
    piVar2 = piVar2 + 2;
  }
  local_c8 = local_74;
  local_c4 = local_70;
  local_c0 = *(int *)(param_5 + 0x40) + 1;
  local_bc = local_78;
  FUN_00ef6ab0(param_1,&local_c8,param_4,param_5);
  local_c8 = *(int *)(param_5 + 0x40) + 1;
  local_c4 = local_70;
  local_c0 = 0;
  local_bc = 0;
  FUN_00ef5070(param_1,&local_c8,9,param_5);
  local_c8 = local_78;
  local_c4 = *(int *)(param_5 + 0x40) + 1;
  local_c0 = 0;
  local_bc = 0;
  FUN_00ef5070(param_1,&local_c8,param_3,param_5);
  *(int *)(param_5 + 0x40) = *(int *)(param_5 + 0x40) + 1;
  return;
}

