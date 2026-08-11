/* Ghidra address: 0194eac0 */
/* Ghidra symbol: FUN_0194eac0 */


undefined8 FUN_0194eac0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res18 [2];
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  local_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  FUN_00414520(param_2);
  if (*(longlong *)(param_1 + 0x240) != 0) {
    FUN_0046f180(&local_30);
    (**(code **)(param_1 + 0x240))(*(undefined8 *)(param_1 + 0x248),local_res18[0],&local_30);
    FUN_0046c450(param_2,&local_30);
  }
  if (*(longlong *)(param_1 + 0x250) != 0) {
    FUN_0046f180(&local_30);
    (**(code **)(param_1 + 0x250))(*(undefined8 *)(param_1 + 600),param_1,local_res18[0],&local_30);
    FUN_0046c450(param_2,&local_30);
  }
  FUN_00460ba0(&local_30);
  FUN_00414480(local_res18);
  return param_2;
}

