/* Ghidra address: 006dd340 */
/* Ghidra symbol: FUN_006dd340 */


void FUN_006dd340(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  undefined4 local_40 [2];
  undefined8 local_38;
  uint local_14;
  
  if (*(char *)(param_1 + 0x38) == '\0') {
    local_40[0] = 0x40;
    local_38 = *(undefined8 *)(param_1 + 0x20);
    local_14 = param_2 & 0xff;
    uVar1 = FUN_006dc7a0();
    thunk_FUN_041b2403(uVar1,0x113f,0,local_40);
  }
  return;
}

