/* Ghidra address: 00d37890 */
/* Ghidra symbol: FUN_00d37890 */


void FUN_00d37890(longlong *param_1,undefined8 param_2,int param_3)

{
  undefined1 *puVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  byte local_80;
  char local_78;
  undefined1 *local_60;
  undefined8 local_50;
  undefined8 local_48;
  char local_3e;
  byte local_3d;
  int local_3c;
  int local_38;
  int local_2c;
  int local_28;
  int local_24;
  undefined4 local_1c;
  
  local_60 = auStack_a8;
  local_48 = 0;
  puVar1 = auStack_a8;
  if ((param_3 < 0) || (puVar1 = auStack_a8, (int)param_1[0xf] + -1 < param_3)) goto LAB_00d37b1c;
  local_50 = FUN_00d394b0(param_1,param_3);
  FUN_00d3a5c0(local_50,&local_2c);
  thunk_FUN_03e49910(param_1[1],&local_3c);
  cVar2 = FUN_00787a60(param_1[3]);
  if (cVar2 == '\x01') {
    lVar3 = FUN_00d394b0(param_1,param_3);
    if (*(longlong *)(lVar3 + 0x10) != 0) goto LAB_00d37963;
    FUN_00429ca0(&local_2c,-6 - local_3c,-local_38);
  }
  else {
LAB_00d37963:
    FUN_00429ca0(&local_2c,-local_3c,-local_38);
  }
  if (local_2c < 2) {
    local_2c = 2;
  }
  local_24 = local_24 + 4;
  if (local_28 < 2) {
    local_28 = local_28 + 2;
  }
  local_3d = 0;
  if ((param_3 != *(int *)((longlong)param_1 + 100)) && ((char)param_1[0xc] != '\0')) {
    local_3d = 1;
  }
  cVar2 = FUN_00d3ac00(local_50);
  if (cVar2 != '\0') {
    local_3d = local_3d | 2;
  }
  cVar2 = FUN_00d3acd0(local_50);
  if (cVar2 != '\0') {
    local_3d = local_3d | 4;
  }
  cVar2 = FUN_00d3ad50(local_50);
  if (cVar2 != '\0') {
    local_3d = local_3d | 8;
  }
  local_3e = '\0';
  cVar2 = FUN_00d3adb0(local_50);
  if (cVar2 != '\0') {
    local_3e = '\x01';
  }
  cVar2 = FUN_00d3ad30(local_50);
  if (cVar2 != '\0') {
    local_3e = '\x02';
  }
  FUN_00414480(&local_48);
  if (local_3e != '\x01') {
    FUN_00d3a610(local_50,&local_48);
  }
  uVar4 = FUN_005ffa40(param_2);
  local_1c = thunk_FUN_03b57162(uVar4);
  (**(code **)(*param_1 + 0x78))(param_1,param_2,param_3,&local_2c);
  uVar4 = FUN_005ffa40(param_2);
  thunk_FUN_0402759f(uVar4,local_1c);
  uVar4 = FUN_005ffa40(param_2);
  local_1c = thunk_FUN_03b57162(uVar4);
  local_88 = local_48;
  local_80 = local_3d;
  local_78 = local_3e;
  (**(code **)(*param_1 + 0x80))(param_1,param_2,param_3,&local_2c);
  uVar4 = FUN_005ffa40(param_2);
  thunk_FUN_0402759f(uVar4,local_1c);
  puVar1 = local_60;
LAB_00d37b1c:
  local_60 = puVar1;
  FUN_00414480(&local_48);
  return;
}

