/* Ghidra address: 00813df0 */
/* Ghidra symbol: FUN_00813df0 */


undefined8 FUN_00813df0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_008199e0(*(undefined8 *)(param_1 + 0x20));
  if (((*(byte *)(lVar1 + 0x4d0) & 1) != 0) &&
     (lVar1 = FUN_008199e0(*(undefined8 *)(param_1 + 0x20)), *(char *)(lVar1 + 0x4d1) != '\0')) {
    return 1;
  }
  return 0;
}

