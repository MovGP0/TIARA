/* Ghidra address: 00892630 */
/* Ghidra symbol: FUN_00892630 */


void FUN_00892630(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5,char param_6)

{
  char cVar1;
  undefined1 local_44 [16];
  undefined4 local_34;
  undefined1 local_30 [4];
  undefined1 local_2c [4];
  
  if (param_6 == '\0') {
    cVar1 = FUN_0089d240(param_1,param_3);
    if (cVar1 != '\0') {
      FUN_00891ef0(param_1,param_3,local_30,0);
      FUN_00891ef0(param_1,param_4,local_2c,0);
      (**(code **)(*param_1 + 0x178))(param_1,param_2,0,param_5,local_30,8);
    }
  }
  else if (param_6 == '\x01') {
    cVar1 = FUN_0089d330(param_1,param_3);
    if (cVar1 != '\0') {
      FUN_00891ef0(param_1,param_3,local_44,1);
      local_34 = 0;
      (**(code **)(*param_1 + 0x178))(param_1,param_2,0x29,param_5,local_44,0x14);
    }
  }
  else {
    FUN_0089bf30(param_1);
  }
  return;
}

