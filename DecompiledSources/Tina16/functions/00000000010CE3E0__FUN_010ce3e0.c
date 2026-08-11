/* Ghidra address: 010ce3e0 */
/* Ghidra symbol: FUN_010ce3e0 */


void FUN_010ce3e0(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,char param_6,undefined8 param_7)

{
  longlong *local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 local_38;
  undefined8 local_30 [2];
  longlong *local_20 [2];
  
  local_38 = 0;
  local_30[0] = 0;
  local_20[0] = (longlong *)0x0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_0041b910(param_2);
  FUN_00414610(local_res18);
  FUN_00414610(local_res20);
  FUN_00414610(param_5);
  FUN_00414610(param_7);
  (**(code **)(**(longlong **)(param_1 + 0x268) + 0x148))
            (*(longlong **)(param_1 + 0x268),local_20,L"parameter");
  (**(code **)(*local_res10 + 0x98))(local_res10,local_30,local_20[0]);
  (**(code **)(*local_20[0] + 0x108))(local_20[0],&DAT_010ce6b0,local_res20);
  (**(code **)(*local_20[0] + 0x108))(local_20[0],L"name",param_5);
  if (param_6 == '\0') {
    (**(code **)(*local_20[0] + 0x108))(local_20[0],L"type",L"string");
  }
  else if (param_6 == '\x01') {
    (**(code **)(*local_20[0] + 0x108))(local_20[0],L"type",L"integer");
  }
  else if (param_6 == '\x02') {
    (**(code **)(*local_20[0] + 0x108))(local_20[0],L"type",L"real");
  }
  else if (param_6 == '\x03') {
    (**(code **)(*local_20[0] + 0x108))(local_20[0],L"type",L"enum");
    (**(code **)(*local_20[0] + 0x108))(local_20[0],L"options",param_7);
  }
  FUN_010ce310(param_1,&local_38,local_res18);
  (**(code **)(*local_20[0] + 0x108))(local_20[0],L"value",local_38);
  FUN_00414480(&local_38);
  FUN_0041b800(local_30);
  FUN_0041b800(local_20);
  FUN_0041b800(&local_res10);
  FUN_00414560(&local_res18,3);
  FUN_00414480(&param_7);
  return;
}

