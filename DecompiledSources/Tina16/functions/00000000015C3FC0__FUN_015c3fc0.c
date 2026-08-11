/* Ghidra address: 015c3fc0 */
/* Ghidra symbol: FUN_015c3fc0 */


void FUN_015c3fc0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_278 [32];
  undefined4 local_258;
  undefined8 local_248 [12];
  ulonglong local_1e8;
  undefined8 local_1b8 [5];
  undefined8 local_18a;
  undefined8 local_128;
  undefined8 local_98;
  undefined *local_90;
  ulonglong local_88;
  undefined8 local_7e;
  uint local_54;
  undefined8 local_50 [6];
  
  puVar4 = local_248;
  for (lVar3 = 0x12; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  puVar4 = local_1b8;
  for (lVar3 = 0x12; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  puVar4 = &local_128;
  for (lVar3 = 0x12; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  local_98 = 0;
  local_50[0] = 0;
  if (*(short *)(param_1 + 0x8e) == 0) {
    *(undefined8 *)(param_1 + 0xa0) = param_2;
  }
  else {
    if (*(char *)(*(longlong *)(param_1 + 0x18) + 0x85) == '\0') {
      local_90 = (undefined *)0x5045c61;
    }
    else {
      local_90 = &DAT_04034b50;
    }
    FUN_015c29e0(*(undefined8 *)(param_1 + 0x28),&local_128,0);
    puVar4 = &local_128;
    puVar5 = &local_7e;
    for (lVar3 = 5; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    *(undefined4 *)puVar5 = *(undefined4 *)puVar4;
    *(undefined2 *)((longlong)puVar5 + 4) = *(undefined2 *)((longlong)puVar4 + 4);
    FUN_015c29e0(*(undefined8 *)(param_1 + 0x28),local_1b8,0);
    FUN_00414b50(&local_98,local_18a);
    if (local_54 == 0xffffffff) {
      FUN_015c29e0(*(undefined8 *)(param_1 + 0x28),local_248,0);
      local_88 = local_1e8;
    }
    else {
      local_88 = (ulonglong)local_54;
    }
    FUN_004b6dc0(*(undefined8 *)(param_1 + 8),local_88);
    while( true ) {
      lVar3 = FUN_004b6da0(*(undefined8 *)(param_1 + 8));
      lVar2 = (**(code **)**(undefined8 **)(param_1 + 8))(*(undefined8 **)(param_1 + 8));
      if (lVar2 <= lVar3) break;
      local_258 = 4;
      cVar1 = FUN_015c45a0(param_1,*(undefined8 *)(param_1 + 8),&local_88,&local_90);
      if (cVar1 == '\0') break;
      FUN_004b6dc0(*(undefined8 *)(param_1 + 8),local_88);
      cVar1 = FUN_015c3da0(auStack_278,local_88);
      if (cVar1 != '\0') {
        *(ulonglong *)(param_1 + 0xa0) = local_88;
        break;
      }
      local_88 = local_88 + 1;
    }
  }
  FUN_00417840(local_248,&DAT_015b9418,3);
  FUN_00414480(&local_98);
  FUN_004144d0(local_50);
  return;
}

