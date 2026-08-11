/* Ghidra address: 006eacd0 */
/* Ghidra symbol: FUN_006eacd0 */


void FUN_006eacd0(longlong param_1,char param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x530) != param_2) {
    *(char *)(param_1 + 0x530) = param_2;
    uVar1 = FUN_0065b870(param_1);
    thunk_FUN_041b2403(uVar1,0x43f,(longlong)*(char *)(param_1 + 0x530),1);
  }
  return;
}

