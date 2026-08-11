/* Ghidra address: 00af3590 */
/* Ghidra symbol: FUN_00af3590 */


undefined8
FUN_00af3590(longlong *param_1,undefined4 param_2,int param_3,undefined8 *param_4,
            undefined4 *param_5,undefined4 *param_6)

{
  char cVar1;
  undefined1 local_40 [16];
  undefined4 local_30;
  int local_2c;
  
  *param_4 = 0;
  *param_5 = 0;
  *param_6 = 0;
  (**(code **)(*param_1 + 0xe0))(param_1,local_40);
  local_30 = param_2;
  local_2c = param_3;
  cVar1 = FUN_004231e0(local_40,&local_30);
  if ((cVar1 != '\0') &&
     (cVar1 = FUN_00ac3920(param_1[0x116],param_2,param_3 + *(int *)(param_1[0x116] + 0x94),param_4,
                           param_5,param_6), cVar1 != '\0')) {
    return 1;
  }
  return 0;
}

