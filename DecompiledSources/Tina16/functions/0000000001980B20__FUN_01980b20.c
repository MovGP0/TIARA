/* Ghidra address: 01980b20 */
/* Ghidra symbol: FUN_01980b20 */


void FUN_01980b20(longlong param_1)

{
  int iVar1;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong *local_20 [2];
  
  local_30 = auStack_58;
  local_20[0] = (longlong *)0x0;
  if (*(char *)(param_1 + 0x10) == '\0') {
    *(undefined1 *)(param_1 + 0x10) = 1;
    local_30 = auStack_58;
    while( true ) {
      iVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))(*(longlong **)(param_1 + 8));
      if (iVar1 < 1) break;
      (**(code **)(**(longlong **)(param_1 + 8) + 0x30))(*(longlong **)(param_1 + 8),0);
      FUN_0041b840(local_20);
      (**(code **)(**(longlong **)(param_1 + 8) + 0x98))(*(longlong **)(param_1 + 8));
      (**(code **)(*local_20[0] + 0x18))(local_20[0]);
      (**(code **)(*local_20[0] + 0x10))(local_20[0]);
    }
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  FUN_0041b800(local_20);
  return;
}

