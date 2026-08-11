/* Ghidra address: 00dd54e0 */
/* Ghidra symbol: FUN_00dd54e0 */


undefined8 FUN_00dd54e0(double param_1,double param_2,undefined4 param_3)

{
  undefined8 uVar1;
  double extraout_XMM0_Qa;
  
  FUN_00dd07b0(param_3);
  if (((extraout_XMM0_Qa < param_1) && (extraout_XMM0_Qa < param_2)) ||
     ((param_1 <= extraout_XMM0_Qa && (param_2 <= extraout_XMM0_Qa)))) {
    uVar1 = 0;
  }
  else if ((extraout_XMM0_Qa < param_1) || (param_2 < extraout_XMM0_Qa)) {
    uVar1 = 2;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

