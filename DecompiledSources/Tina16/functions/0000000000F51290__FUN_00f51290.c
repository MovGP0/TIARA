/* Ghidra address: 00f51290 */
/* Ghidra symbol: FUN_00f51290 */


void FUN_00f51290(longlong param_1)

{
  undefined8 in_RAX;
  bool bVar1;
  
  if (*(char *)(param_1 + 0x6e0) != '\0') {
    if (*(byte *)(param_1 + 0x6d8) < 8) {
      bVar1 = ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) <<
               (*(byte *)(param_1 + 0x6d8) & 0x1f) & 5U) != 0;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      FUN_01b07d50(*(undefined8 *)(param_1 + 0x700));
      FUN_00f51380(*(undefined8 *)(param_1 + 0x700),1);
    }
    else {
      FUN_01b07d50(*(undefined8 *)(param_1 + 0x700));
      FUN_00f513f0(*(undefined8 *)(param_1 + 0x700),1);
    }
  }
  DAT_0202ed10 = 0;
  return;
}

