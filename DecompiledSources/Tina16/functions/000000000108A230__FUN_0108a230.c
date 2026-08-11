/* Ghidra address: 0108a230 */
/* Ghidra symbol: FUN_0108a230 */


undefined8
FUN_0108a230(longlong param_1,undefined8 param_2,undefined8 param_3,char *param_4,undefined4 param_5
            )

{
  undefined4 uVar1;
  undefined8 local_res18 [2];
  undefined1 local_60 [88];
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  FUN_00442620(param_1 + 0xc08,local_res18[0]);
  uVar1 = _get_mcu_register_value(*(undefined8 *)(param_1 + 0xb20),param_1 + 0xc08,param_4);
  if (*param_4 != '\0') {
    FUN_015fa440(local_60,uVar1,param_5);
    FUN_004169a0(local_res18,local_60);
  }
  FUN_00414ad0(param_2,local_res18[0]);
  FUN_00414480(local_res18);
  return param_2;
}

