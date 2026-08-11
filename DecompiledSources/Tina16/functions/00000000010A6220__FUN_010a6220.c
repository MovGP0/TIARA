/* Ghidra address: 010a6220 */
/* Ghidra symbol: FUN_010a6220 */


void FUN_010a6220(longlong param_1)

{
  undefined4 uVar1;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_40 = 0;
  local_38 = 0;
  local_30[0] = 0;
  local_20[0] = 0;
  FUN_00416ba0(local_20,*(undefined8 *)(param_1 + 0x9a8),L"va_debugger_config.txt");
  (**(code **)(**(longlong **)(param_1 + 0x9f0) + 0x90))(*(longlong **)(param_1 + 0x9f0));
  FUN_0043f750(local_30,*(undefined4 *)
                         (*(longlong *)(*(longlong *)(param_1 + 0x1a70) + 0x78) + 0x94));
  (**(code **)(**(longlong **)(param_1 + 0x9f0) + 0x78))
            (*(longlong **)(param_1 + 0x9f0),local_30[0]);
  FUN_01601420(&local_38,*(undefined1 *)(param_1 + 0xa28));
  (**(code **)(**(longlong **)(param_1 + 0x9f0) + 0x78))(*(longlong **)(param_1 + 0x9f0),local_38);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x930) + 0x260))(*(longlong **)(param_1 + 0x930));
  FUN_01601420(&local_40,uVar1);
  (**(code **)(**(longlong **)(param_1 + 0x9f0) + 0x78))(*(longlong **)(param_1 + 0x9f0),local_40);
  (**(code **)(**(longlong **)(param_1 + 0x9f0) + 0x100))
            (*(longlong **)(param_1 + 0x9f0),local_20[0]);
  FUN_00414560(&local_40,3);
  FUN_00414480(local_20);
  return;
}

