/* Ghidra address: 006f5c30 */
/* Ghidra symbol: FUN_006f5c30 */


void FUN_006f5c30(longlong param_1,undefined8 param_2)

{
  if ((*(char *)(param_1 + 0x589) == '\0') && (*(longlong *)(param_1 + 0x730) != 0)) {
    (**(code **)(param_1 + 0x730))(*(undefined8 *)(param_1 + 0x738),param_1,param_2);
  }
  return;
}

