/* Ghidra address: 018935f0 */
/* Ghidra symbol: FUN_018935f0 */


void FUN_018935f0(longlong param_1,int param_2,int param_3,undefined4 param_4,undefined2 param_5)

{
  undefined8 uVar1;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  if (*(char *)(param_1 + 0x4bc) == '\0') {
    local_24 = 0x1c;
    local_20 = 0x17;
    local_1c = 0;
    local_18 = param_2;
    if (param_2 < param_3) {
      local_18 = 0;
    }
    local_14 = param_3;
    local_10 = param_4;
    local_c = param_4;
    uVar1 = FUN_0065b870();
    thunk_FUN_041b9595(uVar1,param_5,&local_24,0xffffffff);
  }
  return;
}

