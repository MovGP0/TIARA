/* Ghidra address: 01bd85c0 */
/* Ghidra symbol: FUN_01bd85c0 */


void FUN_01bd85c0(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined8 local_48 [3];
  undefined8 local_30;
  
  if (param_1[0x93] != 0) {
    FUN_004d2d90(param_1[0x93],param_1);
  }
  param_1[0x93] = param_2;
  if (param_2 != 0) {
    FUN_004d26c0(param_2,param_1);
    plVar2 = (longlong *)param_1[0x93];
    if (plVar2[0xf] == 0) {
      FUN_0064d000(plVar2,local_48);
      local_30 = local_48[0];
    }
    else {
      (**(code **)(*plVar2 + 0xe0))(plVar2,local_48);
      local_30 = FUN_0064d1f0(plVar2,local_48);
    }
    FUN_0064e6f0(param_1);
    if ((char)param_1[0x95] == '\0') {
      iVar1 = *(int *)(param_1[0x93] + 0x9c);
      if (iVar1 < 5) {
        return;
      }
      (**(code **)(*param_1 + 400))
                (param_1,(int)local_30 + *(int *)(param_1[0x93] + 0x98),local_30._4_4_ + 4,4,
                 iVar1 + -4);
    }
    else if ((char)param_1[0x95] == '\x01') {
      iVar1 = *(int *)(param_1[0x93] + 0x98);
      if (iVar1 < 5) {
        return;
      }
      (**(code **)(*param_1 + 400))
                (param_1,(int)local_30 + 4,local_30._4_4_ + *(int *)(param_1[0x93] + 0x9c),iVar1,4);
    }
    FUN_0064e700(param_1);
  }
  return;
}

