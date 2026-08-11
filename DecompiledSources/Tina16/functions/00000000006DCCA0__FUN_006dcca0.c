/* Ghidra address: 006dcca0 */
/* Ghidra symbol: FUN_006dcca0 */


void FUN_006dcca0(longlong param_1,int param_2)

{
  undefined8 uVar1;
  undefined4 local_40 [2];
  undefined8 local_38;
  int local_18;
  
  if ((*(char *)(param_1 + 0x38) == '\0') && (param_2 != *(int *)(param_1 + 0x2c))) {
    *(int *)(param_1 + 0x2c) = param_2;
    local_40[0] = 0x30;
    local_38 = *(undefined8 *)(param_1 + 0x20);
    local_18 = param_2;
    if (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 0x6a8) != 0) {
      local_18 = -1;
    }
    uVar1 = FUN_006dc7a0();
    thunk_FUN_041b2403(uVar1,0x113f,0,local_40);
  }
  return;
}

