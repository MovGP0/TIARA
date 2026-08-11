/* Ghidra address: 01798160 */
/* Ghidra symbol: FUN_01798160 */


void FUN_01798160(longlong param_1,longlong param_2,undefined4 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_40 = 0;
  local_38 = *param_4;
  uStack_30 = param_4[1];
  (**(code **)(**(longlong **)(param_2 + 0x4b8) + 0xa8))(*(longlong **)(param_2 + 0x4b8),&local_38);
  (**(code **)(**(longlong **)(param_2 + 0x4a0) + 0x18))
            (*(longlong **)(param_2 + 0x4a0),&local_40,param_3);
  (**(code **)(**(longlong **)(param_2 + 0x4b8) + 0x120))
            (*(longlong **)(param_2 + 0x4b8),(int)local_38 + 2,local_38._4_4_,local_40);
  local_38 = CONCAT44(local_38._4_4_ -
                      *(int *)(*(longlong *)
                                (*(longlong *)(*(longlong *)(param_1 + 0x758) + 0xb8) + 0x18) + 0x28
                              ),(int)local_38);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0xd18) + 0x30))
                    (*(longlong **)(param_1 + 0xd18),param_3);
  FUN_017996c0(param_1,*(undefined8 *)(param_2 + 0x4b8),&local_38,uVar1);
  FUN_00414480(&local_40);
  return;
}

