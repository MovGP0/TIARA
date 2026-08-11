/* Ghidra address: 00d5a0b0 */
/* Ghidra symbol: FUN_00d5a0b0 */


undefined8 FUN_00d5a0b0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((*(longlong *)(param_1 + 8) == 0) ||
     (iVar1 = (*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x10)) *
              (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x14)), iVar1 < 1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
  }
  return uVar2;
}

