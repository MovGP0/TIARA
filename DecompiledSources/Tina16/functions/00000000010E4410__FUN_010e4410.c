/* Ghidra address: 010e4410 */
/* Ghidra symbol: FUN_010e4410 */


void FUN_010e4410(longlong param_1)

{
  code *local_28;
  longlong local_20;
  
  if (*(longlong *)(param_1 + 0x7e0) != 0) {
    local_28 = FUN_010e4460;
    local_20 = param_1;
    FUN_00f834f0(&local_28);
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x7e0),0);
  }
  return;
}

