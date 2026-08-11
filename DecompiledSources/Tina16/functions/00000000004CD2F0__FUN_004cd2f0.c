/* Ghidra address: 004cd2f0 */
/* Ghidra symbol: FUN_004cd2f0 */


undefined4 FUN_004cd2f0(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if (*(short *)(*(longlong *)(param_1 + 0x1e0) + 0x56) == 0x5b) {
    FUN_004c9210(*(undefined8 *)(param_1 + 0x1e0));
    FUN_004c8ed0(*(undefined8 *)(param_1 + 0x1e0),3);
    uVar1 = FUN_004c9920(*(undefined8 *)(param_1 + 0x1e0));
    FUN_004c9210(*(undefined8 *)(param_1 + 0x1e0));
    FUN_004c8ed0(*(undefined8 *)(param_1 + 0x1e0),0x5d);
    FUN_004c9210(*(undefined8 *)(param_1 + 0x1e0));
  }
  return uVar1;
}

