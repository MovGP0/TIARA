/* Ghidra address: 00879990 */
/* Ghidra symbol: FUN_00879990 */


undefined8 FUN_00879990(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_00879960();
  iVar2 = FUN_00879970();
  if ((param_1 < iVar1) || ((iVar1 == param_1 && (param_2 <= iVar2)))) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

