/* Ghidra address: 012b1220 */
/* Ghidra symbol: FUN_012b1220 */


void FUN_012b1220(undefined8 param_1,undefined8 param_2,short *param_3)

{
  code *local_28;
  undefined8 local_20;
  
  if (*param_3 == 0xd) {
    *param_3 = 0;
    FUN_012ae700(param_1,6,1);
    FUN_012ae470(param_1,1,1);
    local_28 = FUN_012b1fa0;
    local_20 = param_1;
    FUN_00f834f0(&local_28);
    local_28 = FUN_012b1fa0;
    local_20 = param_1;
    FUN_00f833f0(&local_28,3000);
  }
  return;
}

