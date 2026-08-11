/* Ghidra address: 00423b30 */
/* Ghidra symbol: FUN_00423b30 */


undefined8 FUN_00423b30(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = param_1[2];
  if ((*param_1 < iVar1) && (iVar1 = param_1[3], param_1[1] < iVar1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
  }
  return uVar2;
}

