/* Ghidra address: 00bf2c80 */
/* Ghidra symbol: FUN_00bf2c80 */


undefined8 FUN_00bf2c80(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x4b4);
  if ((iVar1 == *(int *)(param_1 + 0x4bc)) &&
     ((iVar1 = *(int *)(param_1 + 0x4b8), iVar1 == *(int *)(param_1 + 0x4c0) ||
      (*(char *)(param_1 + 0x5f5) == '\x02')))) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
  }
  return uVar2;
}

