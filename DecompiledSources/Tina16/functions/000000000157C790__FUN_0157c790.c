/* Ghidra address: 0157c790 */
/* Ghidra symbol: FUN_0157c790 */


undefined4 FUN_0157c790(undefined8 param_1)

{
  undefined1 local_2a [2];
  ushort local_28;
  short local_26;
  short local_24;
  ushort local_22;
  short local_20;
  ushort local_1e;
  undefined4 local_1c;
  
  FUN_00448e20(param_1,&local_1e,&local_20,&local_22);
  if ((local_1e < 0x7bc) || (0x83b < local_1e)) {
    local_1c = 0;
  }
  else {
    FUN_00448ad0(param_1,&local_24,&local_26,&local_28,local_2a);
    local_1c = CONCAT22(local_22 | local_20 << 5 | (local_1e - 0x7bc) * 0x200,
                        local_28 >> 1 | local_26 << 5 | local_24 << 0xb);
  }
  return local_1c;
}

