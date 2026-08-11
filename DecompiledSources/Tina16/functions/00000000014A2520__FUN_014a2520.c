/* Ghidra address: 014a2520 */
/* Ghidra symbol: FUN_014a2520 */


void FUN_014a2520(longlong *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  bool bVar5;
  undefined8 local_9e8;
  undefined8 local_9e0 [2];
  undefined1 local_9ce [608];
  undefined2 local_76e;
  undefined8 local_76c;
  undefined8 local_764;
  undefined2 local_75c;
  undefined8 local_75a;
  undefined8 local_752;
  undefined2 local_736;
  undefined8 local_734;
  undefined8 local_72c;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined1 local_1f0;
  undefined1 local_1ef [345];
  undefined2 local_96;
  undefined2 local_94;
  undefined8 local_92;
  undefined8 local_8a;
  undefined8 local_82;
  undefined8 local_7a;
  undefined2 local_72;
  undefined2 local_70;
  undefined8 local_6e;
  undefined8 local_66;
  undefined8 local_5e;
  undefined8 local_56;
  undefined2 local_4e;
  undefined2 local_4c;
  undefined2 local_4a;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_9e8 = 0;
  local_9e0[0] = 0;
  FUN_00417580(local_9ce,&DAT_01d0d0b8);
  if (*(char *)(*(longlong *)(*param_1 + 0x48) + 0x490) == '\0') {
    puVar4 = PTR_DAT_02004010;
    FUN_00417c40(local_9ce,PTR_DAT_02004010,&DAT_01d0d0b8);
  }
  else {
    puVar4 = (undefined *)(*(longlong *)(*param_1 + 0x48) + 0x492);
    FUN_00417c40(local_9ce,puVar4,&DAT_01d0d0b8);
  }
  bVar1 = *(byte *)(*param_1 + 0x78);
  if (bVar1 < 8) {
    bVar5 = ((int)CONCAT71((int7)((ulonglong)puVar4 >> 8),1) << (bVar1 & 0x1f) & 0x39U) != 0;
  }
  else {
    bVar5 = false;
  }
  if (bVar5) {
    FUN_004168e0(local_9e0,local_200);
    iVar2 = FUN_01d31290(local_9e0[0]);
    FUN_004168e0(&local_9e8,local_1f8);
    iVar3 = FUN_01d31290(local_9e8);
    FUN_01d31180(*param_1,0xf281,0x15,iVar2 + iVar3 + 0x38);
    local_4e = local_76e;
    local_4c = local_736;
    local_4a = local_75c;
    local_48 = local_76c;
    local_40 = local_734;
    local_38 = local_75a;
    local_30 = local_764;
    local_28 = local_72c;
    local_20 = local_752;
    FUN_01d311c0(*param_1,&local_4e,0x36);
    FUN_01d31630(*param_1,local_200);
    FUN_01d31630(*param_1,local_1f8);
    FUN_01d311c0(*param_1,&local_1f0,1);
    FUN_01d311c0(*param_1,local_1ef,1);
  }
  else if (bVar1 == 2) {
    iVar2 = FUN_01d31350(local_200);
    FUN_01d31180(*param_1,0xf281,0x13,iVar2 + 0x25);
    local_96 = local_76e;
    local_94 = local_736;
    local_92 = local_76c;
    local_8a = local_734;
    local_82 = local_764;
    local_7a = local_72c;
    FUN_01d311c0(*param_1,&local_96,0x24);
    FUN_01d313e0(*param_1,local_200);
    FUN_01d311c0(*param_1,&local_1f0,1);
  }
  else {
    iVar2 = FUN_01d31350(local_200);
    FUN_01d31180(*param_1,0xf281,0x12,iVar2 + 0x24);
    local_72 = FUN_00b905f0(local_76e,0x7fff);
    local_70 = FUN_00b905f0(local_736,0x7fff);
    local_6e = local_76c;
    local_66 = local_734;
    local_5e = local_764;
    local_56 = local_72c;
    FUN_01d311c0(*param_1,&local_72,0x24);
    FUN_01d313e0(*param_1,local_200);
  }
  iVar2 = FUN_01d31a40(*param_1);
  if (iVar2 != 0) {
    FUN_00b047e0(0xfffffff3);
  }
  FUN_004145c0(&local_9e8,2);
  FUN_00417740(local_9ce,&DAT_01d0d0b8);
  return;
}

