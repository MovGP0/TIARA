/* Ghidra address: 005ec670 */
/* Ghidra symbol: FUN_005ec670 */


void FUN_005ec670(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 *local_60;
  undefined8 local_50;
  undefined1 local_44 [8];
  int local_3c;
  int local_38;
  int local_28;
  int local_24;
  undefined8 local_20;
  
  local_60 = auStack_a8;
  local_68 = 0;
  local_50 = 0;
  local_20 = *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 8);
  FUN_005ea700(*(undefined8 *)(param_1 + 0x50),param_2);
  cVar1 = FUN_005eb020(*(undefined8 *)(param_1 + 0x50),local_44);
  if (cVar1 != '\0') {
    FUN_005ec4f0(param_1,param_2,param_3,0);
    FUN_00414740(&local_50,0,local_38 + 1);
    local_28 = 0;
    iVar4 = local_3c;
    if (-1 < local_3c + -1) {
      do {
        local_24 = local_38 + 1;
        uVar3 = FUN_00416740(local_50);
        local_88 = 0;
        local_80 = 0;
        local_78 = 0;
        local_70 = 0;
        uVar2 = thunk_FUN_04195abe(param_2,local_28,uVar3,&local_24);
        cVar1 = FUN_005ea620(*(undefined8 *)(param_1 + 0x50),uVar2);
        if (cVar1 != '\0') {
          uVar3 = FUN_00416740(local_50);
          FUN_004167d0(&local_68,uVar3);
          FUN_005ec4f0(param_1,param_2,param_3,local_68);
        }
        local_28 = local_28 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  FUN_005ea700(*(undefined8 *)(param_1 + 0x50),local_20);
  FUN_00414480(&local_68);
  FUN_00414480(&local_50);
  return;
}

