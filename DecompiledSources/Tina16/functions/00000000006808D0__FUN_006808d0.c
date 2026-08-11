/* Ghidra address: 006808d0 */
/* Ghidra symbol: FUN_006808d0 */


void FUN_006808d0(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  int local_20;
  int local_1c;
  
  uVar1 = FUN_0065b870(param_1);
  thunk_FUN_041b2403(uVar1,0xb0,&local_20,&local_1c);
  local_1c = local_20 + param_2;
  uVar1 = FUN_0065b870(param_1);
  thunk_FUN_041b2403(uVar1,0xb1,(longlong)local_20,(longlong)local_1c);
  uVar1 = FUN_0065b870(param_1);
  thunk_FUN_041b2403(uVar1,0xb7,0,0);
  return;
}

