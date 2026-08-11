/* Ghidra address: 017f0b20 */
/* Ghidra symbol: FUN_017f0b20 */


void FUN_017f0b20(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  FUN_017e3010(*(undefined8 *)(param_1 + 0xb48),param_2);
  FUN_005fc860(*(undefined8 *)(*(longlong *)(param_1 + 0x7e0) + 0xb8),0xff);
  uVar1 = FUN_00b89270();
  FUN_00b8e520(uVar1,&local_28,0x3e2);
  FUN_00416cd0(local_20,3,local_28,&DAT_017f0c48,*param_2);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x7e0),local_20[0]);
  (**(code **)(**(longlong **)(param_1 + 0x868) + 600))(*(longlong **)(param_1 + 0x868));
  thunk_FUN_03f3ed6d(0x30);
  if (0 < *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xb48) + 0x8d8) + 0x10)) {
    FUN_016fd940(
                L"Errors occurred during the execution of the program, the curves will not be drawn!"
                );
  }
  FUN_00414560(&local_28,2);
  return;
}

