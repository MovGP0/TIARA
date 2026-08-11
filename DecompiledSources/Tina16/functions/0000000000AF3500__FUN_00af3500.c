/* Ghidra address: 00af3500 */
/* Ghidra symbol: FUN_00af3500 */


undefined8 FUN_00af3500(longlong *param_1,undefined4 param_2,int param_3,undefined8 param_4)

{
  char cVar1;
  undefined1 local_48 [16];
  undefined4 local_38;
  int local_34;
  undefined1 local_30 [4];
  undefined1 local_2c [4];
  
  (**(code **)(*param_1 + 0xe0))(param_1,local_48);
  local_38 = param_2;
  local_34 = param_3;
  cVar1 = FUN_004231e0(local_48,&local_38);
  if ((cVar1 != '\0') &&
     (cVar1 = FUN_00ac3920(param_1[0x116],param_2,param_3 + *(int *)(param_1[0x116] + 0x94),param_4,
                           local_2c,local_30), cVar1 != '\0')) {
    return 1;
  }
  return 0;
}

