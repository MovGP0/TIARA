/* Ghidra address: 015e2fb0 */
/* Ghidra symbol: FUN_015e2fb0 */


void FUN_015e2fb0(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  int local_2c;
  undefined4 local_1c;
  undefined4 local_c;
  
  (**(code **)(*param_2 + 0x20))(param_2,&DAT_01f6fdb4,4);
  local_1c = 0;
  if (*(longlong *)(param_1 + 8) != 0) {
    local_1c = *(undefined4 *)(*(longlong *)(param_1 + 8) + -4);
  }
  local_c = local_1c;
  (**(code **)(*param_2 + 0x20))(param_2,&local_c,4);
  local_2c = 0;
  if (*(longlong *)(param_1 + 8) != 0) {
    local_2c = *(int *)(*(longlong *)(param_1 + 8) + -4);
  }
  uVar1 = FUN_00416740(*(undefined8 *)(param_1 + 8));
  (**(code **)(*param_2 + 0x20))(param_2,uVar1,local_2c * 2);
  return;
}

