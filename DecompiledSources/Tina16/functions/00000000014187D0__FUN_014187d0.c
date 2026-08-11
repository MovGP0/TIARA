/* Ghidra address: 014187d0 */
/* Ghidra symbol: FUN_014187d0 */


void FUN_014187d0(longlong param_1)

{
  char cVar1;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  FUN_01417f80(param_1,1);
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0xa8))(*(longlong **)(param_1 + 0x6e8));
  if (cVar1 != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x748) + 0x90))(*(longlong **)(param_1 + 0x748));
    FUN_01419960(param_1);
    if (*(int *)(param_1 + 0xf88) != *(int *)(param_1 + 0xf8c)) {
      (**(code **)(**(longlong **)(param_1 + 0x740) + 0x90))(*(longlong **)(param_1 + 0x740));
      (**(code **)(**(longlong **)(param_1 + 0x750) + 0x90))(*(longlong **)(param_1 + 0x750));
      FUN_00414480(param_1 + 0xf90);
      FUN_00414480(param_1 + 0xf98);
      *(undefined4 *)(param_1 + 0xf88) = *(undefined4 *)(param_1 + 0xf8c);
    }
    FUN_00724270(*(undefined8 *)(param_1 + 0x6e8),local_20);
    FUN_00414ad0(param_1 + 0xf90,local_20[0]);
    (**(code **)(**(longlong **)(param_1 + 0x748) + 0xd8))
              (*(longlong **)(param_1 + 0x748),*(undefined8 *)(param_1 + 0xf90));
  }
  FUN_00414480(local_20);
  return;
}

