/* Ghidra address: 00667920 */
/* Ghidra symbol: FUN_00667920 */


void FUN_00667920(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_2 + 0x98) = *(undefined8 *)(param_2 + 0x88);
  *(code **)(param_2 + 0x90) = FUN_00410f20;
  FUN_004d1a50(*(undefined8 *)(param_2 + 0xe0),param_2 + 0x90);
  uVar1 = FUN_004afa30(*(undefined8 *)(*(longlong *)(param_2 + 0xe0) + 0x48));
  *(undefined8 *)(param_2 + 0x80) = uVar1;
  FUN_004ae870(*(undefined8 *)(param_2 + 0x80),0);
  *(undefined8 *)(param_2 + 0x78) = *(undefined8 *)(*(longlong *)(param_2 + 0xe0) + 0x48);
  FUN_00412130(*(undefined8 *)(*(longlong *)(param_2 + 0x78) + 0x10));
  return;
}

