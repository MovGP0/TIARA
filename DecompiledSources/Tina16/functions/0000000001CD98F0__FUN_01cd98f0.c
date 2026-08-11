/* Ghidra address: 01cd98f0 */
/* Ghidra symbol: FUN_01cd98f0 */


void FUN_01cd98f0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  
  cVar2 = (**(code **)(*param_1 + 0x58))(param_1);
  if (cVar2 != '\0') {
    plVar5 = (longlong *)FUN_005fd250(&PTR_FUN_005f3290,1);
    (**(code **)(*plVar5 + 0x10))(plVar5,param_2[0xf]);
    if (*(char *)(param_1[0xf] + 0x58) == '\x05') {
      if ((((*(double *)(param_1[0xb] + 0xb8) < -1.0) || (1.0 < *(double *)(param_1[0xb] + 0xc0)))
          || (*(double *)(param_1[0xc] + 0xb8) < -1.0)) || (1.0 < *(double *)(param_1[0xc] + 0xc0)))
      {
        FUN_01cda020(param_1,param_2);
      }
      else {
        FUN_01cd9da0(param_1,param_2);
      }
    }
    if (*(char *)(param_1[0xf] + 0x58) == '\x06') {
      FUN_01cda020(param_1,param_2);
    }
    FUN_01d2d9d0(param_1,param_2);
    if (*(char *)(param_1[0xf] + 0x58) == '\x05') {
      lVar1 = param_2[0xf];
      uVar3 = FUN_01a90ee0(0);
      FUN_005fd4e0(lVar1,uVar3);
      FUN_005fd670(lVar1,0);
      FUN_005fd6d0(lVar1,1);
      FUN_005fdcb0(param_2[0x10],1);
      uVar3 = FUN_01cd60f0(param_1[0xb],0xbff0000000000000);
      uVar4 = FUN_01cd60f0(param_1[0xc],0);
      (**(code **)(*param_2 + 200))(param_2,uVar3,uVar4);
      uVar3 = FUN_01cd60f0(param_1[0xb],0x3ff0000000000000);
      uVar4 = FUN_01cd60f0(param_1[0xc],0);
      (**(code **)(*param_2 + 0xc0))(param_2,uVar3,uVar4);
      if (((*(double *)(param_1[0xb] + 0xb8) < -1.0) || (1.0 < *(double *)(param_1[0xb] + 0xc0))) ||
         ((*(double *)(param_1[0xc] + 0xb8) < -1.0 || (1.0 < *(double *)(param_1[0xc] + 0xc0))))) {
        FUN_01cda060(param_1,param_2);
      }
      else {
        FUN_01cd9f90(param_1,param_2);
      }
    }
    if (*(char *)(param_1[0xf] + 0x58) == '\x06') {
      FUN_01cda060(param_1,param_2);
    }
    (**(code **)(*(longlong *)param_2[0xf] + 0x10))((longlong *)param_2[0xf],plVar5);
    FUN_00410f20(plVar5);
  }
  return;
}

