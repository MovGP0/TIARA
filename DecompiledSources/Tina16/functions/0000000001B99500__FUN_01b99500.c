/* Ghidra address: 01b99500 */
/* Ghidra symbol: FUN_01b99500 */


void FUN_01b99500(longlong param_1)

{
  undefined8 uVar1;
  undefined8 local_20;
  undefined8 local_18;
  longlong local_10;
  
  local_20 = 0;
  local_10 = 0;
  local_18 = 0;
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x780),&local_18);
  FUN_0043ea00(&local_10,local_18);
  if (local_10 != 0) {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x780),&local_20);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x718),local_20);
  }
  uVar1 = FUN_006e2530(*(undefined8 *)(param_1 + 0x7e8));
  FUN_01b96ae0(param_1,uVar1,1);
  FUN_00414560(&local_20,2);
  FUN_00414480(&local_10);
  return;
}

