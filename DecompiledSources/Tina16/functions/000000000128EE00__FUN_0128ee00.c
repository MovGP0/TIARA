/* Ghidra address: 0128ee00 */
/* Ghidra symbol: FUN_0128ee00 */


undefined8 *
FUN_0128ee00(undefined8 *param_1,undefined8 param_2,longlong *param_3,undefined1 param_4,
            uint param_5,undefined8 param_6,undefined1 param_7,char param_8,undefined8 param_9,
            undefined1 param_10,undefined8 param_11)

{
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_30 = 0;
  local_20[0] = 0;
  local_28 = 0;
  FUN_00414610(param_6);
  FUN_00414610(param_11);
  (**(code **)(*param_3 + 0x158))
            (param_3,&local_28,&DAT_0128f05c,L"version=\"1.0\" encoding=\"UTF-8\"");
  (**(code **)(*param_3 + 0x98))(param_3,local_20,local_28);
  (**(code **)(*param_3 + 0x148))(param_3,param_1,L"schematic");
  (**(code **)(*param_3 + 0x108))(param_3,*param_1);
  (**(code **)(*(longlong *)*param_1 + 0x108))((longlong *)*param_1,L"language",param_6);
  FUN_0128cde0(&local_30,param_2,param_3,*param_1,param_9,param_4,param_5,param_6,param_7,param_10,
               param_11);
  if (param_8 != '\0') {
    FUN_01268900(param_2,param_3,param_9,(param_5 & 4) == 0,param_6);
  }
  FUN_0041b800(&local_30);
  FUN_0041b800(&local_28);
  FUN_0041b800(local_20);
  FUN_00414480(&param_6);
  FUN_00414480(&param_11);
  return param_1;
}

