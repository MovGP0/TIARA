/* Ghidra address: 00f58720 */
/* Ghidra symbol: FUN_00f58720 */


void FUN_00f58720(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  double dVar2;
  undefined8 local_40 [4];
  
  uVar1 = FUN_00b92140(0);
  FUN_016ee260(param_1,local_40,0x88,0);
  FUN_00f560e0(local_40[0],param_1,param_2,param_3);
  dVar2 = (double)FUN_00b92140(uVar1);
  *(double *)PTR_DAT_02004af0 = dVar2 + *(double *)PTR_DAT_02004af0;
  return;
}

