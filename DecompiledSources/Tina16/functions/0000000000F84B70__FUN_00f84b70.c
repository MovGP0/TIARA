/* Ghidra address: 00f84b70 */
/* Ghidra symbol: FUN_00f84b70 */


void FUN_00f84b70(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_00f84bb0(param_1);
  if (*(longlong *)(param_1 + 0xd68) != 0) {
    uVar1 = _get_simulation_time(*(longlong *)(param_1 + 0xd68));
    *(undefined8 *)(param_1 + 0xd30) = uVar1;
  }
  return;
}

