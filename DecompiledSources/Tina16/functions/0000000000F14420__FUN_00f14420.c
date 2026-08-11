/* Ghidra address: 00f14420 */
/* Ghidra symbol: FUN_00f14420 */


void FUN_00f14420(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_01cd62b0(*(undefined8 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 200));
  *(undefined8 *)(param_1 + 0xa8) = uVar2;
  uVar2 = FUN_01cd62b0(*(undefined8 *)(param_1 + 0xe0),*(undefined4 *)(param_1 + 0xcc));
  *(undefined8 *)(param_1 + 0xb0) = uVar2;
  plVar1 = *(longlong **)(param_1 + 0xf0);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0xe8))(plVar1);
  }
  return;
}

