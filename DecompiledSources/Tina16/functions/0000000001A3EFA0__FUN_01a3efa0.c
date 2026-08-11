/* Ghidra address: 01a3efa0 */
/* Ghidra symbol: FUN_01a3efa0 */


undefined8 FUN_01a3efa0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x2968) + 0x5c);
  if ((((iVar1 == 1) || (iVar1 == 2)) || (*(int *)(param_1 + 0x294c) == 2)) ||
     (*(int *)(param_1 + 0x294c) == 3)) {
    uVar2 = CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

