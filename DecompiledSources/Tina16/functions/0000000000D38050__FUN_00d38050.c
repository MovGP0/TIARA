/* Ghidra address: 00d38050 */
/* Ghidra symbol: FUN_00d38050 */


void FUN_00d38050(longlong param_1,undefined8 param_2,undefined2 param_3,undefined8 *param_4,
                 char param_5,char param_6)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  undefined8 *puVar9;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 local_80;
  undefined1 local_7f;
  undefined1 local_7e;
  undefined1 local_7d;
  undefined1 local_7c;
  undefined1 local_7b;
  undefined1 local_7a;
  undefined1 local_79;
  undefined8 local_78 [8];
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_a0 = 0;
  local_38 = *param_4;
  uStack_30 = param_4[1];
  local_94 = FUN_004230c0(&local_38);
  local_90 = 0;
  local_8c = 0;
  local_88 = 0;
  if (param_5 == '\0') {
    local_84 = 400;
  }
  else {
    local_84 = 700;
  }
  local_80 = 0;
  local_7f = 0;
  local_7e = 0;
  local_7d = 1;
  local_7c = 0;
  local_7b = 0;
  local_7a = 0;
  local_79 = 0;
  pwVar8 = L"Marlett";
  puVar9 = local_78;
  for (lVar7 = 8; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar9 = *(undefined8 *)pwVar8;
    pwVar8 = pwVar8 + 4;
    puVar9 = puVar9 + 1;
  }
  uVar4 = thunk_FUN_041a15ee(&local_94);
  uVar2 = 0;
  if (param_6 != '\0') {
    uVar2 = thunk_FUN_041cde23(0x11);
  }
  uVar2 = thunk_FUN_0412a071(param_2,uVar2);
  uVar5 = thunk_FUN_041a19a1(param_2,uVar4);
  uVar3 = thunk_FUN_03b994b9(param_2,1);
  uVar6 = FUN_00781840();
  cVar1 = FUN_007790b0(uVar6,param_1 + 0x134,2,&local_98);
  if (cVar1 != '\0') {
    thunk_FUN_0412a071(param_2,local_98);
  }
  FUN_00416780(&local_a0,param_3);
  uVar6 = FUN_00416740(local_a0);
  thunk_FUN_041a24be(param_2,uVar6,1,&local_38,0x20);
  thunk_FUN_03b994b9(param_2,uVar3);
  thunk_FUN_041a19a1(param_2,uVar5);
  thunk_FUN_041a19a1(param_2,uVar2);
  thunk_FUN_0416f828(uVar4);
  FUN_00414480(&local_a0);
  return;
}

