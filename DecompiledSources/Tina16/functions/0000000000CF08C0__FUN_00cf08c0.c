/* Ghidra address: 00cf08c0 */
/* Ghidra symbol: FUN_00cf08c0 */


longlong FUN_00cf08c0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  longlong local_28;
  longlong local_20;
  undefined8 local_18;
  
  local_30 = auStack_68;
  local_40 = 0;
  local_38 = 0;
  local_18 = FUN_00874b00(&PTR_FUN_0086eb08,1,param_3);
  local_28 = FUN_00cf1490(*(undefined8 *)(param_1 + 0x48));
  FUN_00414ad0(local_28 + 0x38,param_2);
  FUN_00441920(&local_38,param_3);
  FUN_00414ad0(local_28 + 0x18,local_38);
  *(undefined8 *)(local_28 + 0x40) = local_18;
  *(undefined1 *)(local_28 + 0x50) = 1;
  if (param_4 == 0) {
    FUN_008a0460(&local_40,param_3);
    FUN_00414ad0(local_28 + 0x28,local_40);
  }
  else {
    FUN_00cf25f0(local_28,param_4);
  }
  FUN_00414ad0(local_28 + 0x30,L"binary");
  local_20 = local_28;
  FUN_00414560(&local_40,2);
  return local_20;
}

