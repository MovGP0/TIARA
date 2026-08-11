/* Ghidra address: 006ded30 */
/* Ghidra symbol: FUN_006ded30 */


void FUN_006ded30(longlong param_1)

{
  char cVar1;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined8 local_18;
  char local_9;
  
  local_20 = auStack_48;
  local_9 = FUN_0065be20(*(undefined8 *)(param_1 + 8));
  if (local_9 != '\0') {
    FUN_006df690(param_1);
  }
  FUN_006dfe80(param_1);
  cVar1 = FUN_0065be20(*(undefined8 *)(param_1 + 8));
  if (cVar1 != '\0') {
    local_18 = FUN_0065b870(*(undefined8 *)(param_1 + 8));
    thunk_FUN_041b2403(local_18,0x1101,0,0xffffffffffff0000);
  }
  if (local_9 != '\0') {
    FUN_006df710(param_1);
  }
  return;
}

