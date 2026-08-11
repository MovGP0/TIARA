/* Ghidra address: 013ee0d0 */
/* Ghidra symbol: FUN_013ee0d0 */


void FUN_013ee0d0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = 0;
  if ((*(int *)(param_1 + 0x1080) == 1) && (*(int *)(param_1 + 0x1084) == 1)) {
    uVar1 = FUN_00b89270();
    FUN_00b8e520(uVar1,&local_10,0x1a2);
    FUN_0064de00(param_1,local_10);
  }
  FUN_00414480(&local_10);
  return;
}

