/* Ghidra address: 012b1e30 */
/* Ghidra symbol: FUN_012b1e30 */


void FUN_012b1e30(longlong param_1,undefined8 param_2,short *param_3)

{
  code *local_28;
  longlong local_20;
  
  if (*param_3 == 0xd) {
    *param_3 = 0;
    FUN_012ae910(param_1,6,1,1);
    local_28 = FUN_012b1f70;
    local_20 = param_1;
    FUN_00f834f0(&local_28);
    local_28 = FUN_012b1f70;
    local_20 = param_1;
    FUN_00f833f0(&local_28,3000);
    FUN_010e8e30(*(undefined8 *)(param_1 + 0x9b0),0);
  }
  return;
}

