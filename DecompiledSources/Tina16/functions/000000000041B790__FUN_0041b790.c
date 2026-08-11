/* Ghidra address: 0041b790 */
/* Ghidra symbol: FUN_0041b790 */


void FUN_0041b790(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(undefined **)(param_2 + 0x50) == PTR_DAT_01db9078) {
    PTR_DAT_01db9078 = (undefined *)**(undefined8 **)(param_2 + 0x50);
  }
  else {
    *(undefined **)(param_2 + 0x38) = PTR_DAT_01db9078;
    lVar1 = *(longlong *)(param_2 + 0x38);
    while (lVar1 != 0) {
      if (**(longlong **)(param_2 + 0x38) == *(longlong *)(param_2 + 0x50)) {
        **(undefined8 **)(param_2 + 0x38) = **(undefined8 **)(param_2 + 0x50);
        return;
      }
      *(undefined8 *)(param_2 + 0x38) = **(undefined8 **)(param_2 + 0x38);
      lVar1 = *(longlong *)(param_2 + 0x38);
    }
  }
  return;
}

