/* Ghidra address: 00cd8790 */
/* Ghidra symbol: FUN_00cd8790 */


void FUN_00cd8790(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  int local_1c;
  
  local_30 = auStack_68;
  local_38 = 0;
  local_40 = 0;
  FUN_004b3260(param_1);
  iVar1 = (**(code **)(*param_2 + 0x28))();
  local_1c = 0;
  if (-1 < iVar1 + -1) {
    do {
      FUN_004b3cf0(param_2,&local_38,local_1c);
      FUN_00879940(&local_40,param_2,local_1c);
      FUN_00cd8890(param_1,local_38,local_40);
      local_1c = local_1c + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_004b3390(param_1);
  FUN_00414560(&local_40,2);
  return;
}

