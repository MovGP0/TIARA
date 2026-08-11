/* Ghidra address: 006eab10 */
/* Ghidra symbol: FUN_006eab10 */


int FUN_006eab10(longlong *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int local_2c;
  longlong local_20 [2];
  
  local_20[0] = 0;
  (**(code **)(*param_1 + 0x280))(param_1,local_20);
  local_2c = 0;
  if (local_20[0] != 0) {
    local_2c = *(int *)(local_20[0] + -4);
  }
  iVar1 = 0;
  if (local_20[0] != 0) {
    iVar1 = *(int *)(local_20[0] + -4);
  }
  if (param_3 <= iVar1) {
    local_2c = param_3 + -1;
  }
  FUN_00442660(param_2,local_20[0],local_2c);
  FUN_00414480(local_20);
  return local_2c;
}

