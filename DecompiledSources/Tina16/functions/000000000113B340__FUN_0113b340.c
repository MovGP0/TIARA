/* Ghidra address: 0113b340 */
/* Ghidra symbol: FUN_0113b340 */


void FUN_0113b340(longlong param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined7 uVar3;
  uint uVar4;
  bool bVar6;
  undefined8 local_428;
  undefined8 local_420;
  undefined8 local_418;
  undefined8 local_410;
  undefined1 local_408 [88];
  undefined8 local_3b0;
  undefined8 local_3a8;
  undefined8 local_3a0;
  undefined8 local_398;
  undefined1 local_390;
  char local_38f;
  undefined8 local_388;
  undefined1 local_380 [256];
  undefined8 local_280;
  undefined1 local_271;
  int local_270;
  undefined1 local_26a [256];
  undefined2 local_16a;
  undefined1 local_6a;
  char local_69;
  char local_41 [49];
  undefined1 *puVar5;
  
  local_428 = 0;
  local_420 = 0;
  local_418 = 0;
  local_410 = 0;
  local_398 = 0;
  local_3a0 = 0;
  local_3a8 = 0;
  local_3b0 = 0;
  local_388 = 0;
  local_280 = 0;
  if (*(char *)(param_1 + 0xa70) == '\0') {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x9f0),&local_420);
    FUN_00416910(&local_16a,local_420,0xff);
    if ((char)local_16a == '\0') {
      local_16a = 1;
    }
    uVar1 = FUN_010bf850(local_16a >> 8);
    local_16a = CONCAT11(uVar1,(char)local_16a);
    FUN_004169a0(&local_428,&local_16a);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x9f0),local_428);
    (**(code **)(**(longlong **)(param_1 + 0x9f0) + 0x290))(*(longlong **)(param_1 + 0x9f0),0);
    (**(code **)(**(longlong **)(param_1 + 0x9f0) + 0x288))(*(longlong **)(param_1 + 0x9f0),1);
  }
  else {
    *(undefined1 *)(param_1 + 0xa71) = 0;
    (**(code **)(**(longlong **)(param_1 + 0x960) + 0x280))
              (*(longlong **)(param_1 + 0x960),&local_280);
    FUN_00416910(local_380,local_280,0xff);
    FUN_00415020(&local_6a,local_380,0x28);
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x960),&local_388);
    FUN_00416910(&local_16a,local_388,0xff);
    local_41[0] = '\0';
    puVar5 = local_26a;
    FUN_010c0090(&local_16a,puVar5,*(undefined1 *)(param_1 + 0xa78));
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x960) + 0x270))(*(longlong **)(param_1 + 0x960))
    ;
    if (iVar2 == 1) {
      if ((byte)(local_69 - 0x28U) < 0x20) {
        uVar4 = 1 << (local_69 - 0x28U & 0x1f);
        puVar5 = (undefined1 *)(ulonglong)uVar4;
        bVar6 = (uVar4 & 0x3ff28) != 0;
      }
      else {
        bVar6 = false;
      }
      if (bVar6) {
        local_270 = (**(code **)(**(longlong **)(param_1 + 0x960) + 0x278))
                              (*(longlong **)(param_1 + 0x960));
        local_271 = 0;
        if ((byte)(local_69 - 0x30U) < 0x10) {
          bVar6 = ((int)CONCAT62((int6)((ulonglong)puVar5 >> 0x10),1) << (local_69 - 0x30U & 0x1f) &
                  0x3ffU) != 0;
          uVar3 = 3;
        }
        else {
          bVar6 = false;
          uVar3 = 0;
        }
        if (bVar6) {
          if ((byte)(local_16a._1_1_ - 0x28U) < 8) {
            bVar6 = ((int)CONCAT71(uVar3,1) << (local_16a._1_1_ - 0x28U & 0x1f) & 0x28U) != 0;
          }
          else {
            bVar6 = false;
          }
          if (bVar6) {
            local_390 = 1;
            local_38f = local_16a._1_1_;
            FUN_00415020(local_41,&local_390,0x28);
            FUN_00415260(&local_16a,0xff,1,1);
            local_270 = local_270 + -1;
          }
        }
        FUN_010c0200(&local_16a,&local_270,1,&local_271);
        FUN_004154b0(&local_3a0,local_41,0);
        FUN_004154b0(&local_3a8,&local_16a,0);
        FUN_004154b0(&local_3b0,local_26a,0);
        FUN_00415980(&local_398,3,local_3a0,local_3a8,local_3b0);
        FUN_00415560(&local_16a,local_398,0xff);
        if (*(char *)(param_1 + 0xa0c) == '\a') {
          FUN_004169a0(&local_418,&local_16a);
          FUN_0064de00(*(undefined8 *)(param_1 + 0x960),local_418);
        }
        else {
          FUN_010c15a0(local_408,9,4,&local_16a);
          FUN_004169a0(&local_410,local_408);
          FUN_0064de00(*(undefined8 *)(param_1 + 0x960),local_410);
        }
        if (local_41[0] != '\0') {
          local_270 = local_270 + 1;
        }
        (**(code **)(**(longlong **)(param_1 + 0x960) + 0x290))
                  (*(longlong **)(param_1 + 0x960),local_270);
        *(int *)(param_1 + 0xa6c) = local_270;
        (**(code **)(**(longlong **)(param_1 + 0x960) + 0x288))(*(longlong **)(param_1 + 0x960),1);
      }
    }
  }
  FUN_00414480(&local_428);
  FUN_00414480(&local_420);
  FUN_00414560(&local_418,2);
  FUN_00414590(&local_3b0,4);
  FUN_00414480(&local_388);
  FUN_00414480(&local_280);
  return;
}

