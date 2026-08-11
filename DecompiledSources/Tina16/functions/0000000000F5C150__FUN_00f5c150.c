/* Ghidra address: 00f5c150 */
/* Ghidra symbol: FUN_00f5c150 */


void FUN_00f5c150(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_004095f0(*(longlong *)(param_1 + 0x50),(uint)*(byte *)(param_1 + 0x4a) * 0x88);
  }
  uVar1 = (*(code *)**(undefined8 **)(*(longlong *)(param_1 + 8) + 8))(*(longlong *)(param_1 + 8));
  FUN_004095f0(uVar1);
  return;
}

