/* Ghidra address: 00b9daa0 */
/* Ghidra symbol: FUN_00b9daa0 */


void FUN_00b9daa0(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                 undefined1 param_5,longlong *param_6)

{
  int iVar1;
  int iVar2;
  longlong *local_res10 [3];
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  local_res10[0] = param_2;
  FUN_0041b910(param_2);
  FUN_0041b910(param_6);
  (**(code **)(*param_6 + 0x58))(param_6);
  iVar1 = (**(code **)(*local_res10[0] + 0x18))();
  iVar2 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(*local_res10[0] + 0x20))(local_res10[0],local_30,iVar2);
      FUN_00b9d7d0(param_1,local_30[0],param_3,param_4,param_5,param_6);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_0041b800(local_30);
  FUN_0041b800(local_res10);
  FUN_0041b800(&param_6);
  return;
}

