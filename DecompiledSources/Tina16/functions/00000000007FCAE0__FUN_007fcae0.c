/* Ghidra address: 007fcae0 */
/* Ghidra symbol: FUN_007fcae0 */


void FUN_007fcae0(longlong param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  puVar1 = auStack_48;
  if (*(longlong *)(param_1 + 0x610) != 0) {
    (**(code **)(param_1 + 0x610))(*(undefined8 *)(param_1 + 0x618),param_1);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  if ((*(byte *)(param_1 + 0x6a8) & 2) != 0) {
    FUN_007fdf50(param_1,1);
  }
  return;
}

