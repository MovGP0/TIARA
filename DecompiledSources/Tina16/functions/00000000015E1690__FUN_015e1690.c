/* Ghidra address: 015e1690 */
/* Ghidra symbol: FUN_015e1690 */


void FUN_015e1690(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_00410f20(*(undefined8 *)(param_2 + 0x518));
  uVar1 = FUN_00416740(*(undefined8 *)(param_2 + 0x510));
  FUN_015bf470(uVar1);
  FUN_015dcd20(*(undefined8 *)(param_2 + 0x550));
  FUN_00410f20(*(undefined8 *)(param_2 + 0x508));
  *(undefined1 *)(*(longlong *)(param_2 + 0x550) + 0x110) = *(undefined1 *)(param_2 + 0x507);
  return;
}

