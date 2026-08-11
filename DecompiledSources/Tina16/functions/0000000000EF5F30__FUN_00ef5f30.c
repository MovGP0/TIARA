/* Ghidra address: 00ef5f30 */
/* Ghidra symbol: FUN_00ef5f30 */


void FUN_00ef5f30(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5,undefined8 *param_6,undefined8 param_7)

{
  char cVar1;
  longlong lVar2;
  uint *puVar3;
  undefined1 local_c0 [12];
  undefined1 local_b4 [12];
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined8 local_9c;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined4 uStack_88;
  undefined8 local_84;
  undefined4 uStack_7c;
  uint local_78;
  uint local_74;
  int local_70;
  int local_6c;
  
  puVar3 = &local_78;
  for (lVar2 = 10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined8 *)puVar3 = *param_2;
    param_2 = param_2 + 1;
    puVar3 = puVar3 + 2;
  }
  local_84 = *param_3;
  uStack_7c = *(undefined4 *)(param_3 + 1);
  local_90 = *param_4;
  uStack_88 = *(undefined4 *)(param_4 + 1);
  local_9c = *param_5;
  uStack_94 = *(undefined4 *)(param_5 + 1);
  local_a8 = *param_6;
  uStack_a0 = *(undefined4 *)(param_6 + 1);
  FUN_00ef4d30(param_1,local_b4,local_c0);
  FUN_00ef4d60(param_1,&local_78);
  FUN_00ef4d80(param_1,&local_78);
  FUN_00ef4b30(param_1,*(char *)(param_1 + 0x9f) + *(char *)(param_1 + 0x9e),param_7);
  *(char *)(param_1 + 0x9e) = *(char *)(param_1 + 0x9e) + '\x01';
  if ((short)local_84 != 0) {
    if (-1 < (int)local_78) {
      FUN_00ef4950(param_1,local_78 & 0xff,local_78 & 0xff,&local_84,param_7);
    }
    if (-1 < (int)local_74) {
      FUN_00ef4950(param_1,local_74 & 0xff,local_74 & 0xff,&local_84,param_7);
    }
    if ((-1 < (int)local_78) && (-1 < (int)local_74)) {
      FUN_00ef5b80(param_1,&local_84);
      FUN_00ef4950(param_1,(undefined1)local_78,(undefined1)local_74,&local_84,param_7);
      FUN_00ef4950(param_1,(undefined1)local_74,(undefined1)local_78,&local_84,param_7);
    }
  }
  if ((short)local_90 != 0) {
    if (-1 < (int)local_74) {
      FUN_00ef4950(param_1,(undefined1)local_74,
                   *(char *)(param_1 + 0x9f) + *(char *)(param_1 + 0x9e),&local_90,param_7);
    }
    FUN_00ef5b80(param_1,&local_90);
    if (-1 < (int)local_78) {
      FUN_00ef4950(param_1,(undefined1)local_78,
                   *(char *)(param_1 + 0x9f) + *(char *)(param_1 + 0x9e),&local_90,param_7);
    }
  }
  if ((short)local_a8 != 0) {
    cVar1 = *(char *)(param_1 + 0x9f) + *(char *)(param_1 + 0x9e);
    FUN_00ef4950(param_1,cVar1,cVar1,&local_a8,param_7);
  }
  if ((short)local_9c != 0) {
    if (-1 < (int)local_78) {
      FUN_00ef4950(param_1,*(char *)(param_1 + 0x9f) + *(char *)(param_1 + 0x9e),
                   (undefined1)local_78,&local_9c,param_7);
    }
    FUN_00ef5b80(param_1,&local_9c);
    if (-1 < (int)local_74) {
      FUN_00ef4950(param_1,*(char *)(param_1 + 0x9f) + *(char *)(param_1 + 0x9e),
                   (undefined1)local_74,&local_9c,param_7);
    }
  }
  if (-1 < local_70) {
    FUN_00ef4950(param_1,(undefined1)local_70,*(char *)(param_1 + 0x9f) + *(char *)(param_1 + 0x9e),
                 local_b4,param_7);
    FUN_00ef4950(param_1,*(char *)(param_1 + 0x9f) + *(char *)(param_1 + 0x9e),(undefined1)local_70,
                 local_c0,param_7);
  }
  if (-1 < local_6c) {
    FUN_00ef4950(param_1,(undefined1)local_6c,*(char *)(param_1 + 0x9f) + *(char *)(param_1 + 0x9e),
                 local_c0,param_7);
    FUN_00ef4950(param_1,*(char *)(param_1 + 0x9f) + *(char *)(param_1 + 0x9e),(undefined1)local_6c,
                 local_b4,param_7);
  }
  return;
}

