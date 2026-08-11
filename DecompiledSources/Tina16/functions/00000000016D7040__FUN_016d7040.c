/* Ghidra address: 016d7040 */
/* Ghidra symbol: FUN_016d7040 */


undefined8 FUN_016d7040(undefined8 param_1,byte param_2)

{
  undefined8 in_RAX;
  bool bVar1;
  
  if (((char)param_2 < '\0') || (7 < param_2)) {
    bVar1 = false;
  }
  else {
    bVar1 = ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (param_2 & 0x1f) & 0xfU) != 0;
  }
  if (bVar1) {
    FUN_00416780(param_1,*(undefined2 *)(&DAT_016d70b2 + (longlong)(int)(param_2 + 1) * 2));
  }
  else {
    FUN_00414ad0(param_1,&DAT_016d70cc);
  }
  return param_1;
}

