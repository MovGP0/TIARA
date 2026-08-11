/* Ghidra address: 00954930 */
/* Ghidra symbol: FUN_00954930 */


void FUN_00954930(longlong param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined1 *puVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 *local_30;
  
  local_30 = auStack_68;
  *(undefined1 *)(param_1 + 0xb0) = 1;
  puVar2 = auStack_68;
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    local_48 = param_4;
    (**(code **)(param_1 + 0xd8))(*(undefined8 *)(param_1 + 0xe0),param_1,param_2,param_3);
    puVar2 = local_30;
  }
  local_30 = puVar2;
  plVar1 = *(longlong **)(param_1 + 0xa0);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x88))(plVar1,param_2,param_3,param_4);
  }
  return;
}

