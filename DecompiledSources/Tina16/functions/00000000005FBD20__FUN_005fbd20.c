/* Ghidra address: 005fbd20 */
/* Ghidra symbol: FUN_005fbd20 */


void FUN_005fbd20(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong local_28;
  undefined8 *local_20;
  undefined8 *local_18;
  longlong local_10;
  
  local_30 = auStack_58;
  local_28 = param_2;
  FUN_00427930(param_2 + 0x10);
  puVar2 = *(undefined8 **)(param_2 + 8);
  puVar1 = local_20;
  while (local_20 = puVar2, local_18 = local_20, local_20 != (undefined8 *)0x0) {
    if ((local_20[2] != 0) && (*(int *)(local_20 + 5) < 0)) {
      thunk_FUN_0416f828(local_20[2]);
      local_20[2] = 0;
    }
    puVar1 = local_20;
    puVar2 = (undefined8 *)*local_18;
  }
  local_20 = puVar1;
  local_10 = param_2;
  FUN_00427ff0(param_2 + 0x10);
  return;
}

