/* Ghidra address: 0069c7d0 */
/* Ghidra symbol: FUN_0069c7d0 */


undefined8 FUN_0069c7d0(longlong param_1)

{
  undefined4 uVar1;
  
  if (*(short *)(param_1 + 8) == -0x284f) {
    *(code **)(param_1 + 0x28) = FUN_0069c750;
    *(code **)(param_1 + 0x30) = FUN_0069c7a0;
    *(code **)(param_1 + 0x38) = FUN_0069c7a0;
  }
  else {
    *(undefined2 *)(param_1 + 8) = 0xd7b2;
    *(code **)(param_1 + 0x28) = FUN_0069c770;
    *(code **)(param_1 + 0x30) = FUN_0069c770;
    *(code **)(param_1 + 0x38) = FUN_0069c7b0;
    FUN_0069d590(DAT_01dfc7e0);
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
    uVar1 = FUN_0069df40(DAT_01dfc7e0);
    *(undefined4 *)(param_1 + 0x48) = uVar1;
    uVar1 = FUN_0069df10(DAT_01dfc7e0);
    *(undefined4 *)(param_1 + 0x4c) = uVar1;
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  return 0;
}

