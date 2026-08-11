/* Ghidra address: 01615b20 */
/* Ghidra symbol: FUN_01615b20 */


void FUN_01615b20(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  if (*(int *)(param_1 + 0x10) != 8) {
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_004095f0(*(longlong *)(param_1 + 8));
    }
    *(undefined4 *)(param_1 + 0x10) = 8;
    uVar1 = FUN_00409570(8);
    *(undefined8 *)(param_1 + 8) = uVar1;
  }
  FUN_00409a70(local_res10,*(undefined8 *)(param_1 + 8),8);
  return;
}

