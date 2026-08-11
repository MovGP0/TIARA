/* Ghidra address: 004c7770 */
/* Ghidra symbol: FUN_004c7770 */


void FUN_004c7770(longlong param_1)

{
  undefined8 local_30;
  longlong local_28 [3];
  
  local_30 = 0;
  FUN_0058f370(local_28,*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x70));
  FUN_004c6c50(param_1);
  if (local_28[0] == 0) {
    FUN_004c8510(*(undefined8 *)(param_1 + 0x60),0xd);
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x60) + 0x28))
              (*(longlong **)(param_1 + 0x60),&local_30,local_28);
    FUN_004c55e0(*(undefined8 *)(param_1 + 0x60),local_30);
  }
  FUN_00414480(&local_30);
  return;
}

