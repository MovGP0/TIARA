/* Ghidra address: 00c5a090 */
/* Ghidra symbol: FUN_00c5a090 */


void FUN_00c5a090(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  
  uVar2 = FUN_0065b870(param_1);
  thunk_FUN_041b2403(uVar2,0xb2,0,&local_28);
  local_1c = FUN_0064d120(param_1);
  local_1c = local_1c + 1;
  iVar1 = FUN_0064d0b0(param_1);
  local_20 = (iVar1 - *(int *)(*(longlong *)(param_1 + 0x4e8) + 0x98)) + -2;
  local_24 = 0;
  local_28 = 0;
  uVar2 = FUN_0065b870(param_1);
  thunk_FUN_041b2403(uVar2,0xb4,0,&local_28);
  uVar2 = FUN_0065b870(param_1);
  thunk_FUN_041b2403(uVar2,0xb2,0,&local_28);
  return;
}

