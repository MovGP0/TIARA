/* Ghidra address: 0188c570 */
/* Ghidra symbol: FUN_0188c570 */


void FUN_0188c570(longlong param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_38 [32];
  longlong local_18;
  undefined1 *local_10;
  
  local_10 = auStack_38;
  local_18 = *(longlong *)(param_1 + 0xd0);
  puVar1 = auStack_38;
  if (local_18 != 0) {
    thunk_FUN_041a2fd8(local_18);
    puVar1 = local_10;
  }
  local_10 = puVar1;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  FUN_0188c5e0(param_1);
  return;
}

