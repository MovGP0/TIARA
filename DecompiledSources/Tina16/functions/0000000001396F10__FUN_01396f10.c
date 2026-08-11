/* Ghidra address: 01396f10 */
/* Ghidra symbol: FUN_01396f10 */


void FUN_01396f10(undefined8 param_1,longlong param_2)

{
  if ((*(longlong *)(param_2 + 0x68) != 0) &&
     (*(char *)(*(longlong *)(param_2 + 0x68) + 0x1400) != '\0' || *(char *)(param_2 + 0x67) != '\0'
     )) {
    FUN_00f513f0(*(undefined8 *)(param_2 + 0x68),1);
  }
  return;
}

