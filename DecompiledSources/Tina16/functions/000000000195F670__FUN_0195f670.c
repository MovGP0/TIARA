/* Ghidra address: 0195f670 */
/* Ghidra symbol: FUN_0195f670 */


undefined2 FUN_0195f670(longlong param_1,byte param_2,undefined8 param_3)

{
  undefined2 uVar1;
  
  if (param_2 < 0x10) {
    uVar1 = CONCAT11((char)(*(ushort *)(param_1 + 0x38c) >> 8),
                     ((ushort)((int)CONCAT62((int6)((ulonglong)param_3 >> 0x10),1) <<
                              (param_2 & 0x1f)) & *(ushort *)(param_1 + 0x38c)) != 0);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

