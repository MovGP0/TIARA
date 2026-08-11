/* Ghidra address: 0068af10 */
/* Ghidra symbol: FUN_0068af10 */


void FUN_0068af10(longlong param_1,char param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0065b870(*(undefined8 *)(param_1 + 0x38));
  thunk_FUN_041b2403(uVar1,0xb,param_2 == '\0',0);
  if (param_2 == '\0') {
    FUN_0064e770(*(undefined8 *)(param_1 + 0x38));
  }
  return;
}

