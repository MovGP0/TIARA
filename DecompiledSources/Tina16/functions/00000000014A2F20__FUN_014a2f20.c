/* Ghidra address: 014a2f20 */
/* Ghidra symbol: FUN_014a2f20 */


void FUN_014a2f20(longlong *param_1)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  bool bVar6;
  undefined1 local_9a1 [1000];
  undefined1 local_5b9 [4];
  undefined1 auStack_5b5 [5];
  undefined8 local_5b0;
  undefined8 local_5a8;
  undefined8 local_5a0;
  undefined1 local_590;
  undefined1 local_58f;
  undefined1 local_58e;
  undefined8 local_69;
  undefined1 local_3c;
  undefined8 local_3b;
  undefined8 local_33;
  undefined8 local_2b;
  undefined8 local_23;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19;
  
  FUN_00417580(local_9a1,&DAT_01d0d0b8);
  if (*(char *)(*(longlong *)(*param_1 + 0x48) + 0x490) == '\0') {
    FUN_00417c40(local_9a1,PTR_DAT_02004010,&DAT_01d0d0b8);
  }
  else {
    FUN_00417c40(local_9a1,*(longlong *)(*param_1 + 0x48) + 0x492,&DAT_01d0d0b8);
  }
  bVar1 = *(byte *)(*param_1 + 0x78);
  if (bVar1 < 8) {
    bVar6 = ((int)CONCAT71((int7)((ulonglong)*param_1 >> 8),1) << (bVar1 & 0x1f) & 0x39U) != 0;
  }
  else {
    bVar6 = false;
  }
  if (bVar6) {
    FUN_01d31180(*param_1,0xf285,0x13,0x2d);
    puVar4 = (undefined8 *)local_5b9;
    puVar5 = &local_69;
    for (lVar3 = 5; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    *(undefined4 *)puVar5 = *(undefined4 *)puVar4;
    *(undefined1 *)((longlong)puVar5 + 4) = *(undefined1 *)((longlong)puVar4 + 4);
    FUN_01d311c0(*param_1,&local_69,0x2d);
  }
  else {
    FUN_01d31180(*param_1,0xf285,0x12,0x24);
    local_3c = local_5b9[0];
    local_3b = stack0xfffffffffffffa48;
    local_33 = local_5b0;
    local_2b = local_5a8;
    local_23 = local_5a0;
    local_1b = local_590;
    local_1a = local_58f;
    local_19 = local_58e;
    FUN_01d311c0(*param_1,&local_3c,0x24);
  }
  iVar2 = FUN_01d31a40(*param_1);
  if (iVar2 != 0) {
    FUN_00b047e0(0xfffffff3);
  }
  FUN_00417740(local_9a1,&DAT_01d0d0b8);
  return;
}

