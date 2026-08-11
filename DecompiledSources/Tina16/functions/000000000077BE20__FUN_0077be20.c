/* Ghidra address: 0077be20 */
/* Ghidra symbol: FUN_0077be20 */


ulonglong FUN_0077be20(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 unaff_RSI;
  
  if (param_3 != 0) {
    FUN_00414ad0(param_3,L"Windows");
    FUN_00414480(param_3 + 8);
    FUN_00414480(param_3 + 0x10);
    FUN_00414480(param_3 + 0x18);
    FUN_00414480(param_3 + 0x20);
  }
  return CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1) & 0xffffffff;
}

