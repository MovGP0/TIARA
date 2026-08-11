/* Ghidra address: 010d2ff0 */
/* Ghidra symbol: FUN_010d2ff0 */


ulonglong FUN_010d2ff0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_RSI;
  undefined1 local_308 [256];
  char local_208;
  undefined1 local_1f0 [472];
  
  FUN_010d3290(param_1,param_2,local_308);
  if (local_208 == '\x01') {
    FUN_004169a0(param_3,local_1f0);
  }
  else {
    FUN_00414480(param_3);
  }
  return CONCAT71((int7)((ulonglong)unaff_RSI >> 8),local_208 == '\x01') & 0xffffffff;
}

