/* Ghidra address: 006dcb10 */
/* Ghidra symbol: FUN_006dcb10 */


void FUN_006dcb10(longlong param_1,byte param_2,char param_3)

{
  undefined8 uVar1;
  undefined4 local_40 [2];
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  
  if (*(char *)(param_1 + 0x38) == '\0') {
    local_40[0] = 8;
    local_38 = *(undefined8 *)(param_1 + 0x20);
    if (param_2 < 3) {
      if (param_2 == 2) {
        local_2c = 1;
      }
      else if (param_2 == 0) {
        local_2c = 4;
      }
      else if (param_2 == 1) {
        local_2c = 8;
      }
    }
    else if (param_2 == 3) {
      local_2c = 2;
    }
    else if (param_2 == 4) {
      local_2c = 0x20;
    }
    if (param_3 == '\0') {
      local_30 = 0;
    }
    else {
      local_30 = local_2c;
    }
    uVar1 = FUN_006dc7a0();
    thunk_FUN_041b2403(uVar1,0x113f,0,local_40);
  }
  return;
}

