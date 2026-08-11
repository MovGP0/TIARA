/* Ghidra address: 004d22a0 */
/* Ghidra symbol: FUN_004d22a0 */


undefined8 FUN_004d22a0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  iVar1 = *(int *)(param_1 + 8);
  if ((iVar1 < 0) || (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20) + 0x10) <= iVar1)
     ) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
  }
  return uVar2;
}

