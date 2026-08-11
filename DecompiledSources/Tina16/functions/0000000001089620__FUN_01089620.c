/* Ghidra address: 01089620 */
/* Ghidra symbol: FUN_01089620 */


undefined8
FUN_01089620(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
            undefined4 param_5)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined1 local_80 [96];
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x100) + 0xad0) + 0xe8);
  (**(code **)(*plVar1 + 0x18))(plVar1,local_20,param_3);
  FUN_00442620(*(longlong *)(param_1 + 0x100) + 0xc08,local_20[0]);
  uVar2 = _get_mcu_register_value
                    (*(undefined8 *)(*(longlong *)(param_1 + 0x100) + 0xb20),
                     *(longlong *)(param_1 + 0x100) + 0xc08,param_4);
  FUN_015fa440(local_80,uVar2,param_5);
  FUN_004169a0(local_20,local_80);
  FUN_00414ad0(param_2,local_20[0]);
  FUN_00414480(local_20);
  return param_2;
}

