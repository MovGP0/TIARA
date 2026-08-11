/* Ghidra address: 00c789c0 */
/* Ghidra symbol: FUN_00c789c0 */


void FUN_00c789c0(undefined8 param_1)

{
  undefined8 uVar1;
  int iVar2;
  int local_2c [3];
  
  uVar1 = FUN_00c7a6e0(param_1);
  iVar2 = thunk_FUN_041b2403(uVar1,0x1037,0,0);
  local_2c[0] = iVar2;
  FUN_00c7a720(param_1,local_2c);
  if (iVar2 != local_2c[0]) {
    thunk_FUN_041b2403(uVar1,0x1036,0,(longlong)local_2c[0]);
  }
  iVar2 = thunk_FUN_04118143(uVar1,0xfffffff0);
  local_2c[0] = iVar2;
  FUN_00c7a660(param_1,local_2c);
  if (iVar2 != local_2c[0]) {
    thunk_FUN_03c9d277(uVar1,0xfffffff0,(longlong)local_2c[0]);
  }
  return;
}

