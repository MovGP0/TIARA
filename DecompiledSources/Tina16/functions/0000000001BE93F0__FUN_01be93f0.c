/* Ghidra address: 01be93f0 */
/* Ghidra symbol: FUN_01be93f0 */


void FUN_01be93f0(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x680);
  *(undefined8 *)(param_1 + 0x680) = 0;
  FUN_00410f20(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x688);
  *(undefined8 *)(param_1 + 0x688) = 0;
  FUN_00410f20(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x690);
  *(undefined8 *)(param_1 + 0x690) = 0;
  FUN_00410f20(uVar1);
  return;
}

