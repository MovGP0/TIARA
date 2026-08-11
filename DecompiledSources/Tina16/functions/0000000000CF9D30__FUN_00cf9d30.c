/* Ghidra address: 00cf9d30 */
/* Ghidra symbol: FUN_00cf9d30 */


void FUN_00cf9d30(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4,
                 longlong param_5)

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  
  FUN_00cf9c90(param_1);
  iVar2 = 0;
  if (param_3 != 0) {
    iVar2 = *(int *)(param_3 + -4);
  }
  if (iVar2 < 1) {
    bVar1 = false;
  }
  else {
    iVar2 = 0;
    if (param_4 != 0) {
      iVar2 = *(int *)(param_4 + -4);
    }
    bVar1 = 0 < iVar2;
  }
  if (bVar1) {
    local_58 = FUN_00416740(param_4);
    local_50 = 0;
    if (param_4 != 0) {
      local_50 = *(undefined4 *)(param_4 + -4);
    }
    local_48 = FUN_00416740(param_3);
    local_40 = 0;
    if (param_3 != 0) {
      local_40 = *(undefined4 *)(param_3 + -4);
    }
    local_38 = FUN_00416740(param_5);
    local_30 = 0;
    if (param_5 != 0) {
      local_30 = *(undefined4 *)(param_5 + -4);
    }
    local_2c = 2;
    puVar3 = &local_58;
  }
  else {
    puVar3 = (undefined8 *)0x0;
  }
  FUN_00cf99d0(param_1,0,0,puVar3);
  return;
}

