/* Ghidra address: 00408490 */
/* Ghidra symbol: FUN_00408490 */


ulonglong FUN_00408490(ulonglong param_1)

{
  ulonglong uVar1;
  
  if (((DAT_02006bb8 == 0) || (DAT_02006bb0 < param_1)) || (param_1 + 0x13fff0 < DAT_02006bb0)) {
    uVar1 = param_1 + 0x20;
  }
  else {
    uVar1 = DAT_02006bb0;
    if (DAT_02006bb8 == 0x13ffd0) {
      uVar1 = 0;
    }
  }
  return uVar1;
}

