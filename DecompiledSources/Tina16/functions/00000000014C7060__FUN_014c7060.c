/* Ghidra address: 014c7060 */
/* Ghidra symbol: FUN_014c7060 */


void FUN_014c7060(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  double dVar2;
  longlong local_40 [4];
  
  uVar1 = FUN_00b92140(0);
  FUN_016ee260(param_1,local_40,0x248,0);
  if (*(char *)(local_40[0] + 0xd) == '\x03') {
    FUN_014c6d30(local_40[0],param_1,param_2,param_3);
  }
  else {
    FUN_014c6920(local_40[0],param_1,param_2,param_3);
  }
  dVar2 = (double)FUN_00b92140(uVar1);
  *(double *)PTR_DAT_020058f0 = dVar2 + *(double *)PTR_DAT_020058f0;
  return;
}

