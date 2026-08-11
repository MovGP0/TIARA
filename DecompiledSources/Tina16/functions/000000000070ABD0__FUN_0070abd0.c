/* Ghidra address: 0070abd0 */
/* Ghidra symbol: FUN_0070abd0 */


void FUN_0070abd0(longlong *param_1,longlong param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined1 auStack_388 [32];
  undefined8 local_368;
  undefined1 local_360;
  undefined1 local_358;
  undefined1 local_350;
  undefined8 local_348;
  undefined1 *local_340;
  longlong local_330;
  longlong local_328;
  int local_31c;
  longlong local_318;
  longlong local_310;
  longlong local_308;
  longlong local_300;
  undefined1 local_2f0 [512];
  undefined4 local_f0 [2];
  undefined1 *local_e8;
  undefined4 local_d8;
  longlong local_a8;
  int local_9c;
  int local_98;
  int local_94;
  longlong local_90;
  undefined1 local_88 [16];
  undefined1 local_78 [8];
  int local_70;
  undefined1 local_68 [72];
  undefined8 local_20;
  
  local_340 = auStack_388;
  local_348 = 0;
  local_a8 = 0;
  puVar1 = auStack_388;
  local_90 = param_2;
  if (param_2 == 0) {
    local_90 = thunk_FUN_041804fe(param_1[0xf],local_68);
    puVar1 = local_340;
  }
  local_340 = puVar1;
  local_20 = FUN_005fe0d0(&PTR_FUN_005f54e0,1);
  FUN_005ffb10(local_20,local_90);
  local_9c = 0;
  local_300 = param_1[0xf];
  iVar3 = thunk_FUN_041b2403(local_300,0x1200,0,0);
  local_94 = 0;
  if (-1 < iVar3 + -1) {
    do {
      local_308 = param_1[0xf];
      iVar4 = thunk_FUN_041b2403(local_308,0x1200,0,0);
      FUN_00419260(&local_a8,&DAT_0070ab80,1,(longlong)iVar4);
      local_318 = param_1[0xf];
      local_310 = local_318;
      local_31c = thunk_FUN_041b2403(local_318,0x1200,0,0);
      thunk_FUN_041b2403(local_318,0x1211,(longlong)local_31c,local_a8);
      local_98 = *(int *)(local_a8 + (longlong)local_94 * 4);
      local_328 = param_1[0xf];
      lVar6 = (longlong)local_98;
      thunk_FUN_041b2403(local_328,0x1207,lVar6,local_78);
      FUN_0040d200(local_f0,0x48,0);
      local_f0[0] = 2;
      local_e8 = local_2f0;
      local_d8 = 0x100;
      local_330 = param_1[0xf];
      thunk_FUN_041b2403(local_330,0x120b,lVar6,local_f0);
      FUN_004167d0(&local_348,local_e8);
      local_368 = local_348;
      local_360 = (int)param_1[0x12] == local_98;
      local_358 = (int)param_1[0x13] == local_98;
      local_350 = 0;
      (**(code **)(*param_1 + 0xa8))(param_1,local_20);
      if (local_9c < local_70) {
        local_9c = local_70;
      }
      local_94 = local_94 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  thunk_FUN_03e49910(param_1[0xf],local_88);
  iVar3 = FUN_004230a0(local_88);
  uVar5 = FUN_004230c0(local_88);
  local_368 = CONCAT44(local_368._4_4_,uVar5);
  FUN_004238d0(local_78,local_9c,0,iVar3 + 2);
  cVar2 = FUN_00423b30(local_78);
  if (cVar2 == '\0') {
    local_368 = 0;
    local_360 = 0;
    local_358 = 0;
    local_350 = 1;
    (**(code **)(*param_1 + 0xa8))(param_1,local_20,local_78,0xffffffff);
  }
  if (param_2 != 0) {
    thunk_FUN_041a9b5c(param_1[0xf],param_2);
  }
  FUN_005ffb10(local_20,0);
  FUN_00410f20(local_20);
  if (param_2 == 0) {
    thunk_FUN_0416269d(param_1[0xf],local_68);
  }
  FUN_00414480(&local_348);
  FUN_00419430(&local_a8,&DAT_0070ab80);
  return;
}

