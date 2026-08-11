/* Ghidra address: 00ef5bb0 */
/* Ghidra symbol: FUN_00ef5bb0 */


void FUN_00ef5bb0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5,undefined8 *param_6,undefined8 param_7)

{
  longlong lVar1;
  uint *puVar2;
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
  uint local_70;
  uint local_6c;
  
  puVar2 = &local_78;
  for (lVar1 = 10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined8 *)puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 2;
  }
  local_84 = *param_3;
  uStack_7c = *(undefined4 *)(param_3 + 1);
  local_90 = *param_4;
  uStack_88 = *(undefined4 *)(param_4 + 1);
  local_9c = *param_5;
  uStack_94 = *(undefined4 *)(param_5 + 1);
  local_a8 = *param_6;
  uStack_a0 = *(undefined4 *)(param_6 + 1);
  FUN_00ef4d60(param_1,&local_78);
  FUN_00ef4d80(param_1,&local_78);
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
    if ((-1 < (int)local_78) && (-1 < (int)local_70)) {
      FUN_00ef4950(param_1,(undefined1)local_78,(undefined1)local_70,&local_90,param_7);
    }
    if ((-1 < (int)local_74) && (-1 < (int)local_6c)) {
      FUN_00ef4950(param_1,(undefined1)local_74,(undefined1)local_6c,&local_90,param_7);
    }
    FUN_00ef5b80(param_1,&local_90);
    if ((-1 < (int)local_78) && (-1 < (int)local_6c)) {
      FUN_00ef4950(param_1,(undefined1)local_78,(undefined1)local_6c,&local_90,param_7);
    }
    if ((-1 < (int)local_74) && (-1 < (int)local_70)) {
      FUN_00ef4950(param_1,(undefined1)local_74,(undefined1)local_70,&local_90,param_7);
    }
  }
  if ((short)local_9c != 0) {
    if ((-1 < (int)local_78) && (-1 < (int)local_70)) {
      FUN_00ef4950(param_1,(undefined1)local_70,(undefined1)local_78,&local_9c,param_7);
    }
    if ((-1 < (int)local_74) && (-1 < (int)local_6c)) {
      FUN_00ef4950(param_1,(undefined1)local_6c,(undefined1)local_74,&local_9c,param_7);
    }
    FUN_00ef5b80(param_1,&local_9c);
    if ((-1 < (int)local_74) && (-1 < (int)local_70)) {
      FUN_00ef4950(param_1,(undefined1)local_70,(undefined1)local_74,&local_9c,param_7);
    }
    if ((-1 < (int)local_78) && (-1 < (int)local_6c)) {
      FUN_00ef4950(param_1,(undefined1)local_6c,(undefined1)local_78,&local_9c,param_7);
    }
  }
  if ((short)local_a8 != 0) {
    if (-1 < (int)local_70) {
      FUN_00ef4950(param_1,local_70 & 0xff,local_70 & 0xff,&local_a8,param_7);
    }
    if (-1 < (int)local_6c) {
      FUN_00ef4950(param_1,local_6c & 0xff,local_6c & 0xff,&local_a8,param_7);
    }
    if ((-1 < (int)local_70) && (-1 < (int)local_6c)) {
      FUN_00ef5b80(param_1,&local_a8);
      FUN_00ef4950(param_1,(undefined1)local_70,(undefined1)local_6c,&local_a8,param_7);
      FUN_00ef4950(param_1,(undefined1)local_6c,(undefined1)local_70,&local_a8,param_7);
    }
  }
  return;
}

