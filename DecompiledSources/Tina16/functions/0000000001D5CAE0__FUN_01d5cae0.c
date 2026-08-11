/* Ghidra address: 01d5cae0 */
/* Ghidra symbol: FUN_01d5cae0 */


void FUN_01d5cae0(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  double dVar3;
  ulonglong in_stack_fffffffffffffdf0;
  undefined1 local_1e8 [40];
  undefined8 local_1c0;
  char local_1b1;
  undefined8 local_1b0;
  undefined1 local_1a8 [328];
  double local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined1 local_37;
  undefined1 local_36;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_1c0 = 0;
  if (*(char *)(param_2 + 0x339) == '\0') {
    local_36 = 0;
  }
  else {
    local_36 = FUN_016eacf0(param_1,0xb,6);
  }
  FUN_016ea450(local_1e8,param_1,2);
  FUN_004169a0(&local_1c0,local_1e8);
  uVar2 = FUN_016ebdc0(param_1);
  local_20 = FUN_01b08260(param_2,uVar2,local_1c0,&DAT_01ffebd0,1,
                          in_stack_fffffffffffffdf0 & 0xffffffffffffff00);
  local_28 = FUN_016eb0a0(param_1,3);
  uVar2 = FUN_00b90650(0x3ff0000000000000,local_28);
  local_28 = FUN_00b90620(0,uVar2);
  local_30 = FUN_016ea920(param_1,4,5,&local_1b1);
  if (local_1b1 == '\x01') {
    local_30 = 0x3fb999999999999a;
  }
  else if (local_1b1 == '\x02') {
    local_30 = 0x3f847ae147ae147b;
  }
  else if (local_1b1 == '\x03') {
    local_30 = 0x3f1a36e2eb1c432d;
  }
  else if (local_1b1 == '\x04') {
    local_30 = 0x3e45798ee2308c3a;
  }
  uVar2 = FUN_00b90650(0x3ff0000000000000,local_30);
  local_30 = FUN_00b90620(0,uVar2);
  cVar1 = FUN_016eacf0(param_1,5,2);
  local_60 = (double)FUN_016eb0a0(param_1,6);
  local_60 = local_60 + 273.15;
  if (cVar1 == '\0') {
    dVar3 = (double)FUN_016ed770(param_2);
    local_60 = local_60 + dVar3;
  }
  local_58 = FUN_016eb0a0(param_1,7);
  cVar1 = FUN_016eacf0(param_1,8,2);
  local_50 = cVar1 != '\0';
  local_48 = FUN_016ea920(param_1,9,2,&local_38);
  local_40 = FUN_016ea920(param_1,10,2,&local_37);
  FUN_016ebb00(param_1,1,local_1a8,0x148);
  FUN_016ee260(param_1,&local_1b0,0x2d0,0);
  cVar1 = FUN_016e9de0(param_1,3);
  if (cVar1 == '\0') {
    FUN_01d5c710(param_1,param_2,1,0xff,2,&local_60,local_1a8,local_1b0);
  }
  else {
    FUN_01d5c710(param_1,param_2,1,2,3,&local_60,local_1a8,local_1b0);
  }
  FUN_016e9f40(param_1,FUN_01d5ca90);
  FUN_016e9f60(param_1,FUN_01d5c520);
  FUN_016e9fb0(param_1,FUN_01d5c540);
  FUN_00414480(&local_1c0);
  return;
}

