/* Ghidra address: 01397500 */
/* Ghidra symbol: FUN_01397500 */


double * FUN_01397500(double *param_1,longlong param_2,undefined8 param_3,uint param_4,
                     undefined4 param_5,undefined4 param_6,undefined1 param_7,undefined1 param_8)

{
  double *pdVar1;
  char cVar2;
  int iVar3;
  double dVar4;
  
  if (((*(longlong *)(param_2 + 0x4c0) != 0) &&
      (cVar2 = FUN_017d1390(*(longlong *)(param_2 + 0x4c0)), cVar2 == '\0')) &&
     (iVar3 = FUN_017d1380(*(undefined8 *)(param_2 + 0x4c0)), iVar3 == 2)) {
    FUN_017d13d0(param_1,param_2,1,param_3,param_4 & 0xff,param_5,param_6,param_7,param_8);
    dVar4 = (double)FUN_00c44590(param_1);
    *param_1 = dVar4 / 1.4142135623730951;
    param_1[1] = 0.0;
    return param_1;
  }
  if ((*(longlong *)(param_2 + 0x4c0) != 0) &&
     (iVar3 = FUN_017d1380(*(longlong *)(param_2 + 0x4c0)), iVar3 == 1)) {
    pdVar1 = (double *)(PTR_DAT_020025e0 + 8);
    *param_1 = *(double *)PTR_DAT_020025e0;
    param_1[1] = *pdVar1;
    return param_1;
  }
  dVar4 = (double)FUN_013971d0(param_2,param_3,param_4,1,param_5,param_6,param_7,param_8);
  *param_1 = dVar4;
  param_1[1] = 0.0;
  return param_1;
}

