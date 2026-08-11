/* Ghidra address: 01967ce0 */
/* Ghidra symbol: FUN_01967ce0 */


undefined8 FUN_01967ce0(longlong param_1,double param_2,double param_3)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  double extraout_XMM0_Qa;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar3 = 0.0;
  dVar4 = 2.0;
  dVar5 = 0.0;
  if (*(double *)(param_1 + 0xa8) == 0.0) {
    dVar3 = 4.0;
    dVar4 = 4.0;
  }
  else if (*(double *)(param_1 + 0xb0) == 0.0) {
    dVar5 = 4.0;
  }
  if (*(char *)(param_1 + 0x1cc) == '\0') {
    dVar6 = *(double *)(param_1 + 0x1f8);
  }
  else {
    dVar3 = *(double *)(param_1 + 0x1f8);
    dVar6 = dVar5;
  }
  dVar2 = (double)FUN_019508b0(param_1);
  if ((((param_2 < dVar2 - dVar3) ||
       (dVar3 = (double)FUN_019508b0(param_1), dVar3 + *(double *)(param_1 + 0xa8) + dVar4 < param_2
       )) || (dVar3 = (double)FUN_01950860(param_1), param_3 < dVar3 - dVar6)) ||
     (FUN_01950860(param_1), extraout_XMM0_Qa + *(double *)(param_1 + 0xb0) + dVar5 + 1.0 < param_3)
     ) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

