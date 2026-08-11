/* Ghidra address: 016ebb00 */
/* Ghidra symbol: FUN_016ebb00 */


void FUN_016ebb00(longlong param_1,undefined1 param_2,undefined8 param_3,short param_4)

{
  undefined8 uVar1;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  short local_a;
  
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  uVar1 = FUN_01b05be0(param_1,param_2,&local_a);
  if (local_a == param_4) {
    FUN_00409a70(uVar1,param_3,param_4);
  }
  else {
    FUN_01b20020(&local_28,*(undefined8 *)(param_1 + 0x128),&DAT_016ebc1c);
    FUN_0043f750(&local_30,param_2);
    FUN_00416cd0(local_20,3,local_28,&DAT_016ebc2c,local_30);
    FUN_01b04d70(0x213,&PTR_DAT_016ebc08,local_20[0]);
  }
  FUN_00414560(&local_30,3);
  return;
}

