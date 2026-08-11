/* Ghidra address: 017d9420 */
/* Ghidra symbol: FUN_017d9420 */


undefined8
FUN_017d9420(undefined8 param_1,longlong *param_2,int param_3,double param_4,char param_5)

{
  double *pdVar1;
  undefined7 uVar3;
  undefined8 uVar2;
  
  pdVar1 = (double *)(*param_2 + (longlong)param_3 * 0x18);
  uVar3 = (undefined7)((ulonglong)pdVar1 >> 8);
  if (param_5 == '\0') {
    *pdVar1 = *pdVar1 + param_4;
    if ((*pdVar1 == 0.0) && (pdVar1[1] == 0.0)) {
      uVar2 = CONCAT71(uVar3,1);
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    pdVar1[1] = pdVar1[1] + param_4;
    if ((*pdVar1 == 0.0) && (pdVar1[1] == 0.0)) {
      uVar2 = CONCAT71(uVar3,1);
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

