/* Ghidra address: 005ec890 */
/* Ghidra symbol: FUN_005ec890 */


void FUN_005ec890(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  int local_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 *local_70;
  undefined8 local_58;
  int local_4c;
  int local_48;
  int local_30;
  int local_2c;
  undefined8 local_28;
  longlong local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_70 = auStack_d8;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_58 = 0;
  local_28 = *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 8);
  FUN_005ea700(*(undefined8 *)(param_1 + 0x50),param_2);
  cVar1 = FUN_005eb020(*(undefined8 *)(param_1 + 0x50),&local_4c);
  if (cVar1 != '\0') {
    FUN_00414740(&local_58,0,local_48 + 1);
    local_8c = local_4c + -1;
    local_30 = 0;
    if (-1 < local_8c) {
      local_8c = local_4c;
      do {
        local_2c = local_48 + 1;
        uVar3 = FUN_00416740(local_58);
        local_b8 = 0;
        local_b0 = 0;
        local_a8 = 0;
        local_a0 = 0;
        uVar2 = thunk_FUN_03f94bd3(param_2,local_30,uVar3,&local_2c);
        cVar1 = FUN_005ea620(*(undefined8 *)(param_1 + 0x50),uVar2);
        if (cVar1 != '\0') {
          uVar3 = FUN_00416740(local_58);
          FUN_004167d0(&local_78,uVar3);
          local_20 = FUN_005ebee0(*(undefined8 *)(param_1 + 0x50),local_78);
          if (local_20 != 0) {
            local_18 = *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 8);
            FUN_005ea700(*(undefined8 *)(param_1 + 0x50),param_3);
            uVar3 = FUN_00416740(local_58);
            FUN_004167d0(&local_80,uVar3);
            FUN_005ea710(*(undefined8 *)(param_1 + 0x50),local_80);
            uVar3 = FUN_00416740(local_58);
            FUN_004167d0(&local_88,uVar3);
            local_10 = FUN_005ebee0(*(undefined8 *)(param_1 + 0x50),local_88);
            FUN_005ec670(param_1,local_20,local_10);
            FUN_005ec890(param_1,local_20,local_10);
            thunk_FUN_0418fb4b(local_10);
            FUN_005ea700(*(undefined8 *)(param_1 + 0x50),local_18);
            thunk_FUN_0418fb4b(local_20);
          }
        }
        local_30 = local_30 + 1;
        local_8c = local_8c + -1;
      } while (local_8c != 0);
    }
  }
  FUN_005ea700(*(undefined8 *)(param_1 + 0x50),local_28);
  FUN_00414560(&local_88,3);
  FUN_00414480(&local_58);
  return;
}

