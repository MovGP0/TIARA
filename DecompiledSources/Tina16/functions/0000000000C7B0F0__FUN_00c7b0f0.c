/* Ghidra address: 00c7b0f0 */
/* Ghidra symbol: FUN_00c7b0f0 */


void FUN_00c7b0f0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = 0;
  if (*(longlong *)(param_1 + 0x298) != 0) {
    FUN_00c79860(param_1,&local_10);
    FUN_00c79940(param_1,0);
    uVar1 = thunk_FUN_03a99535(*(undefined8 *)(param_1 + 0x298),1);
    thunk_FUN_041b2403(uVar1,0xf5,0,0);
    FUN_00c79940(param_1,local_10);
  }
  FUN_00414480(&local_10);
  return;
}

