/* Ghidra address: 00b9d400 */
/* Ghidra symbol: FUN_00b9d400 */


void FUN_00b9d400(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  longlong *local_res10;
  longlong *local_res18;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_0041b910(param_2);
  FUN_0041b910(local_res18);
  iVar1 = (**(code **)(*local_res10 + 0x18))();
  iVar2 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(*local_res10 + 0x20))(local_res10,local_30,iVar2);
      (**(code **)(*local_res18 + 0x30))(local_res18,local_30[0]);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_0041b800(local_30);
  FUN_00417840(&local_res10,&DAT_00b9f960,2);
  return;
}

