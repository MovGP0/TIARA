/* Ghidra address: 00a5d280 */
/* Ghidra symbol: FUN_00a5d280 */


void FUN_00a5d280(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 local_res10 [3];
  undefined8 local_30 [2];
  undefined4 local_1c [3];
  
  local_30[0] = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_1c[0] = 0xffffffff;
  FUN_00416ba0(local_30,&DAT_00a5d364,local_res10[0]);
  cVar1 = (**(code **)(*param_1 + 0x140))(param_1,local_30[0],local_1c);
  if (cVar1 != '\0') {
    lVar2 = (**(code **)(*param_1 + 0x30))(param_1,local_1c[0]);
    FUN_00468530(lVar2 + 0x120,param_3,0xfffffffffffffffc);
  }
  FUN_00414480(local_30);
  FUN_00414480(local_res10);
  return;
}

