/* Ghidra address: 00c4daf0 */
/* Ghidra symbol: FUN_00c4daf0 */


void FUN_00c4daf0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 local_60;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  longlong local_30 [2];
  
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40[0] = 0;
  local_30[0] = 0;
  plVar2 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  lVar3 = FUN_00c48b00(param_2);
  if (4 < lVar3) {
    FUN_00c48ba0(param_2,local_30);
    if (local_30[0] != 0) {
      FUN_00c4d750(local_40,local_30[0],10,0xd);
      FUN_00414b50(local_30,local_40[0]);
      FUN_00c4d810(&local_48,local_30[0],&DAT_00c4dcc8,&DAT_00c4dcdc);
      FUN_00414b50(local_30,local_48);
      plVar4 = (longlong *)FUN_00c4da20(local_30[0],0xd);
      while( true ) {
        iVar1 = (**(code **)(*plVar4 + 0x28))(plVar4);
        if (iVar1 < 1) break;
        (**(code **)(*plVar4 + 0x18))(plVar4,&local_50,0);
        if (local_50 != 0) {
          (**(code **)(*plVar4 + 0x18))(plVar4,&local_58);
          (**(code **)(*plVar2 + 0x78))(plVar2,local_58);
        }
        (**(code **)(*plVar4 + 0x98))(plVar4,0);
      }
      FUN_00410f20(plVar4);
      FUN_00416ba0(&local_60,L"Read content: ",local_30[0]);
      FUN_00c4c420(local_60);
    }
  }
  iVar1 = (**(code **)(*plVar2 + 0x28))(plVar2);
  if (0 < iVar1) {
    FUN_00c4d500(param_1,plVar2);
  }
  FUN_00410f20(plVar2);
  FUN_00414560(&local_60,5);
  FUN_00414480(local_30);
  return;
}

