/* Ghidra address: 006dc830 */
/* Ghidra symbol: FUN_006dc830 */


void FUN_006dc830(longlong param_1,char param_2)

{
  undefined8 uVar1;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined4 local_1c;
  
  if ((*(char *)(param_1 + 0x38) == '\0') && (param_2 != *(char *)(param_1 + 0x3a))) {
    *(char *)(param_1 + 0x3a) = param_2;
    local_58[0] = 0x100;
    local_50 = *(undefined8 *)(param_1 + 0x20);
    if (param_2 == '\0') {
      local_1c = 2;
    }
    else {
      local_1c = 0;
    }
    uVar1 = FUN_006dc7a0();
    thunk_FUN_041b2403(uVar1,0x113f,0,local_58);
  }
  return;
}

