/* Ghidra address: 01814490 */
/* Ghidra symbol: FUN_01814490 */


longlong * FUN_01814490(longlong param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  char cVar1;
  longlong lVar2;
  undefined8 local_res18;
  char local_res20;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined1 *local_40;
  undefined8 local_30;
  int local_24;
  longlong *local_20;
  
  local_40 = auStack_68;
  local_48 = 0;
  local_30 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  FUN_004a0d20(&PTR_FUN_0063d930);
  *(undefined8 *)(param_1 + 0x18) = param_2;
  FUN_0043ea00(&local_48,local_res18);
  if (local_48 == 0) {
    local_20 = (longlong *)0x0;
  }
  else {
    local_24 = FUN_004170c0(&LAB_01814700,local_res18,1);
    FUN_00416dc0(&local_30,local_res18,local_24 + 1,0x7fffffff);
    FUN_00416e20(&local_res18,local_24,0x7fffffff);
    lVar2 = FUN_004a0a10(local_res18);
    local_20 = (longlong *)(**(code **)(lVar2 + -0x30))(lVar2);
    (**(code **)(*local_20 + 0x78))(local_20,0xff,param_2);
    (**(code **)**(undefined8 **)(param_1 + 0x20))(*(undefined8 **)(param_1 + 0x20),param_2);
    FUN_004bdfc0(*(undefined8 *)(param_1 + 0x20));
    *(undefined1 *)(local_20 + 0x18) = 1;
    FUN_018113d0(param_1,local_30,local_20);
    if (local_res20 == '\0') {
      FUN_01811220(param_1);
    }
    else {
      FUN_004be2c0(*(undefined8 *)(param_1 + 0x20));
      FUN_01811140(param_1);
    }
    *(undefined1 *)(local_20 + 0x18) = 0;
    cVar1 = FUN_004113d0(local_20,&PTR_FUN_0193aeb8);
    if (cVar1 == '\0') {
      (**(code **)(*local_20 + 0x20))(local_20);
    }
  }
  FUN_00414480(&local_48);
  FUN_00414480(&local_30);
  FUN_00414480(&local_res18);
  return local_20;
}

