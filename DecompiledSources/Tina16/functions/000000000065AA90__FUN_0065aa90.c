/* Ghidra address: 0065aa90 */
/* Ghidra symbol: FUN_0065aa90 */


void FUN_0065aa90(longlong *param_1,int param_2,int param_3,int param_4,int param_5)

{
  char cVar1;
  int iVar2;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_54 [7];
  undefined8 local_38;
  undefined8 uStack_30;
  
  if ((((param_2 == (int)param_1[0x12]) && (param_3 == *(int *)((longlong)param_1 + 0x94))) &&
      (param_4 == (int)param_1[0x13])) && (param_5 == *(int *)((longlong)param_1 + 0x9c))) {
    return;
  }
  cVar1 = FUN_0065be20(param_1);
  if ((cVar1 == '\0') || (iVar2 = thunk_FUN_03d44949(param_1[0x8d]), iVar2 != 0)) {
    *(int *)(param_1 + 0x12) = param_2;
    *(int *)((longlong)param_1 + 0x94) = param_3;
    *(int *)(param_1 + 0x13) = param_4;
    *(int *)((longlong)param_1 + 0x9c) = param_5;
    cVar1 = FUN_0065be20(param_1);
    if (cVar1 != '\0') {
      local_54[0] = 0x2c;
      thunk_FUN_03f78330(param_1[0x8d],local_54);
      FUN_0064d000(param_1,&local_68);
      local_38 = local_68;
      uStack_30 = uStack_60;
      thunk_FUN_03c9467d(param_1[0x8d],local_54);
    }
  }
  else {
    thunk_FUN_041cc6e2(param_1[0x8d],0,param_2,param_3,param_4,param_5,0x14);
  }
  FUN_0064c920(param_1);
  FUN_00652660(param_1);
  (**(code **)(*param_1 + 0x108))(param_1);
  return;
}

