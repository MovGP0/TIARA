/* Ghidra address: 01baa930 */
/* Ghidra symbol: FUN_01baa930 */


void FUN_01baa930(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 local_379;
  undefined8 local_378;
  undefined8 local_370;
  undefined8 local_368;
  undefined8 local_360 [2];
  undefined8 local_350;
  longlong local_348 [5];
  undefined1 local_320 [760];
  
  local_378 = 0;
  local_370 = 0;
  local_368 = 0;
  local_360[0] = 0;
  local_348[4] = 0;
  local_348[3] = 0;
  local_348[2] = 0;
  local_348[1] = 0;
  local_348[0] = 0;
  local_350 = 0;
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))();
  iVar5 = 0;
  if (-1 < iVar3 + -1) {
    do {
      (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))
                (*(longlong **)(param_1 + 0x10),&local_350,iVar5);
      iVar4 = FUN_004170c0(L"<TINADIR>",local_350,1);
      if (iVar4 < 1) {
        iVar4 = FUN_004170c0(L"<COMMONCATDIR>",local_350,1);
        if (iVar4 < 1) {
          local_379 = 2;
        }
        else {
          local_379 = 1;
        }
      }
      else {
        local_379 = 0;
      }
      FUN_00b928f0(local_360,local_350,0);
      FUN_00414b50(&local_350,local_360[0]);
      FUN_00416ba0(local_348 + 4,local_350,L".TSMLD");
      FUN_0040cf10(local_320,local_348[4],0);
      FUN_00409900();
      FUN_0040c9e0(local_320);
      FUN_00409900();
      plVar1 = *(longlong **)(param_1 + 0x10);
      (**(code **)(*plVar1 + 0x18))(plVar1,&local_368,iVar5);
      FUN_00416ad0(&local_368,local_348[2]);
      (**(code **)(*plVar1 + 0x40))(plVar1,iVar5,local_368);
      do {
        FUN_0040e200(local_320,local_348 + 2);
        FUN_0040e480(local_320);
        FUN_00409900();
        FUN_01baa6f0(param_1,local_348 + 2);
        FUN_0043eb50(&local_370,local_348[2]);
        FUN_00414b50(local_348 + 2,local_370);
        FUN_00414b50(local_348 + 3,local_348[2]);
        FUN_01baa850(param_1,local_348,local_348 + 3);
        FUN_00450070(&local_378,local_348[0],&DAT_01baaca4,&DAT_01baacb4,1);
        FUN_00414b50(local_348,local_378);
        if (local_348[0] != 0) {
          FUN_01baacc0(param_1,local_348[0],local_348[3],local_379);
        }
        cVar2 = FUN_0040d1c0(local_320);
        FUN_00409900();
      } while (cVar2 == '\0');
      FUN_0040d150(local_320);
      FUN_00409900();
      iVar5 = iVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00414560(&local_378,4);
  FUN_00414560(&local_350,6);
  return;
}

