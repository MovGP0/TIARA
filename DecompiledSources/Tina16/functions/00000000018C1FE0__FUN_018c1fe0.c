/* Ghidra address: 018c1fe0 */
/* Ghidra symbol: FUN_018c1fe0 */


void FUN_018c1fe0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0xa8) + 0x128);
  (**(code **)(*plVar1 + 0xf0))(plVar1);
  lVar2 = FUN_0197b750(*(undefined8 *)(param_2 + 0xa8));
  if (*(longlong *)(*(longlong *)(param_2 + 0xa8) + 0x128) == lVar2) {
    *(undefined8 *)(*(longlong *)(param_2 + 0xa8) + 0x128) = 0;
  }
  return;
}

