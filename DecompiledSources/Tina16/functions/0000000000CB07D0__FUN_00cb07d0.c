/* Ghidra address: 00cb07d0 */
/* Ghidra symbol: FUN_00cb07d0 */


void FUN_00cb07d0(longlong *param_1,longlong *param_2,char param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined8 local_res20;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_38 = 0;
  local_30[0] = 0;
  local_res20 = param_4;
  FUN_0041b910(param_4);
  FUN_00875240(local_30,local_res20,param_1[0x2a],3);
  FUN_0041b840(&local_res20,local_30[0]);
  iVar1 = (**(code **)(*param_2 + 0x28))();
  iVar2 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(*param_2 + 0x18))(param_2,&local_38,iVar2);
      (**(code **)(*param_1 + 0x158))(param_1,local_38,local_res20);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  if (param_3 != '\0') {
    (**(code **)(*param_1 + 0x150))(param_1,&LAB_00cb0930,local_res20);
  }
  FUN_00414480(&local_38);
  FUN_0041b800(local_30);
  FUN_0041b800(&local_res20);
  return;
}

