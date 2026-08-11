/* Ghidra address: 00ce52f0 */
/* Ghidra symbol: FUN_00ce52f0 */


void FUN_00ce52f0(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  longlong *local_38;
  undefined8 local_30;
  undefined1 *local_20 [2];
  
  local_20[0] = (undefined1 *)0x0;
  local_38 = param_1;
  local_30 = param_3;
  FUN_00ce50c0(auStack_68);
  FUN_0086e910(&LAB_0086e608,param_2,0xfffffffffffffffe,1);
  FUN_00419260(local_20,&DAT_0086e978,1,2);
  *local_20[0] = 0x78;
  local_20[0][1] = 0x9c;
  local_48 = 0;
  FUN_0086e8c0(&LAB_0086e608,param_2,local_20[0],2);
  FUN_0086e910(&LAB_0086e608,param_2,0xfffffffffffffffe,1);
  lVar1 = (**(code **)*param_2)(param_2);
  FUN_004b6e40(param_2,lVar1 + -8);
  (**(code **)(*local_38 + 0xa0))(local_38,param_2,local_30);
  FUN_00419430(local_20,&DAT_0086e978);
  return;
}

