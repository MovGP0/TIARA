/* Ghidra address: 0044f0c0 */
/* Ghidra symbol: FUN_0044f0c0 */


undefined8 FUN_0044f0c0(int param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_0044f080();
  if (param_1 < iVar1) {
LAB_0044f0e9:
    uVar2 = 1;
  }
  else {
    iVar1 = FUN_0044f080();
    if (iVar1 == param_1) {
      iVar1 = FUN_0044f0a0();
      if (param_2 <= iVar1) goto LAB_0044f0e9;
    }
    uVar2 = 0;
  }
  return uVar2;
}

