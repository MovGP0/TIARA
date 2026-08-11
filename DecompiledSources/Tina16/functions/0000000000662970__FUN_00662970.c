/* Ghidra address: 00662970 */
/* Ghidra symbol: FUN_00662970 */


void FUN_00662970(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  undefined1 local_3c [16];
  int local_2c;
  longlong local_28;
  undefined8 local_20;
  
  local_50 = auStack_78;
  local_20 = FUN_005fe0d0(&PTR_FUN_006385a0,1);
  FUN_0064b200(local_20,param_1[5]);
  FUN_005fdf10(local_20);
  FUN_005ffb10(local_20,param_2);
  iVar1 = FUN_00654c00();
  local_2c = 0;
  if (-1 < iVar1 + -1) {
    do {
      local_28 = FUN_00654bc0(param_1[5],local_2c);
      if ((*(char *)(local_28 + 0xa9) != '\0') && (*(longlong *)(local_28 + 0x108) == param_1[5])) {
        FUN_0064d000(local_28,local_3c);
        (**(code **)*param_1)(param_1,local_28,local_3c);
        (**(code **)(*param_1 + 8))(param_1,local_28,local_3c);
        (**(code **)(*param_1 + 0x40))(param_1,local_20,local_28,local_3c);
      }
      local_2c = local_2c + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_005ffb10(local_20,0);
  FUN_005fe090(local_20);
  FUN_00410f20(local_20);
  return;
}

