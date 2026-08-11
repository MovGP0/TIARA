/* Ghidra address: 00f8b3c0 */
/* Ghidra symbol: FUN_00f8b3c0 */


undefined8
FUN_00f8b3c0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  undefined1 local_80 [96];
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  (**(code **)(**(longlong **)(param_1 + 0x3448) + 0x18))
            (*(longlong **)(param_1 + 0x3448),local_20,param_3);
  FUN_00442620(param_1 + 0x2be0,local_20[0]);
  uVar1 = _get_mcu_register_value(*(undefined8 *)(param_1 + 0x60),param_1 + 0x2be0,param_4);
  FUN_015fa440(local_80,uVar1,param_5);
  FUN_004169a0(local_20,local_80);
  FUN_00414ad0(param_2,local_20[0]);
  FUN_00414480(local_20);
  return param_2;
}

