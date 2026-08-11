/* Ghidra address: 0041b660 */
/* Ghidra symbol: FUN_0041b660 */


void FUN_0041b660(undefined8 param_1)

{
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 *local_20;
  
  local_30 = auStack_58;
  for (local_20 = DAT_01db9080; local_20 != (undefined8 *)0x0; local_20 = (undefined8 *)*local_20) {
    (*(code *)local_20[1])(param_1);
  }
  return;
}

