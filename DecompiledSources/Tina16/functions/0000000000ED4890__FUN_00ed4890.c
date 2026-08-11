/* Ghidra address: 00ed4890 */
/* Ghidra symbol: FUN_00ed4890 */


void FUN_00ed4890(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined8 local_res10 [3];
  undefined1 auStack_3e8 [32];
  undefined1 *local_3c8;
  longlong local_3c0;
  longlong local_3b8;
  longlong *local_3b0;
  undefined8 local_3a8;
  undefined8 local_3a0;
  undefined8 local_398;
  undefined8 local_390;
  undefined8 local_388;
  undefined8 local_380;
  undefined8 local_378;
  undefined8 local_370;
  undefined8 local_368;
  undefined8 local_360 [2];
  undefined8 local_350;
  undefined8 local_348;
  longlong local_340;
  undefined8 local_338;
  undefined8 local_330;
  longlong local_328;
  undefined1 local_320 [768];
  
  local_3a8 = 0;
  local_3a0 = 0;
  local_398 = 0;
  local_390 = 0;
  local_380 = 0;
  local_388 = 0;
  local_370 = 0;
  local_378 = 0;
  local_368 = 0;
  local_360[0] = 0;
  local_328 = 0;
  local_330 = 0;
  local_338 = 0;
  local_340 = 0;
  local_348 = 0;
  local_350 = 0;
  local_res10[0] = param_2;
  local_3b8 = param_1;
  FUN_00414610(param_2);
  local_3b0 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  plVar6 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_0040cf10(local_320,local_res10[0],0);
  FUN_00409900();
  FUN_0040c9e0(local_320);
  FUN_00409900();
  do {
    FUN_0040e200(local_320,&local_328);
    FUN_0040e480(local_320);
    FUN_00409900();
    (**(code **)(*local_3b0 + 0x78))(local_3b0,local_328);
    FUN_00ed4490(auStack_3e8,local_360,local_328,2);
    (**(code **)(*plVar6 + 0x78))(plVar6,local_360[0]);
    cVar2 = FUN_0040d1c0(local_320);
    FUN_00409900();
  } while (cVar2 == '\0');
  FUN_0040d150(local_320);
  FUN_00409900();
  plVar1 = *(longlong **)(*(longlong *)(local_3b8 + 0x710) + 0x4a0);
  (**(code **)(*plVar1 + 0x90))(plVar1);
  FUN_00414b50(&local_328,*(undefined8 *)(local_3b8 + 0x8c0));
  do {
    FUN_00ea9ab0(&local_368,&local_328);
    FUN_00ea9ef0(&local_340,local_368);
    if (local_340 != 0) {
      iVar3 = FUN_00ed4740(auStack_3e8,plVar6,local_340,0xffffffff);
      if (-1 < iVar3) {
        iVar3 = FUN_00ed4740(auStack_3e8,local_3b0,local_340,2);
        if (-1 < iVar3) {
          (**(code **)(*local_3b0 + 0x18))(local_3b0,&local_378,iVar3);
          FUN_00ed4490(auStack_3e8,&local_370,local_378,1);
          FUN_00414b50(&local_338,local_370);
          (**(code **)(*local_3b0 + 0x18))(local_3b0,&local_388,iVar3);
          FUN_00ed4490(auStack_3e8,&local_380,local_388,2);
          FUN_00414b50(&local_340,local_380);
          (**(code **)(*local_3b0 + 0x98))(local_3b0,iVar3);
          iVar3 = FUN_00ed45a0(auStack_3e8,*(undefined8 *)(*(longlong *)(local_3b8 + 0x710) + 0x4a0)
                               ,local_338);
          plVar1 = *(longlong **)(*(longlong *)(local_3b8 + 0x710) + 0x4a0);
          iVar4 = (**(code **)(*plVar1 + 0x28))(plVar1);
          if (iVar3 < iVar4) {
            local_3c8 = &LAB_00ed4dec;
            local_3c0 = local_340;
            FUN_00416cd0(&local_390,4,&DAT_00ed4ddc);
            plVar1 = *(longlong **)(*(longlong *)(local_3b8 + 0x710) + 0x4a0);
            (**(code **)(*plVar1 + 200))(plVar1,iVar3,local_390);
          }
          else {
            local_3c8 = &LAB_00ed4dec;
            local_3c0 = local_340;
            FUN_00416cd0(&local_398,4,&DAT_00ed4ddc);
            plVar1 = *(longlong **)(*(longlong *)(local_3b8 + 0x710) + 0x4a0);
            (**(code **)(*plVar1 + 0x78))(plVar1,local_398);
          }
        }
      }
    }
  } while (local_328 != 0);
  plVar1 = *(longlong **)(local_3b8 + 0x748);
  uVar5 = (**(code **)(*plVar1 + 0x260))(plVar1);
  (**(code **)(*(longlong *)plVar1[0x94] + 0x18))((longlong *)plVar1[0x94],&local_3a0,uVar5);
  FUN_00ea9ca0(&local_348,local_3a0);
  plVar1 = *(longlong **)(local_3b8 + 0x750);
  uVar5 = (**(code **)(*plVar1 + 0x260))(plVar1);
  (**(code **)(*(longlong *)plVar1[0x94] + 0x18))((longlong *)plVar1[0x94],&local_3a8,uVar5);
  FUN_00ea9ca0(&local_350,local_3a8);
  FUN_00ed3300(local_3b8,local_348,local_350);
  FUN_00ecbca0(local_3b8);
  plVar1 = *(longlong **)(local_3b8 + 0x858);
  uVar5 = (**(code **)(*plVar1 + 0x260))(plVar1);
  (**(code **)(*(longlong *)plVar1[0x9e] + 0x48))((longlong *)plVar1[0x9e],uVar5,1);
  FUN_00410f20(local_3b0);
  FUN_00410f20(plVar6);
  FUN_00414560(&local_3a8,10);
  FUN_00414560(&local_350,6);
  FUN_00414480(local_res10);
  return;
}

