/* Ghidra address: 0175ab60 */
/* Ghidra symbol: FUN_0175ab60 */


undefined4 FUN_0175ab60(longlong *param_1,undefined8 param_2)

{
  double *pdVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined8 unaff_RDI;
  
  pdVar1 = (double *)(**(code **)(*param_1 + 0x78))(param_1);
  if (((double)param_1[7] == *pdVar1) && ((char)param_1[1] == (char)param_1[8])) {
    uVar3 = 0;
  }
  else {
    uVar3 = (undefined4)CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  }
  if ((char)uVar3 != '\0') {
    FUN_0173d100(param_1,param_2,*PTR_DAT_02002480,*PTR_DAT_02001560);
    pdVar1 = (double *)(**(code **)(*param_1 + 0x78))(param_1);
    if ((double)param_1[7] != *pdVar1) {
      plVar2 = (longlong *)(**(code **)(*param_1 + 0x78))(param_1);
      param_1[7] = *plVar2;
    }
    if ((char)param_1[1] != (char)param_1[8]) {
      *(char *)(param_1 + 8) = (char)param_1[1];
    }
  }
  return uVar3;
}

