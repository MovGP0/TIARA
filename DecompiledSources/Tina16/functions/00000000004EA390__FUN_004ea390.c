/* Ghidra address: 004ea390 */
/* Ghidra symbol: FUN_004ea390 */


ulonglong FUN_004ea390(undefined8 param_1,undefined8 param_2)

{
  undefined1 local_res10;
  undefined1 uStackX_11;
  undefined1 uStackX_12;
  undefined1 uStackX_13;
  undefined1 uStackX_14;
  undefined1 uStackX_15;
  undefined1 uStackX_16;
  
  local_res10 = (byte)param_2;
  uStackX_11 = (byte)((ulonglong)param_2 >> 8);
  uStackX_12 = (byte)((ulonglong)param_2 >> 0x10);
  uStackX_13 = (byte)((ulonglong)param_2 >> 0x18);
  uStackX_14 = (undefined1)((ulonglong)param_2 >> 0x20);
  uStackX_15 = (undefined1)((ulonglong)param_2 >> 0x28);
  uStackX_16 = (undefined1)((ulonglong)param_2 >> 0x30);
  return (ulonglong)
         CONCAT16(uStackX_16,
                  CONCAT15(uStackX_15,
                           CONCAT14(uStackX_14,
                                    (uint)local_res10 + (uint)uStackX_11 * 0x100 +
                                    (uint)uStackX_12 * 0x10000 + (uint)uStackX_13 * 0x1000000)));
}

