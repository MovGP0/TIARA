/* Ghidra address: 006db990 */
/* Ghidra symbol: FUN_006db990 */


void FUN_006db990(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xdf) == '\x02') {
    *(undefined8 *)(*(longlong *)(param_2 + 0x100) + 0x4d8) = 0;
  }
  return;
}

