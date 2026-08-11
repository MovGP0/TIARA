/* Ghidra address: 006e3fb0 */
/* Ghidra symbol: FUN_006e3fb0 */


void FUN_006e3fb0(longlong param_1,undefined8 param_2)

{
  if ((*(char *)(param_1 + 0x58d) == '\0') && (*(longlong *)(param_1 + 0x678) != 0)) {
    (**(code **)(param_1 + 0x678))(*(undefined8 *)(param_1 + 0x680),param_1,param_2);
  }
  return;
}

