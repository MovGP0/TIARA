/* Ghidra address: 00bfaf10 */
/* Ghidra symbol: FUN_00bfaf10 */


undefined8 FUN_00bfaf10(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  uVar2 = FUN_00bfaa90(param_1);
  local_20 = (int)uVar2;
  if ((((local_20 < *(int *)(param_1 + 0x50c)) ||
       (*(int *)(param_1 + 0x50c) + *(int *)(param_1 + 0x4d0) < local_20)) ||
      (uStack_1c = (int)((ulonglong)uVar2 >> 0x20), uStack_1c < *(int *)(param_1 + 0x534))) ||
     (iVar1 = *(int *)(param_1 + 0x534) + *(int *)(param_1 + 0x508), iVar1 < uStack_1c)) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
  }
  return uVar2;
}

