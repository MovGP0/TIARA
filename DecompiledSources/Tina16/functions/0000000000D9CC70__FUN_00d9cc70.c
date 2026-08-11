/* Ghidra address: 00d9cc70 */
/* Ghidra symbol: FUN_00d9cc70 */


ulonglong FUN_00d9cc70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 *param_6,undefined1 param_7,undefined4 param_8,
                      longlong param_9)

{
  undefined8 unaff_RBX;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_38 = *param_6;
  uStack_30 = param_6[1];
  if (param_9 == 0) {
    FUN_00777d60(param_3,&local_38,param_7,param_8);
  }
  else {
    FUN_00777d60(param_3,param_9,param_7,param_8);
  }
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1) & 0xffffffff;
}

