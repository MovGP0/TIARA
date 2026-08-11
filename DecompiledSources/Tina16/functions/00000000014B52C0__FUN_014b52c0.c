/* Ghidra address: 014b52c0 */
/* Ghidra symbol: FUN_014b52c0 */


void FUN_014b52c0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  cVar2 = FUN_014b4510(param_1,param_2);
  if (cVar2 != '\0') {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x7b8) + 0xa8))(*(longlong **)(param_1 + 0x7b8));
    if (cVar2 != '\0') {
      FUN_00724270(*(undefined8 *)(param_1 + 0x7b8),local_20);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x860) + 0x4e8);
      (**(code **)(*plVar1 + 0xd8))(plVar1,local_20[0]);
      FUN_00c0dad0(*(undefined8 *)(param_1 + 0x860),1);
      FUN_019953b0(*(undefined8 *)(param_1 + 0x8b0));
      FUN_0064de00(*(undefined8 *)(param_1 + 0x828),0);
      (**(code **)(**(longlong **)(param_1 + 0x838) + 0x278))(*(longlong **)(param_1 + 0x838));
    }
  }
  FUN_00414480(local_20);
  return;
}

