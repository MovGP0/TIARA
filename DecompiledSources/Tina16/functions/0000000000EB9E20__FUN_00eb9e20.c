/* Ghidra address: 00eb9e20 */
/* Ghidra symbol: FUN_00eb9e20 */


void FUN_00eb9e20(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  undefined8 local_158;
  undefined8 local_150 [2];
  longlong local_140;
  undefined8 local_138;
  byte local_12e [256];
  short local_2e;
  
  local_150[0] = 0;
  local_158 = 0;
  local_138 = 0;
  local_140 = 0;
  iVar2 = FUN_01d31a40(param_2);
  if (iVar2 == 0) {
    plVar4 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    FUN_01d32800(param_2,local_12e);
    if (local_2e == 1) {
      FUN_01d328d0(param_2,param_1 + 0x18);
    }
    else {
      FUN_01d32990(param_2,param_1 + 0x18);
    }
    while (cVar1 = FUN_01d32af0(param_2,&DAT_00eba16d), cVar1 != '\0') {
      (**(code **)(*plVar4 + 0x90))(plVar4);
      if (local_2e == 1) {
        FUN_01d328d0(param_2,&local_138);
        FUN_01d32a10(param_2,plVar4);
      }
      else {
        FUN_01d32990(param_2,&local_138);
        FUN_01d32a80(param_2,plVar4);
      }
      plVar5 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
      FUN_004b37d0(plVar4,&local_158);
      FUN_00416cd0(local_150,3,local_138,&DAT_00eba15c,local_158);
      (**(code **)(**(longlong **)(param_1 + 0x10) + 0x80))
                (*(longlong **)(param_1 + 0x10),local_150[0],plVar5);
      iVar2 = (**(code **)(*plVar4 + 0x28))();
      iVar6 = 0;
      if (-1 < iVar2 + -1) {
        do {
          (**(code **)(*plVar4 + 0x18))(plVar4,&local_140,iVar6);
          if ((local_140 != 0) &&
             (iVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0xb0))
                                (*(longlong **)(param_1 + 8),local_140), iVar3 == -1)) {
            (**(code **)(**(longlong **)(param_1 + 8) + 0x78))
                      (*(longlong **)(param_1 + 8),local_140);
          }
          iVar6 = iVar6 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      FUN_01d32800(param_2,local_12e);
      while ((iVar2 = FUN_00414f50(local_12e,&DAT_00eba16d,(ulonglong)local_12e[0] + 1), iVar2 != 0
             && (iVar2 = FUN_00414f50(local_12e,&DAT_00eba178,(ulonglong)local_12e[0] + 1),
                iVar2 != 0))) {
        iVar2 = FUN_00414f50(local_12e,&DAT_00eba160,(ulonglong)local_12e[0] + 1);
        if ((iVar2 == 0) ||
           (iVar2 = FUN_00414f50(local_12e,&DAT_00eba165,(ulonglong)local_12e[0] + 1), iVar2 == 0))
        {
          if (local_2e == 1) {
            FUN_01d328d0(param_2,&local_138);
          }
          else {
            FUN_01d32990(param_2,&local_138);
          }
          (**(code **)(*plVar5 + 0x78))(plVar5,local_138);
        }
        FUN_01d32800(param_2,local_12e);
      }
      (**(code **)(*plVar5 + 0x150))(plVar5,FUN_01b1fc70);
      FUN_01d30f70(param_2);
    }
    FUN_00410f20(plVar4);
  }
  FUN_00414560(&local_158,2);
  FUN_00414560(&local_140,2);
  return;
}

