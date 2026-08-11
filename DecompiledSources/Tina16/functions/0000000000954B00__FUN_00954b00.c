/* Ghidra address: 00954b00 */
/* Ghidra symbol: FUN_00954b00 */


void FUN_00954b00(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 *puVar2;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  
  local_30 = auStack_58;
  *(undefined1 *)(param_1 + 0xb0) = 1;
  puVar2 = auStack_58;
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    (**(code **)(param_1 + 0xe8))(*(undefined8 *)(param_1 + 0xf0),param_1,param_2);
    puVar2 = local_30;
  }
  local_30 = puVar2;
  plVar1 = *(longlong **)(param_1 + 0xa0);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x90))(plVar1,param_2);
  }
  return;
}

