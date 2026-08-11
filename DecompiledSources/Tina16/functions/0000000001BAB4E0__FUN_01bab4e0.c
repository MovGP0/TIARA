/* Ghidra address: 01bab4e0 */
/* Ghidra symbol: FUN_01bab4e0 */


void FUN_01bab4e0(undefined8 param_1,byte *param_2,byte *param_3,undefined8 param_4,
                 longlong *param_5)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  longlong lVar4;
  int iVar5;
  byte *pbVar6;
  undefined1 auStack_398 [32];
  longlong *local_378;
  longlong local_370;
  undefined8 local_368;
  undefined8 local_360;
  undefined8 local_358;
  undefined8 local_350;
  undefined1 local_348 [256];
  undefined8 local_248;
  undefined8 local_240 [2];
  undefined8 local_230;
  byte local_228 [256];
  byte local_128 [256];
  
  local_368 = 0;
  local_350 = 0;
  local_358 = 0;
  local_360 = 0;
  local_240[0] = 0;
  local_248 = 0;
  local_230 = 0;
  lVar4 = (ulonglong)*param_2 + 1;
  pbVar6 = local_228;
  for (; lVar4 != 0; lVar4 = lVar4 + -1) {
    *pbVar6 = *param_2;
    param_2 = param_2 + 1;
    pbVar6 = pbVar6 + 1;
  }
  lVar4 = (ulonglong)*param_3 + 1;
  pbVar6 = local_128;
  for (; lVar4 != 0; lVar4 = lVar4 + -1) {
    *pbVar6 = *param_3;
    param_3 = param_3 + 1;
    pbVar6 = pbVar6 + 1;
  }
  local_378 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_01baa420(DAT_021113b0,local_378,L"[All]");
  iVar2 = (**(code **)(*local_378 + 0x28))();
  iVar5 = 0;
  if (-1 < iVar2 + -1) {
    do {
      (**(code **)(*local_378 + 0x18))(local_378,&local_248,iVar5);
      FUN_0043e130(local_240,local_248);
      FUN_00416910(local_348,local_240[0],0xff);
      cVar1 = FUN_01bab140(auStack_398,local_228,local_348);
      if (cVar1 != '\0') {
        puVar3 = (undefined4 *)FUN_00418560(0x20,&DAT_0170bbf8);
        local_370 = (**(code **)(*local_378 + 0x30))(local_378,iVar5);
        *puVar3 = 0x39;
        *(undefined1 *)(puVar3 + 1) = 0;
        *(undefined1 *)((longlong)puVar3 + 5) = 0xff;
        *(undefined2 *)((longlong)puVar3 + 6) = 0;
        *(undefined1 *)(puVar3 + 2) = 0;
        *(undefined1 *)((longlong)puVar3 + 9) = 0;
        *(undefined1 *)((longlong)puVar3 + 10) = 1;
        FUN_00414b50(&local_230,L"|Tina Macro");
        (**(code **)(*local_378 + 0x18))(local_378,&local_358,iVar5);
        FUN_004169a0(&local_360,local_370 + 0x100);
        FUN_01bab220(auStack_398,&local_350,local_358,local_360);
        FUN_00414ad0(puVar3 + 4,local_350);
        *(longlong *)(puVar3 + 6) = local_370;
        (**(code **)(*local_378 + 0x18))(local_378,&local_368,iVar5);
        FUN_00416ad0(&local_368,local_230);
        (**(code **)(*param_5 + 0x80))(param_5,local_368,puVar3);
      }
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00410f20(local_378);
  FUN_00414560(&local_368,4);
  FUN_00414560(&local_248,2);
  FUN_00414480(&local_230);
  return;
}

