/* Ghidra address: 0184d9d0 */
/* Ghidra symbol: FUN_0184d9d0 */


void FUN_0184d9d0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  local_20 = 0;
  local_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_00410ae0(*param_3,&local_20);
  FUN_00468700(&local_38,param_3);
  pcVar1 = (code *)FUN_00411550(param_1,0xffe6);
  (*pcVar1)(param_1,param_2,local_20,&local_38);
  FUN_00460ba0(&local_38);
  FUN_00414480(&local_20);
  return;
}

