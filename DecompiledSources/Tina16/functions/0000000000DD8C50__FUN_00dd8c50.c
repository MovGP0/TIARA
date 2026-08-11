/* Ghidra address: 00dd8c50 */
/* Ghidra symbol: FUN_00dd8c50 */


void FUN_00dd8c50(longlong param_1,longlong param_2)

{
  longlong local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_0041b910(param_2);
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_00dd8d00(param_1);
  }
  if (local_res10[0] != 0) {
    FUN_00624ce0(local_res10[0],&LAB_00dd8ce8,*(undefined8 *)(param_1 + 0x28),param_1 + 0x20);
  }
  FUN_0041b840(param_1 + 0x18,local_res10[0]);
  FUN_0041b800(local_res10);
  return;
}

