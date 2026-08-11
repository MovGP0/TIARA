/* Ghidra address: 01ba9580 */
/* Ghidra symbol: FUN_01ba9580 */


undefined8 FUN_01ba9580(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 local_res20;
  undefined1 local_108 [256];
  
  local_res20 = param_4;
  FUN_00414610(param_4);
  FUN_01ba9fc0(*(undefined8 *)PTR_DAT_02002a68,local_108,*(undefined8 *)(param_1 + 0x28),param_3);
  FUN_004169a0(param_2,local_108);
  FUN_00414480(&local_res20);
  return param_2;
}

