/* Ghidra address: 01709060 */
/* Ghidra symbol: FUN_01709060 */


undefined8
FUN_01709060(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
            longlong param_5)

{
  undefined8 uVar1;
  undefined8 local_res20;
  undefined1 local_108 [256];
  
  local_res20 = param_4;
  FUN_00414610(param_4);
  if (param_5 == 0) {
    uVar1 = FUN_017105e0(0);
    FUN_01716960(uVar1,local_108,*(undefined8 *)(param_1 + 0x30),4,param_3);
    FUN_004169a0(param_2,local_108);
  }
  else {
    FUN_01716960(param_5,local_108,*(undefined8 *)(param_1 + 0x30),4,param_3);
    FUN_004169a0(param_2,local_108);
  }
  FUN_00414480(&local_res20);
  return param_2;
}

