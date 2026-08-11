/* Ghidra address: 00557c30 */
/* Ghidra symbol: FUN_00557c30 */


undefined8
FUN_00557c30(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined4 param_5)

{
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  local_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  FUN_00536640(&local_38,param_3);
  (**(code **)(*param_1 + 0x68))(param_1,param_2,&local_38,param_4,param_5);
  FUN_00417740(&local_38,&DAT_00527bf8);
  return param_2;
}

