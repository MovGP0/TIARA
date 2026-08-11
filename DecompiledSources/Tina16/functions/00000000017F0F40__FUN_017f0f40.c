/* Ghidra address: 017f0f40 */
/* Ghidra symbol: FUN_017f0f40 */


void FUN_017f0f40(longlong param_1,undefined8 param_2,undefined1 param_3,longlong param_4,
                 longlong param_5,char param_6)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong local_res20;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_38 = 0;
  local_30[0] = 0;
  local_res20 = param_4;
  FUN_00414610(param_4);
  FUN_00414610(param_5);
  lVar5 = 0;
  plVar3 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  if ((local_res20 != 0) || (param_5 != 0)) {
    if (param_6 == '\x01') {
      FUN_00416cd0(local_30,3,L"Result(",local_res20,&DAT_017f11ec);
      (**(code **)(*plVar3 + 0x78))(plVar3,local_30[0]);
    }
    else {
      FUN_00416cd0(&local_38,5,L"Result2(",local_res20,&LAB_017f1220,param_5,&DAT_017f11ec);
      (**(code **)(*plVar3 + 0x78))(plVar3,local_38);
    }
    FUN_01695540(param_1,plVar3);
  }
  FUN_01695da0(param_1,*PTR_DAT_020052b0);
  FUN_00b95290(*(undefined8 *)(param_1 + 0x550));
  FUN_016942f0(param_1);
  FUN_01694110(*(undefined8 *)(param_1 + 0x550),1,param_2,param_3);
  FUN_011162c0(*(undefined8 *)(param_1 + 0x550));
  if (DAT_02110128 != 0) {
    FUN_013b2f00(*(undefined8 *)(param_1 + 0x4e8),*(undefined8 *)(DAT_02110128 + 0xb38));
  }
  lVar4 = FUN_013bdbe0(&DAT_013bda78,1,param_1);
  iVar2 = FUN_013bfdc0(lVar4);
  if (iVar2 == 0) {
    FUN_01696180(param_1);
    lVar5 = FUN_010c2660(&DAT_010c2500,1,param_1);
    iVar2 = FUN_010c7360(lVar5);
    if (iVar2 == 0) {
      cVar1 = FUN_00c53220(*(undefined8 *)(param_1 + 0x4f8));
      if (cVar1 == '\0') {
        FUN_017e2760(param_1,0);
      }
    }
  }
  if (lVar5 != 0) {
    FUN_00410f20(lVar5);
  }
  if (lVar4 != 0) {
    FUN_00410f20(lVar4);
  }
  FUN_00410f20(plVar3);
  FUN_00414560(&local_38,2);
  FUN_00414560(&local_res20,2);
  return;
}

