/* Ghidra address: 00f84b00 */
/* Ghidra symbol: FUN_00f84b00 */


void FUN_00f84b00(longlong param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 0xd5a) = 1;
  *(undefined1 *)(param_1 + 0xd40) = 1;
  FUN_00f84bb0(param_1);
  if (*(longlong *)(param_1 + 0xd68) != 0) {
    uVar1 = _get_simulation_time(*(longlong *)(param_1 + 0xd68));
    *(undefined8 *)(param_1 + 0xd30) = uVar1;
  }
  if (*(char *)(param_1 + 0xd59) != '\0') {
    *(undefined4 *)(param_1 + 0xd28) = 1;
  }
  *(undefined1 *)(param_1 + 0xd5a) = 0;
  *(undefined1 *)(param_1 + 0xd40) = 0;
  return;
}

