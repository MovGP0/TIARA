/* Ghidra address: 00dec410 */
/* Ghidra symbol: FUN_00dec410 */


void FUN_00dec410(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  double dVar2;
  undefined8 local_40 [4];
  
  uVar1 = FUN_00b92140(0);
  FUN_016ee260(param_1,local_40,0x50,0);
  FUN_00dec0c0(local_40[0],param_1,param_2,param_3);
  dVar2 = (double)FUN_00b92140(uVar1);
  *(double *)PTR_DAT_02002770 = dVar2 + *(double *)PTR_DAT_02002770;
  return;
}

