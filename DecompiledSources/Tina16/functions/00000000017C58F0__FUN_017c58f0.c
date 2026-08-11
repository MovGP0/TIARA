/* Ghidra address: 017c58f0 */
/* Ghidra symbol: FUN_017c58f0 */


double FUN_017c58f0(double param_1,double param_2,undefined8 param_3,int param_4,int param_5,
                   char param_6,char param_7)

{
  double dVar1;
  undefined8 uVar2;
  
  if (param_4 != 0) {
    if (param_6 == '\0') {
      param_1 = param_1 + ((param_2 - param_1) / (double)param_4) * (double)param_5;
    }
    else if (param_6 == '\x01') {
      if (param_7 == '\0') {
        dVar1 = (double)FUN_005264b0(param_2 / param_1);
        dVar1 = (double)FUN_00c42750((dVar1 / (double)param_4) * (double)param_5);
        param_1 = param_1 * dVar1;
      }
      else {
        dVar1 = (double)FUN_0040c2f0(0x4024000000000000);
        uVar2 = FUN_0040af80(dVar1 / (double)param_4);
        dVar1 = (double)FUN_00525b10(uVar2,param_5);
        param_1 = param_1 * dVar1;
      }
    }
    else {
      param_1 = (double)FUN_01d0f3b0(param_3,param_5);
    }
  }
  return param_1;
}

