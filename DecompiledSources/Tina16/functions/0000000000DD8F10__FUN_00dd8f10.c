/* Ghidra address: 00dd8f10 */
/* Ghidra symbol: FUN_00dd8f10 */


void FUN_00dd8f10(longlong param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined1 *local_50;
  longlong *local_40;
  byte local_37;
  undefined1 local_36 [2];
  int local_34;
  undefined8 local_30;
  undefined8 local_28;
  longlong *local_20;
  
  local_50 = auStack_78;
  local_58 = 0;
  local_28 = 0;
  local_40 = (longlong *)0x0;
  puVar1 = auStack_78;
  if (*(char *)(param_1 + 0x30) == '\0') {
    FUN_0041b890(&local_40,*(undefined8 *)(param_1 + 0x18),&DAT_00dd9170);
    puVar1 = local_50;
    if (local_40 != (longlong *)0x0) {
      uVar3 = FUN_00414520(&local_28);
      (**(code **)(*local_40 + 0x18))(local_40,uVar3);
      (**(code **)(*local_40 + 0x28))(local_40,&local_30);
      local_37 = 0;
      (**(code **)(*local_40 + 0x38))(local_40,&local_34);
      if (local_34 != 0) {
        local_37 = local_37 | 1;
      }
      (**(code **)(*local_40 + 0x48))(local_40,&local_34);
      if (local_34 != 0) {
        local_37 = local_37 | 2;
      }
      (**(code **)(*local_40 + 0x58))(local_40,&local_34);
      if (local_34 != 0) {
        local_37 = local_37 | 4;
      }
      (**(code **)(*local_40 + 0x68))(local_40,&local_34);
      if (local_34 != 0) {
        local_37 = local_37 | 8;
      }
      (**(code **)(*local_40 + 0x88))(local_40,local_36);
      local_20 = (longlong *)FUN_005fc570(&PTR_FUN_005f2d40,1);
      *(undefined1 *)(param_1 + 0x30) = 1;
      (**(code **)(*local_20 + 0x10))(local_20,*(undefined8 *)(param_1 + 0x38));
      FUN_004168b0(&local_58,local_28);
      FUN_005fcd80(local_20,local_58);
      uVar2 = FUN_0040c780(local_30);
      FUN_005fce30(local_20,uVar2);
      FUN_005fce70(local_20,local_37);
      FUN_005fcfa0(local_20,local_36[0]);
      (**(code **)(**(longlong **)(param_1 + 0x38) + 0x10))(*(longlong **)(param_1 + 0x38),local_20)
      ;
      *(undefined1 *)(param_1 + 0x30) = 0;
      FUN_00410f20(local_20);
      puVar1 = local_50;
    }
  }
  local_50 = puVar1;
  FUN_00414480(&local_58);
  FUN_0041b800(&local_40);
  FUN_00414520(&local_28);
  return;
}

