/* Ghidra address: 01bc42f0 */
/* Ghidra symbol: FUN_01bc42f0 */


void FUN_01bc42f0(longlong param_1)

{
  undefined4 uVar1;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x740) + 0x260))(*(longlong **)(param_1 + 0x740));
  (**(code **)(**(longlong **)(param_1 + 0x758) + 0x18))
            (*(longlong **)(param_1 + 0x758),local_20,uVar1);
  FUN_00414ad0(param_1 + 0x770,local_20[0]);
  FUN_01bc2cd0(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x720) + 0x268))(*(longlong **)(param_1 + 0x720),0);
  FUN_00414480(local_20);
  return;
}

