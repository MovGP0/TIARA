/* Ghidra address: 012bc900 */
/* Ghidra symbol: FUN_012bc900 */


undefined8 FUN_012bc900(undefined8 param_1,int param_2)

{
  if (param_2 == 0x281) {
    FUN_00414ad0(param_1,&DAT_012bc9c4);
  }
  else if (((((param_2 == 0x282) || (param_2 == 0x285)) || (param_2 == 0x288)) ||
           (((param_2 == 0x289 || (param_2 == 0x28a)) ||
            ((param_2 == 0x28d || ((param_2 == 0x28e || (param_2 == 0x28f)))))))) ||
          ((param_2 == 0x290 ||
           ((((param_2 == 0x293 || (param_2 == 0x294)) || (param_2 == 0x295)) || (param_2 == 0x296))
           )))) {
    FUN_00414ad0(param_1,&DAT_012bc9d4);
  }
  else {
    FUN_00414ad0(param_1,&LAB_012bc9e4);
  }
  return param_1;
}

