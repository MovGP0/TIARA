/* Ghidra address: 00618ed0 */
/* Ghidra symbol: FUN_00618ed0 */


void FUN_00618ed0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined8 *local_10;
  
  local_20 = auStack_48;
  puVar1 = (undefined8 *)FUN_00618e50(param_1);
  if (puVar1 == (undefined8 *)0x0) {
    *param_2 = param_2;
  }
  else {
    *param_2 = *puVar1;
    *puVar1 = param_2;
  }
  local_10 = param_2;
  FUN_006191b0(param_1,param_2);
  return;
}

