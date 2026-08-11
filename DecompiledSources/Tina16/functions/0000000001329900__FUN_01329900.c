/* Ghidra address: 01329900 */
/* Ghidra symbol: FUN_01329900 */


void FUN_01329900(undefined8 param_1,longlong param_2)

{
  if ((*(longlong *)(param_2 + 0x98) != 0) &&
     (*(char *)(*(longlong *)(param_2 + 0x98) + 0x1438) != '\0' || *(char *)(param_2 + 0x97) != '\0'
     )) {
    FUN_00f51380(*(undefined8 *)(param_2 + 0x98),1);
  }
  return;
}

