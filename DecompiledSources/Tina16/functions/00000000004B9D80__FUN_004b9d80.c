/* Ghidra address: 004b9d80 */
/* Ghidra symbol: FUN_004b9d80 */


undefined8 FUN_004b9d80(longlong param_1,longlong param_2,char param_3)

{
  if (param_3 == '\0') {
    *(longlong *)(param_1 + 0x18) = param_2;
  }
  else if (param_3 == '\x01') {
    *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + param_2;
  }
  else if (param_3 == '\x02') {
    *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x10) + param_2;
  }
  return *(undefined8 *)(param_1 + 0x18);
}

