/* Ghidra address: 00f01a90 */
/* Ghidra symbol: FUN_00f01a90 */


void FUN_00f01a90(longlong param_1,undefined2 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 local_50 [16];
  undefined8 local_40;
  int local_34;
  undefined8 local_30;
  
  if ((*(char *)(param_1 + 0x532) != '\0') &&
     (FUN_00f01ef0(param_1,param_3,param_4), *(char *)(param_1 + 0x531) != '\0')) {
    local_40 = FUN_00498310(param_3,param_4);
    local_40 = FUN_0064d1f0(param_1,&local_40);
    local_30 = FUN_0064d3a0(*(undefined8 *)(param_1 + 0x528),&local_40);
    (**(code **)(**(longlong **)(param_1 + 0x528) + 0xe0))(*(longlong **)(param_1 + 0x528),local_50)
    ;
    iVar1 = thunk_FUN_03f16006(local_50,local_30);
    if (iVar1 != 0) {
      FUN_00f01eb0(param_1);
      local_34 = FUN_0042a2f0(&local_30);
      uVar2 = FUN_0065b870(*(undefined8 *)(param_1 + 0x528));
      thunk_FUN_041b2403(uVar2,0x201,0,(longlong)local_34);
      return;
    }
  }
  FUN_00650d70(param_1,param_2,param_3,param_4);
  return;
}

