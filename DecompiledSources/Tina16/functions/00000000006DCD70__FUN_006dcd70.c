/* Ghidra address: 006dcd70 */
/* Ghidra symbol: FUN_006dcd70 */


void FUN_006dcd70(longlong param_1,int param_2)

{
  undefined8 uVar1;
  undefined4 local_40 [2];
  undefined8 local_38;
  int local_30;
  undefined4 local_2c;
  
  if ((*(char *)(param_1 + 0x38) == '\0') && (param_2 != *(int *)(param_1 + 0x34))) {
    *(int *)(param_1 + 0x34) = param_2;
    if (-1 < param_2) {
      param_2 = param_2 + -1;
    }
    local_40[0] = 0x18;
    local_2c = 0xf000;
    local_38 = *(undefined8 *)(param_1 + 0x20);
    local_30 = (param_2 + 1) * 0x1000;
    uVar1 = FUN_006dc7a0();
    thunk_FUN_041b2403(uVar1,0x113f,0,local_40);
  }
  return;
}

