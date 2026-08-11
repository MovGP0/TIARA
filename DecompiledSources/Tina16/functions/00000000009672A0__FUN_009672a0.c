/* Ghidra address: 009672a0 */
/* Ghidra symbol: FUN_009672a0 */


undefined8 FUN_009672a0(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  
  if (*(byte *)(param_1 + 0x58) < 0x10) {
    bVar1 = ((int)CONCAT62((int6)((ulonglong)param_2 >> 0x10),1) <<
             (*(byte *)(param_1 + 0x58) & 0x1f) & 0x420U) != 0;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    FUN_00414b90(param_2,*(undefined8 *)(param_1 + 0x40));
  }
  else {
    FUN_00414520(param_2);
  }
  return param_2;
}

