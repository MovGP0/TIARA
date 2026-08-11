/* Ghidra address: 01635620 */
/* Ghidra symbol: FUN_01635620 */


void FUN_01635620(longlong param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined4 param_5)

{
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  local_10 = 0;
  local_18 = 0;
  FUN_01616620(&local_20,param_2);
  FUN_0043f750(&local_28,param_3);
  FUN_01616700(&local_30,param_2,param_5);
  FUN_00416cd0(&local_18,8,&DAT_01635798,*(undefined8 *)(*(longlong *)(param_1 + 0x90) + 0x638),
               &DAT_016357a8,local_20,L"_ln_",local_28,&LAB_016357d4,local_30);
  if (9999 < param_4) {
    FUN_01613110(0);
  }
  if (*(int *)(*(longlong *)(param_1 + 0x98) + 0x98) < param_4) {
    *(int *)(*(longlong *)(param_1 + 0x98) + 0x98) = param_4;
  }
  FUN_01635560(param_1,param_4,local_18);
  FUN_00414560(&local_30,5);
  return;
}

