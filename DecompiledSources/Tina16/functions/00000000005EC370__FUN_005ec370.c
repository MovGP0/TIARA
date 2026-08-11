/* Ghidra address: 005ec370 */
/* Ghidra symbol: FUN_005ec370 */


bool FUN_005ec370(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  longlong local_18;
  uint local_c;
  
  local_20 = auStack_48;
  local_c = *(uint *)(param_1 + 0x2c);
  *(uint *)(param_1 + 0x2c) = local_c & 0x300 | 0x20009;
  local_18 = FUN_005ebee0(param_1,param_2);
  if (local_18 != 0) {
    thunk_FUN_0418fb4b(local_18);
  }
  *(uint *)(param_1 + 0x2c) = local_c;
  return local_18 != 0;
}

