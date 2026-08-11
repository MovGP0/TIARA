/* Ghidra address: 00896b60 */
/* Ghidra symbol: FUN_00896b60 */


void FUN_00896b60(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  FUN_0089b8c0(param_1);
  puVar2 = (undefined8 *)(param_1 + 0x10);
  for (lVar1 = 0x41; lVar1 != 0; lVar1 = lVar1 + -1) {
    *param_2 = *puVar2;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
  }
  FUN_0089b920(param_1);
  return;
}

