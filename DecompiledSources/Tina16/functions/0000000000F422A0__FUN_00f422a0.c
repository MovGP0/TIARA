/* Ghidra address: 00f422a0 */
/* Ghidra symbol: FUN_00f422a0 */


void FUN_00f422a0(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0065f300(&PTR_FUN_00643358,1,param_1);
  *(undefined8 *)(param_1 + 0x760) = uVar1;
  FUN_008483e0(*(undefined8 *)(param_1 + 0x6d0),3);
  FUN_00f42ce0(param_1);
  FUN_00f42d30(param_1);
  FUN_0064cf60(param_1,0x406);
  FUN_00414480(param_1 + 0x780);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6e8),0);
  (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0x128))(*(longlong **)(param_1 + 0x6e8),0);
  uVar1 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 0x768) = uVar1;
  return;
}

