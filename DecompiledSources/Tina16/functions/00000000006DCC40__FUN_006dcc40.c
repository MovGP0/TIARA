/* Ghidra address: 006dcc40 */
/* Ghidra symbol: FUN_006dcc40 */


void FUN_006dcc40(longlong param_1,int param_2)

{
  undefined8 uVar1;
  undefined4 local_58 [2];
  undefined8 local_50;
  int local_10;
  
  if ((*(char *)(param_1 + 0x38) == '\0') && (param_2 != *(int *)(param_1 + 0x3c))) {
    *(int *)(param_1 + 0x3c) = param_2;
    local_58[0] = 0x210;
    local_50 = *(undefined8 *)(param_1 + 0x20);
    local_10 = param_2;
    uVar1 = FUN_006dc7a0();
    thunk_FUN_041b2403(uVar1,0x113f,0,local_58);
  }
  return;
}

