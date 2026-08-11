/* Ghidra address: 00422c60 */
/* Ghidra symbol: FUN_00422c60 */


undefined8 FUN_00422c60(int *param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *param_1;
  if ((iVar1 == *param_2) && (iVar1 = param_1[1], iVar1 == param_2[1])) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
  }
  return uVar2;
}

