/* Ghidra address: 00878cd0 */
/* Ghidra symbol: FUN_00878cd0 */


undefined8 FUN_00878cd0(longlong param_1,longlong param_2,char param_3)

{
  if (param_3 == '\0') {
    *(longlong *)(param_1 + 8) = param_2;
  }
  else if (param_3 == '\x01') {
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + param_2;
  }
  else if (param_3 == '\x02') {
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 0x10) + param_2;
  }
  if (*(longlong *)(param_1 + 8) < 0) {
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return *(undefined8 *)(param_1 + 8);
}

