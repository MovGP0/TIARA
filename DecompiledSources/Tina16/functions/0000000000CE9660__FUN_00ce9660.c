/* Ghidra address: 00ce9660 */
/* Ghidra symbol: FUN_00ce9660 */


undefined8 FUN_00ce9660(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_00ce9700(param_1,param_2,param_3,0);
  if (iVar1 == -1) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00ce8fd0(param_1,iVar1);
  }
  return uVar2;
}

