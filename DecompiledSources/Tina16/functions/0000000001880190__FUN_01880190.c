/* Ghidra address: 01880190 */
/* Ghidra symbol: FUN_01880190 */


void FUN_01880190(longlong param_1,longlong param_2,undefined4 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_40 = 0;
  local_38 = *param_4;
  uStack_30 = param_4[1];
  plVar1 = *(longlong **)(param_2 + 0x4b8);
  (**(code **)(*plVar1 + 0xa8))(plVar1,&local_38);
  (**(code **)(**(longlong **)(param_2 + 0x4a0) + 0x18))
            (*(longlong **)(param_2 + 0x4a0),&local_40,param_3);
  (**(code **)(*plVar1 + 0x120))
            (plVar1,(int)local_38 + *(int *)(param_1 + 0x18) + 4,local_38._4_4_ + 1,local_40);
  FUN_005fd4e0(plVar1[0xf],0x808080);
  FUN_00414480(&local_40);
  return;
}

