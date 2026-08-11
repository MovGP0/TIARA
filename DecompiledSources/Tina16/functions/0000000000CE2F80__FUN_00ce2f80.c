/* Ghidra address: 00ce2f80 */
/* Ghidra symbol: FUN_00ce2f80 */


void FUN_00ce2f80(longlong param_1)

{
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  FUN_00ce0fa0(param_1);
  FUN_00cd9270(*(undefined8 *)(param_1 + 0x18),&local_10,L"Accept");
  FUN_00414ad0(param_1 + 0xc0,local_10);
  FUN_00cd9270(*(undefined8 *)(param_1 + 0x18),&local_18,L"Accept-Charset");
  FUN_00414ad0(param_1 + 200,local_18);
  FUN_00cd9270(*(undefined8 *)(param_1 + 0x18),&local_20,L"Accept-Encoding");
  FUN_00414ad0(param_1 + 0xd0,local_20);
  FUN_00cd9270(*(undefined8 *)(param_1 + 0x18),&local_28,L"Accept-Language");
  FUN_00414ad0(param_1 + 0xd8,local_28);
  FUN_00cd9270(*(undefined8 *)(param_1 + 0x18),&local_30,L"Host");
  FUN_00414ad0(param_1 + 0x110,local_30);
  FUN_00cd9270(*(undefined8 *)(param_1 + 0x18),&local_38,L"From");
  FUN_00414ad0(param_1 + 0xe8,local_38);
  FUN_00cd9270(*(undefined8 *)(param_1 + 0x18),&local_40,L"Referer");
  FUN_00414ad0(param_1 + 0xf8,local_40);
  FUN_00cd9270(*(undefined8 *)(param_1 + 0x18),&local_48,L"User-Agent");
  FUN_00414ad0(param_1 + 0x100,local_48);
  FUN_00cd9270(*(undefined8 *)(param_1 + 0x18),&local_50,L"Range");
  FUN_00ce2b20(*(undefined8 *)(param_1 + 0x120),local_50);
  FUN_00cd9270(*(undefined8 *)(param_1 + 0x18),&local_58,L"X-HTTP-Method-Override");
  FUN_00414ad0(param_1 + 0x138,local_58);
  FUN_00414560(&local_58,10);
  return;
}

