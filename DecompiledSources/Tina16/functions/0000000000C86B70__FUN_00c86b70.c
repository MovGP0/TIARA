/* Ghidra address: 00c86b70 */
/* Ghidra symbol: FUN_00c86b70 */


void FUN_00c86b70(longlong param_1,longlong param_2,undefined4 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 local_48;
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
                                (*(longlong *)(*(longlong *)(param_1 + 0x6b0) + 0xb8) + 0x18) + 0x28
                              ),(int)local_38);
  local_48 = FUN_00b95b50(&local_38);
  uVar1 = (**(code **)(**(longlong **)(param_2 + 0x4a0) + 0x30))
                    (*(longlong **)(param_2 + 0x4a0),param_3);
  FUN_00c40d20(*(undefined8 *)(param_2 + 0x4b8),&local_48,uVar1,0x80,*PTR_DAT_02002480 == '\0',0,0,0
              );
  FUN_00414480(&local_40);
  return;
}

