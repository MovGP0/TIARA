/* Ghidra address: 00a66e60 */
/* Ghidra symbol: FUN_00a66e60 */


char FUN_00a66e60(longlong param_1,undefined1 *param_2)

{
  ushort uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_c8 [40];
  undefined1 *local_a0;
  longlong local_90;
  longlong local_88;
  int local_7c;
  undefined1 local_78;
  undefined1 local_77 [7];
  undefined1 local_70 [30];
  char local_52;
  char local_51;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  char local_31;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_a0 = auStack_c8;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_10 = 0;
  local_18 = 0;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  FUN_00417580(param_2,&DAT_00a2b708);
  FUN_00417580(&local_78,&DAT_00a2b628);
  local_31 = '\0';
  FUN_00419430(param_2 + 8,&DAT_00a2b6b8);
  FUN_00a66be0(param_1);
  uVar4 = FUN_00414480(&local_40);
  local_51 = FUN_00a66c30(param_1,uVar4);
  param_2[1] = 0;
  if (local_51 != '\0') {
    FUN_00414480(&local_10);
    FUN_0043e600(&local_10,local_40);
    FUN_00414b50(&local_48,local_10);
    FUN_00414480(&local_10);
    iVar3 = FUN_00416db0(local_48,&DAT_00a67530);
    param_2[1] = iVar3 == 0;
    if ((param_2[1] != '\0') || (iVar3 = FUN_00416db0(local_48,L"only"), iVar3 == 0)) {
      FUN_00a66be0(param_1);
      uVar4 = FUN_00414480(&local_40);
      local_51 = FUN_00a66c30(param_1,uVar4);
      if (local_51 != '\0') {
        FUN_00414480(&local_18);
        FUN_0043e600(&local_18,local_40);
        FUN_00414b50(&local_48,local_18);
        FUN_00414480(&local_18);
      }
    }
  }
  *param_2 = 0;
  local_52 = local_51;
  if (local_51 != '\0') {
    cVar2 = FUN_00a2bb10(local_40,param_2);
    if (cVar2 == '\0') {
      param_2[1] = 1;
    }
    FUN_00a66be0(param_1);
    uVar4 = FUN_00414480(&local_40);
    local_51 = FUN_00a66c30(param_1,uVar4);
    if (local_51 != '\0') {
      FUN_00414480(&local_20);
      FUN_0043e600(&local_20,local_40);
      FUN_00414b50(&local_48,local_20);
      FUN_00414480(&local_20);
    }
    local_31 = '\x01';
  }
  while( true ) {
    do {
      while( true ) {
        if (local_51 != '\0') {
          iVar3 = FUN_00416db0(local_48,&DAT_00a6755c);
          local_31 = iVar3 == 0;
          if (!(bool)local_31) goto code_r0x00a673fe;
          local_52 = '\0';
          local_51 = '\0';
          FUN_00a66be0(param_1);
        }
        uVar1 = *(ushort *)(param_1 + 0x26);
        if (uVar1 < 0x2d) break;
        if ((uVar1 == 0x3c) || (uVar1 == 0x7b)) goto code_r0x00a673fe;
      }
      if ((uVar1 == 0x2c) || (uVar1 == 0)) goto code_r0x00a673fe;
    } while (uVar1 != 0x28);
    local_31 = '\0';
    if (local_52 != '\0') break;
    FUN_00a66ba0(param_1);
    FUN_00a66be0(param_1);
    uVar4 = FUN_00414480(&local_40);
    local_51 = FUN_00a66c30(param_1,uVar4);
    if (local_51 == '\0') break;
    FUN_00414480(&local_28);
    FUN_0043e600(&local_28,local_40);
    FUN_00414b50(&local_48,local_28);
    FUN_00414480(&local_28);
    cVar2 = FUN_00a2bb90(local_48,local_77,&local_78);
    if (cVar2 == '\0') {
      local_78 = 0;
      local_77[0] = 0;
    }
    FUN_00460b80(local_70);
    FUN_00a66be0(param_1);
    if (*(short *)(param_1 + 0x26) == 0x29) {
      FUN_00a66ba0(param_1);
      FUN_00a66be0(param_1);
      local_78 = 1;
      local_31 = '\x01';
    }
    else {
      if (*(short *)(param_1 + 0x26) != 0x3a) break;
      FUN_00a66ba0(param_1);
      FUN_00a66be0(param_1);
      uVar4 = FUN_00414480(&local_50);
      local_31 = FUN_00a66db0(param_1,uVar4,&DAT_00a67570,&DAT_00a67580);
      if (local_31 == '\0') break;
      FUN_00468a10(local_70,local_50);
    }
    local_88 = *(longlong *)(param_2 + 8);
    local_90 = local_88;
    if (local_88 != 0) {
      local_90 = *(longlong *)(local_88 + -8);
    }
    local_7c = (int)local_90;
    FUN_00419260(param_2 + 8,&DAT_00a2b6b8,1,(longlong)((int)local_90 + 1));
    FUN_00417c40(*(longlong *)(param_2 + 8) + (longlong)local_7c * 0x20,&local_78,&DAT_00a2b628);
    local_52 = '\x01';
    FUN_00a66be0(param_1);
    uVar4 = FUN_00414480(&local_40);
    local_51 = FUN_00a66c30(param_1,uVar4);
    if (local_51 == '\0') break;
    FUN_00414480(&local_30);
    FUN_0043e600(&local_30,local_40);
    FUN_00414b50(&local_48,local_30);
    FUN_00414480(&local_30);
  }
code_r0x00a673fe:
  FUN_00417740(&local_78,&DAT_00a2b628);
  FUN_00414560(&local_50,3);
  FUN_00414560(&local_30,5);
  return local_31;
}

