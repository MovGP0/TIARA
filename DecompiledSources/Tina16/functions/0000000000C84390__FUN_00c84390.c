/* Ghidra address: 00c84390 */
/* Ghidra symbol: FUN_00c84390 */


undefined8
FUN_00c84390(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined4 *param_5)

{
  undefined4 uVar1;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  longlong *local_30;
  longlong *local_28;
  longlong *local_20 [2];
  
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_68 = 0;
  local_70 = 0;
  local_60 = 0;
  local_50 = 0;
  local_58 = 0;
  local_40[0] = 0;
  local_48 = 0;
  local_20[0] = (longlong *)0x0;
  local_28 = (longlong *)0x0;
  local_30 = (longlong *)0x0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  FUN_00414610(local_res20);
  FUN_00414520(param_2);
  FUN_00c83600(param_1,local_20,&local_res18);
  if (local_20[0] == (longlong *)0x0) goto code_r0x00c84691;
  FUN_00416cd0(&local_48,3,L"/compregy_language_file/group[@id=\"",local_res18,&DAT_00c84828);
  (**(code **)(*local_20[0] + 0xd8))(local_20[0],local_40,local_48);
  FUN_0041b890(&local_28,local_40[0],&DAT_00c8482e);
  if (local_28 == (longlong *)0x0) goto code_r0x00c84691;
  FUN_00416cd0(&local_58,3,L"/compregy_language_file/lang[@id=\"",local_res20,&DAT_00c84828);
  (**(code **)(*local_20[0] + 0xd8))(local_20[0],&local_50,local_58);
  FUN_0041b890(&local_30,local_50,&DAT_00c8482e);
  if (local_30 == (longlong *)0x0) {
    *param_5 = 0x4e4;
  }
  else {
    (**(code **)(*local_30 + 0x100))(local_30,&local_60,&PTR_DAT_00c848a0);
    uVar1 = FUN_0043fc50(local_60,0x4e4);
    *param_5 = uVar1;
  }
  FUN_00416cd0(&local_70,3,L"lang[@id=\"",local_res20,&DAT_00c84828);
  (**(code **)(*local_28 + 0xd8))(local_28,&local_68,local_70);
  FUN_0041b890(&local_30,local_68,&DAT_00c8482e);
  if (local_30 == (longlong *)0x0) {
LAB_00c84622:
    (**(code **)(*local_28 + 0xd8))(local_28,&local_80,L"native");
    FUN_0041b890(&local_30,local_80,&DAT_00c8482e);
    *param_5 = 0x4e4;
  }
  else {
    (**(code **)(*local_30 + 0xb8))(local_30,&local_78);
    if (local_78 == 0) goto LAB_00c84622;
  }
  (**(code **)(*local_30 + 0xb8))(local_30,&local_88);
  FUN_004168e0(param_2,local_88);
code_r0x00c84691:
  FUN_00414480(&local_88);
  FUN_0041b800(&local_80);
  FUN_00414560(&local_78,2);
  FUN_0041b800(&local_68);
  FUN_00414560(&local_60,2);
  FUN_0041b800(&local_50);
  FUN_00414480(&local_48);
  FUN_0041b800(local_40);
  FUN_00417840(&local_30,&LAB_00b9fca0,3);
  FUN_00414560(&local_res18,2);
  return param_2;
}

