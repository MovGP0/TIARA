/* Ghidra address: 00447c80 */
/* Ghidra symbol: FUN_00447c80 */


undefined8 FUN_00447c80(longlong param_1)

{
  short sVar1;
  undefined8 uVar2;
  
  uVar2 = 1;
  sVar1 = *(short *)(*(longlong *)(param_1 + 0xb0) + (longlong)*(int *)(param_1 + 0x8c) * 2);
  if (sVar1 == 0x2b) {
    *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + 1;
  }
  else if (sVar1 == 0x2d) {
    *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + 1;
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

