/* Ghidra address: 00deb300 */
/* Ghidra symbol: FUN_00deb300 */


void FUN_00deb300(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  double dVar2;
  undefined8 local_40 [4];
  
  uVar1 = FUN_00b92140(0);
  FUN_016ee260(param_1,local_40,0x40,0);
  FUN_00deaf80(local_40[0],param_1,param_2,param_3);
  dVar2 = (double)FUN_00b92140(uVar1);
  *(double *)PTR_DAT_02001aa0 = dVar2 + *(double *)PTR_DAT_02001aa0;
  return;
}

