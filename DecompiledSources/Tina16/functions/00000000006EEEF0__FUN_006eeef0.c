/* Ghidra address: 006eeef0 */
/* Ghidra symbol: FUN_006eeef0 */


void FUN_006eeef0(longlong param_1,int param_2)

{
  undefined8 uVar1;
  undefined4 local_70;
  undefined4 local_6c;
  int local_3c;
  
  if (param_2 != *(int *)(param_1 + 0x48)) {
    FUN_0040d200(&local_70,0x58,0);
    local_70 = 0x100;
    local_6c = FUN_006ef6e0(param_1);
    local_3c = param_2;
    uVar1 = FUN_006eeda0(param_1);
    thunk_FUN_041b2403(uVar1,0x104c,0,&local_70);
    *(int *)(param_1 + 0x48) = param_2;
  }
  return;
}

