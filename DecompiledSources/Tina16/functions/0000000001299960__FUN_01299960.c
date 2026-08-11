/* Ghidra address: 01299960 */
/* Ghidra symbol: FUN_01299960 */


undefined8 *
FUN_01299960(undefined8 *param_1,longlong *param_2,undefined8 param_3,char param_4,
            undefined8 param_5,longlong *param_6,longlong *param_7)

{
  char cVar1;
  int iVar2;
  longlong *local_res10;
  undefined8 local_res18;
  char local_res20;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  longlong *local_68;
  undefined1 *local_60;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  int local_2c;
  undefined8 local_28;
  undefined8 local_20;
  
  local_60 = auStack_98;
  local_70 = 0;
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_20 = 0;
  local_28 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_0041b910(param_2);
  FUN_00414610(local_res18);
  cVar1 = (**(code **)(*local_res10 + 0xa0))(local_res10);
  if (cVar1 != '\0') {
    (**(code **)(*local_res10 + 0x20))(local_res10,&local_68);
    (**(code **)(*local_68 + 0x58))(local_68);
  }
  (**(code **)(*local_res10 + 0x148))(local_res10,&local_70,L"schematic");
  (**(code **)(*local_res10 + 0x108))(local_res10,local_70);
  (**(code **)(*local_res10 + 0x100))(local_res10,param_1);
  (**(code **)(*(longlong *)*param_1 + 0x108))((longlong *)*param_1,L"language",local_res18);
  FUN_00414480(&local_20);
  if (local_res20 == '\0') {
    FUN_00414b50(&local_20,&DAT_01299d78);
  }
  else {
    FUN_00414b50(&local_20,&DAT_01299d68);
  }
  (**(code **)(*(longlong *)*param_1 + 0x108))((longlong *)*param_1,L"interactive",local_20);
  FUN_00414480(&local_20);
  FUN_00414480(&local_28);
  if (local_res20 == '\0') {
    FUN_00414b50(&local_28,&DAT_01299d78);
  }
  else {
    FUN_00414b50(&local_28,&DAT_01299d68);
  }
  (**(code **)(*(longlong *)*param_1 + 0x108))((longlong *)*param_1,L"updatesmallinstr",local_28);
  FUN_00414480(&local_28);
  if (param_6 != (longlong *)0x0) {
    iVar2 = (**(code **)(*param_6 + 0x28))();
    local_2c = 0;
    if (-1 < iVar2 + -1) {
      do {
        (**(code **)(*param_6 + 0x18))(param_6,&local_40,local_2c);
        (**(code **)(*param_7 + 0x18))(param_7,&local_48,local_2c);
        (**(code **)(*(longlong *)*param_1 + 0x108))((longlong *)*param_1,local_40,local_48);
        local_2c = local_2c + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  FUN_0041b800(&local_70);
  FUN_0041b800(&local_68);
  FUN_00414560(&local_48,3);
  FUN_00414560(&local_28,2);
  FUN_0041b800(&local_res10);
  FUN_00414480(&local_res18);
  return param_1;
}

