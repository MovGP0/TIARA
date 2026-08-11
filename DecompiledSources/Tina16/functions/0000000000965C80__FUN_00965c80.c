/* Ghidra address: 00965c80 */
/* Ghidra symbol: FUN_00965c80 */


void FUN_00965c80(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined1 param_6)

{
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined4 local_70;
  wchar_t *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 *local_30;
  undefined8 local_20;
  longlong local_18;
  undefined8 local_10;
  
  local_30 = auStack_98;
  local_78 = param_5;
  local_70 = *(undefined4 *)(param_1 + 0x10);
  local_68 = L"UTF-16LE";
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_10 = FUN_0095fe20(&PTR_FUN_00914aa8,1,param_2,param_4);
  FUN_00965ed0(param_1,local_10,param_3,param_6);
  local_18 = *(longlong *)(param_1 + 0x18);
  local_20 = local_10;
  FUN_0059ba60(local_18 + 8,&local_20);
  return;
}

