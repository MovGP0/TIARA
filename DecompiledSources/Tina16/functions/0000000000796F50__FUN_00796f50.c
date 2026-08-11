/* Ghidra address: 00796f50 */
/* Ghidra symbol: FUN_00796f50 */


bool FUN_00796f50(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_00795f90(param_1,param_2);
  iVar2 = FUN_00795ed0(param_1,param_2,uVar1);
  return -1 < iVar2;
}

