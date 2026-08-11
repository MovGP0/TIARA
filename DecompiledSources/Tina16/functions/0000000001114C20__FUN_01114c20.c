/* Ghidra address: 01114c20 */
/* Ghidra symbol: FUN_01114c20 */


void FUN_01114c20(longlong *param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined1 local_70;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_30 = auStack_98;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  cVar1 = (**(code **)(*param_1 + 0x278))(param_1);
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0x2f8))(param_1,0);
    FUN_00c08780(param_1);
    cVar1 = FUN_00bf2c80(param_1);
    if ((cVar1 != '\0') && (*(longlong *)(param_2 + 8) != 0)) {
      local_38 = FUN_00bf2b30(param_1);
      local_40 = FUN_00bf2b90(param_1);
      FUN_00bf2ed0(param_1,&local_48);
      local_78 = local_48;
      local_70 = *(undefined1 *)((longlong)param_1 + 0x5f4);
      FUN_00bd0e70(param_1[0xaa],4,&local_38,&local_40);
    }
    local_20[0] = FUN_00bf2b30(param_1);
    local_28 = FUN_00bf2b90(param_1);
    FUN_00bfa470(param_1,local_20);
    FUN_00bfa6c0(param_1,&local_28);
    FUN_00c08e80(param_1);
    uVar3 = FUN_0065b870(param_1);
    iVar2 = thunk_FUN_039bb6fb(uVar3);
    if (iVar2 == 0) {
      FUN_004167a0(&local_58,*(undefined8 *)(param_2 + 0x10));
      FUN_00c08be0(param_1,local_58);
    }
    else {
      FUN_004167d0(&local_50,*(undefined8 *)(param_2 + 0x10));
      FUN_00c08be0(param_1,local_50);
    }
    FUN_00c08eb0(param_1);
    if (*(longlong *)(param_2 + 8) != 0) {
      local_38 = FUN_00bf2b90(param_1);
      FUN_00bf2ed0(param_1,&local_60);
      local_78 = local_60;
      local_70 = 0;
      FUN_00bd0e70(param_1[0xaa],1,local_20,&local_38);
    }
    FUN_00c087b0(param_1);
    FUN_00c03710(param_1);
    FUN_00c0a950(param_1,0x80);
    (**(code **)(*param_1 + 0x2f8))(param_1,1);
  }
  FUN_00414560(&local_60,4);
  return;
}

