/* Ghidra address: 00cbafb0 */
/* Ghidra symbol: FUN_00cbafb0 */


void FUN_00cbafb0(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28;
  undefined8 local_20 [2];
  
  local_38 = 0;
  local_20[0] = 0;
  iVar3 = FUN_00416db0(param_1[3],param_2);
  if (iVar3 != 0) {
    cVar2 = (**(code **)(*param_1 + 0x50))(param_1,param_2);
    if (cVar2 == '\0') {
      FUN_0041ddd0(local_20,PTR_PTR_02004610);
      local_28 = 0x11;
      local_30 = param_2;
      uVar4 = FUN_0044d530(&PTR_FUN_0086d2e8,1,local_20[0],&local_30,0);
      FUN_004134c0(uVar4);
    }
    plVar1 = (longlong *)param_1[1];
    if (plVar1 != (longlong *)0x0) {
      lVar5 = (**(code **)(*plVar1 + 0x58))(plVar1,param_2,0);
      if (lVar5 != 0) {
        FUN_0041ddd0(&local_38,PTR_PTR_02004b70);
        local_28 = 0x11;
        local_30 = param_2;
        uVar4 = FUN_0044d530(&PTR_FUN_0086d2e8,1,local_38,&local_30,0);
        FUN_004134c0(uVar4);
      }
    }
    (**(code **)(*param_1 + 0x68))(param_1);
    FUN_00414ad0(param_1 + 3,param_2);
  }
  FUN_00414480(&local_38);
  FUN_00414480(local_20);
  return;
}

