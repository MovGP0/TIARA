/* Ghidra address: 006ef510 */
/* Ghidra symbol: FUN_006ef510 */


void FUN_006ef510(longlong param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  int local_50;
  
  if ((*(int *)(param_1 + 0x1c) != param_2) &&
     (*(int *)(param_1 + 0x1c) = param_2,
     *(char *)(*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 0x510) == '\0')) {
    local_80 = 0x10;
    local_50 = param_2;
    local_7c = FUN_006ef6e0(param_1);
    local_78 = 0;
    uVar3 = FUN_006eeda0(param_1);
    thunk_FUN_041b2403(uVar3,0x104c,0,&local_80);
    uVar3 = FUN_006eed60(param_1);
    uVar1 = FUN_006ef6e0(param_1);
    uVar2 = FUN_006ef6e0(param_1);
    FUN_006f2d80(uVar3,uVar1,uVar2);
  }
  return;
}

