/* Ghidra address: 005fc8c0 */
/* Ghidra symbol: FUN_005fc8c0 */


undefined8 FUN_005fc8c0(longlong param_1)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined1 *local_b0;
  longlong local_a8;
  undefined1 *local_a0;
  longlong local_98;
  longlong local_90;
  undefined4 local_84;
  undefined4 local_80;
  int local_7c;
  int local_78;
  undefined4 local_74;
  undefined1 local_70;
  undefined1 local_6f;
  undefined1 local_6e;
  char local_6d;
  undefined1 local_6c;
  undefined1 local_6b;
  undefined1 local_6a;
  undefined1 local_69;
  undefined1 local_68 [64];
  undefined8 local_28;
  longlong local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_b0 = auStack_d8;
  local_b8 = 0;
  local_10 = 0;
  local_18 = 0;
  local_90 = *(longlong *)(param_1 + 0x18);
  puVar1 = auStack_d8;
  if (*(longlong *)(local_90 + 0x10) == 0) {
    local_98 = DAT_02012020;
    FUN_00427930(DAT_02012020 + 0x10);
    if (*(longlong *)(local_90 + 0x10) == 0) {
      local_84 = *(undefined4 *)(local_90 + 0x28);
      local_80 = 0;
      local_7c = *(int *)(local_90 + 0x2c);
      if ((*(byte *)(local_90 + 0x31) & 1) == 0) {
        local_74 = 400;
      }
      else {
        local_74 = 700;
      }
      local_70 = (*(byte *)(local_90 + 0x31) & 2) != 0;
      local_6f = (*(byte *)(local_90 + 0x31) & 4) != 0;
      local_6e = (*(byte *)(local_90 + 0x31) & 8) != 0;
      local_6d = *(char *)(local_90 + 0x32);
      if ((local_6d == '\x01') && (DAT_01decc12 != '\x01')) {
        local_6d = DAT_01decc12;
      }
      local_78 = local_7c;
      FUN_004169a0(&local_b8,local_90 + 0x33);
      iVar3 = FUN_0043e420(local_b8,L"Default");
      if (iVar3 == 0) {
        FUN_00414480(&local_10);
        local_a0 = &DAT_01decc13;
        FUN_0041dc50(&local_10,&DAT_01decc13);
        FUN_00442660(local_68,local_10,0x1f);
        FUN_00414480(&local_10);
      }
      else {
        FUN_00414480(&local_18);
        local_a8 = local_90 + 0x33;
        FUN_0041dc50(&local_18,local_a8);
        FUN_00442660(local_68,local_18,0x1f);
        FUN_00414480(&local_18);
      }
      iVar3 = FUN_0044f060();
      if (((iVar3 == 1) && (cVar2 = FUN_0060ea30(), cVar2 == -0x80)) &&
         (cVar2 = FUN_005fc880(local_90 + 0x20), cVar2 != '\0')) {
        local_6d = -0x80;
      }
      local_6a = FUN_005fcee0(param_1);
      if (local_78 == 0) {
        local_6c = 0;
      }
      else {
        local_6c = 7;
      }
      local_6b = 0;
      cVar2 = FUN_005fced0(param_1);
      if (cVar2 == '\x01') {
        local_69 = 2;
      }
      else if (cVar2 == '\x02') {
        local_69 = 1;
      }
      else {
        local_69 = 0;
      }
      uVar4 = thunk_FUN_041a15ee(&local_84);
      *(undefined8 *)(local_90 + 0x10) = uVar4;
    }
    local_20 = DAT_02012020;
    FUN_00427ff0(DAT_02012020 + 0x10);
    puVar1 = local_b0;
  }
  local_b0 = puVar1;
  local_28 = *(undefined8 *)(local_90 + 0x10);
  FUN_00414480(&local_b8);
  FUN_00414560(&local_18,2);
  return local_28;
}

