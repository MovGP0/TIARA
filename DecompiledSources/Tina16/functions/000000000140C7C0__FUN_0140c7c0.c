/* Ghidra address: 0140c7c0 */
/* Ghidra symbol: FUN_0140c7c0 */


void FUN_0140c7c0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_40 = 0;
  local_48 = 0;
  local_30 = 0;
  local_38 = 0;
  local_20[0] = 0;
  local_28 = 0;
  uVar1 = FUN_00b89270();
  FUN_0041ddd0(&local_28,PTR_PTR_02001840);
  FUN_00b8e650(uVar1,local_20,L"HDLStrings.Msg_EnterHexValue",local_28);
  FUN_00414ad0(*(longlong *)(param_1 + 0x6d8) + 0xf0,local_20[0]);
  uVar1 = FUN_00b89270();
  FUN_0041ddd0(&local_38,PTR_PTR_02001840);
  FUN_00b8e650(uVar1,&local_30,L"HDLStrings.Msg_EnterHexValue",local_38);
  FUN_00414ad0(*(longlong *)(param_1 + 0x6e8) + 0xf0,local_30);
  uVar1 = FUN_00b89270();
  FUN_0041ddd0(&local_48,PTR_PTR_02001840);
  FUN_00b8e650(uVar1,&local_40,L"HDLStrings.Msg_EnterHexValue",local_48);
  FUN_00414ad0(*(longlong *)(param_1 + 0x6f8) + 0xf0,local_40);
  FUN_0064dfb0(*(undefined8 *)(param_1 + 0x6d8),1);
  FUN_0064dfb0(*(undefined8 *)(param_1 + 0x6e8),1);
  FUN_0064dfb0(*(undefined8 *)(param_1 + 0x6f8),1);
  FUN_0074b490(*(undefined8 *)(param_1 + 0x6b0),*(undefined4 *)(param_1 + 0x710));
  FUN_0140c240(param_1);
  FUN_0064cf60(param_1,0x408);
  FUN_00414560(&local_48,6);
  return;
}

