/* Ghidra address: 00954c70 */
/* Ghidra symbol: FUN_00954c70 */


void FUN_00954c70(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 *puVar2;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  
  local_30 = auStack_58;
  *(undefined1 *)(param_1 + 0xb0) = 1;
  puVar2 = auStack_58;
  if (*(longlong *)(param_1 + 0x108) != 0) {
    (**(code **)(param_1 + 0x108))(*(undefined8 *)(param_1 + 0x110),param_1,param_2);
    puVar2 = local_30;
  }
  local_30 = puVar2;
  plVar1 = *(longlong **)(param_1 + 0xa0);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0xa8))(plVar1,param_2);
  }
  return;
}

