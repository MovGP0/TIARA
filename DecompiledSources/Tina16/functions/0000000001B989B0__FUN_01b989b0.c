/* Ghidra address: 01b989b0 */
/* Ghidra symbol: FUN_01b989b0 */


void FUN_01b989b0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_38 = *param_4;
  uStack_30 = param_4[1];
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x768) + 0x490);
  (**(code **)(*plVar1 + 0xa8))(plVar1,&local_38);
  FUN_007d6c70(*(undefined8 *)(param_1 + 0x8a0),
               *(undefined8 *)(*(longlong *)(param_1 + 0x768) + 0x490),(int)local_38 + 1,
               local_38._4_4_ + 1,param_3,1);
  return;
}

