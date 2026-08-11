/* Ghidra address: 0041b700 */
/* Ghidra symbol: FUN_0041b700 */


void FUN_0041b700(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  FUN_0041b660(param_1[1]);
  puVar1 = (undefined8 *)PTR_DAT_01db9078;
  if (param_1 == (undefined8 *)PTR_DAT_01db9078) {
    PTR_DAT_01db9078 = (undefined *)*param_1;
  }
  else {
    for (; puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1) {
      if ((undefined8 *)*puVar1 == param_1) {
        *puVar1 = *param_1;
        return;
      }
    }
  }
  return;
}

