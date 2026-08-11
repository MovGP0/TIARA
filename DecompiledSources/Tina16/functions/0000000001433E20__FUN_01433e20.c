/* Ghidra address: 01433e20 */
/* Ghidra symbol: FUN_01433e20 */


void FUN_01433e20(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  undefined4 local_c;
  
  local_40 = 0;
  local_48 = 0;
  local_20[0] = 0;
  local_28 = 0;
  cVar1 = FUN_0142f9d0(param_2,&local_c);
  if (cVar1 == '\0') {
    uVar2 = FUN_00b89270();
    FUN_00b8e520(uVar2,&local_28,0x133);
    local_30 = 0x11;
    local_38 = param_2;
    FUN_00442f70(local_20,local_28,&local_38,0);
    uVar2 = FUN_0044d490(&PTR_FUN_00b8e8e8,1,local_20[0]);
    FUN_004134c0(uVar2);
  }
  cVar1 = FUN_01433dd0(param_1,local_c);
  if (cVar1 == '\0') {
    uVar2 = FUN_00b89270();
    FUN_00b8e520(uVar2,&local_48,0x132);
    local_30 = 0x11;
    local_38 = param_2;
    FUN_00442f70(&local_40,local_48,&local_38,0);
    uVar2 = FUN_0044d490(&PTR_FUN_004355d0,1,local_40);
    FUN_004134c0(uVar2);
  }
  FUN_00414ad0(*(undefined8 *)(param_1 + 0x10),param_2);
  FUN_00414560(&local_48,2);
  FUN_00414560(&local_28,2);
  return;
}

