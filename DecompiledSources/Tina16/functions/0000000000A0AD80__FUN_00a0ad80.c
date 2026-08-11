/* Ghidra address: 00a0ad80 */
/* Ghidra symbol: FUN_00a0ad80 */


undefined4 FUN_00a0ad80(uint param_1)

{
  undefined1 uStackX_b;
  undefined4 local_c;
  
  uStackX_b = (byte)(param_1 >> 0x18);
  local_c = CONCAT13(0xff,CONCAT21(CONCAT11((char)((ulonglong)((param_1 & 0xff) * (uint)uStackX_b) /
                                                  0xff),
                                            (char)((ulonglong)
                                                   ((param_1 >> 8 & 0xff) * (uint)uStackX_b) / 0xff)
                                           ),
                                   (char)((ulonglong)((param_1 >> 0x10 & 0xff) * (uint)uStackX_b) /
                                         0xff)));
  return local_c;
}

