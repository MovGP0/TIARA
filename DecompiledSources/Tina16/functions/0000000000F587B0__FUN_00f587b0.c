/* Ghidra address: 00f587b0 */
/* Ghidra symbol: FUN_00f587b0 */


void FUN_00f587b0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  double dVar2;
  undefined8 local_40 [4];
  
  uVar1 = FUN_00b92140(0);
  FUN_016ee260(param_1,local_40,0x38,0);
  FUN_00f55c30(local_40[0],param_1,param_2,param_3);
  dVar2 = (double)FUN_00b92140(uVar1);
  *(double *)PTR_DAT_02001ba8 = dVar2 + *(double *)PTR_DAT_02001ba8;
  return;
}

