/* Ghidra address: 00ce3e00 */
/* Ghidra symbol: FUN_00ce3e00 */


void FUN_00ce3e00(longlong param_1)

{
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20[0] = 0;
  FUN_00ce0fa0(param_1);
  FUN_00cd9270(*(undefined8 *)(param_1 + 0x18),local_20,L"Location");
  FUN_00414ad0(param_1 + 0xd0,local_20[0]);
  FUN_00cd9270(*(undefined8 *)(param_1 + 0x18),&local_28,L"Server");
  FUN_00414ad0(param_1 + 0xd8,local_28);
  FUN_00cd9270(*(undefined8 *)(param_1 + 0x18),&local_30,L"Proxy-Connection");
  FUN_00414ad0(param_1 + 0xe0,local_30);
  (**(code **)(**(longlong **)(param_1 + 0xf0) + 0x90))(*(longlong **)(param_1 + 0xf0));
  FUN_00cd8d80(*(undefined8 *)(param_1 + 0x18),L"WWW-Authenticate",*(undefined8 *)(param_1 + 0xf0));
  (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x90))(*(longlong **)(param_1 + 0xe8));
  FUN_00cd8d80(*(undefined8 *)(param_1 + 0x18),L"Proxy-Authenticate",*(undefined8 *)(param_1 + 0xe8)
              );
  FUN_00cd9270(*(undefined8 *)(param_1 + 0x18),&local_38,L"Accept-Patch");
  FUN_00414ad0(param_1 + 0xc0,local_38);
  FUN_00cd9270(*(undefined8 *)(param_1 + 0x18),&local_40,L"Accept-Ranges");
  FUN_00414ad0(param_1 + 200,local_40);
  FUN_00414560(&local_40,5);
  return;
}

