/* Ghidra address: 0064fb60 */
/* Ghidra symbol: FUN_0064fb60 */


undefined8 FUN_0064fb60(longlong param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((*(uint *)(param_1 + 0xa0) & 4) == 0) ||
     ((((iVar1 = *param_2, iVar1 != 0x204 && (iVar1 != 0x205)) && (iVar1 != 0x200)) &&
      (iVar1 != 0x206)))) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
  }
  return uVar2;
}

