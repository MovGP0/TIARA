/* Ghidra address: 01d16380 */
/* Ghidra symbol: FUN_01d16380 */


void FUN_01d16380(longlong param_1,longlong *param_2,undefined4 param_3,int param_4,
                 undefined4 param_5,int param_6)

{
  longlong *plVar1;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong *local_30 [2];
  longlong *local_20 [2];
  
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30[0] = (longlong *)0x0;
  local_20[0] = (longlong *)0x0;
  if ((*(char *)(*(longlong *)(param_1 + 0x120) + 0x78) == '\x01') &&
     (*(longlong *)(*(longlong *)(param_1 + 0x120) + 0xa8) != 0)) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x120) + 0xa8);
    (**(code **)(*plVar1 + 0x58))(plVar1,local_30);
    (**(code **)(*local_30[0] + 0x148))(local_30[0],local_20,L"line");
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x120) + 0xa8);
    (**(code **)(*plVar1 + 0x98))(plVar1,&local_38,local_20[0]);
    FUN_0043f750(&local_40,param_3);
    (**(code **)(*local_20[0] + 0x108))(local_20[0],&DAT_01d16640,local_40);
    FUN_0043f750(&local_48,param_4 + -2);
    (**(code **)(*local_20[0] + 0x108))(local_20[0],&DAT_01d16654,local_48);
    FUN_0043f750(&local_50,param_5);
    (**(code **)(*local_20[0] + 0x108))(local_20[0],&DAT_01d16668,local_50);
    FUN_0043f750(&local_58,param_6 + -2);
    (**(code **)(*local_20[0] + 0x108))(local_20[0],&DAT_01d1667c,local_58);
    FUN_0043f750(&local_60,*(undefined4 *)(*(longlong *)(param_2[0xf] + 0x18) + 0x2c));
    (**(code **)(*local_20[0] + 0x108))(local_20[0],L"stroke-width",local_60);
    (**(code **)(*local_20[0] + 0x108))(local_20[0],L"stroke",L"black");
  }
  else {
    (**(code **)(*param_2 + 200))(param_2,param_3,param_4);
    (**(code **)(*param_2 + 0xc0))(param_2,param_5,param_6);
  }
  FUN_00414560(&local_60,5);
  FUN_0041b800(&local_38);
  FUN_0041b800(local_30);
  FUN_0041b800(local_20);
  return;
}

