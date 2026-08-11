/* Ghidra address: 004d3c50 */
/* Ghidra symbol: FUN_004d3c50 */


void FUN_004d3c50(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong local_38;
  undefined1 local_30;
  
  iVar3 = FUN_00416db0(param_1[2],param_2);
  if (iVar3 != 0) {
    if (param_2 != 0) {
      cVar2 = FUN_0043f210(param_2,0);
      if (cVar2 == '\0') {
        local_30 = 0x11;
        local_38 = param_2;
        uVar4 = FUN_0044d8d0(&PTR_FUN_004724d0,1,PTR_PTR_02003498,&local_38,0);
        FUN_004134c0(uVar4);
      }
    }
    plVar1 = (longlong *)param_1[1];
    if (plVar1 == (longlong *)0x0) {
      (**(code **)(*param_1 + 0x60))(param_1,0,param_1[2],param_2);
    }
    else {
      (**(code **)(*plVar1 + 0x60))(plVar1,param_1,param_1[2],param_2);
    }
    FUN_004d43a0(param_1,0);
    FUN_004d3d20(param_1,param_2);
    FUN_004d43a0(param_1,1);
  }
  return;
}

