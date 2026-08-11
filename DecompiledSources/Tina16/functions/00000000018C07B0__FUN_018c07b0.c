/* Ghidra address: 018c07b0 */
/* Ghidra symbol: FUN_018c07b0 */


void FUN_018c07b0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_2 + 0xd0) + 0x20) + 0x210);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x2a0))(plVar1,1);
  }
  lVar2 = *(longlong *)(*(longlong *)(param_2 + 0xd0) + 0x20);
  if (*(longlong *)(lVar2 + 0x2d8) != 0) {
    (**(code **)(lVar2 + 0x2d8))(*(undefined8 *)(lVar2 + 0x2e0),lVar2);
  }
  *(undefined4 *)(*(longlong *)(param_2 + 0xd0) + 0x38) = 0;
  plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_2 + 0xd0) + 0x20) + 0x228);
  (**(code **)(*plVar1 + 0x10))(plVar1,*(undefined8 *)(param_2 + 0x40));
  FUN_00410f20(*(undefined8 *)(param_2 + 0xa0));
  FUN_00410f20(*(undefined8 *)(param_2 + 0xa8));
  return;
}

