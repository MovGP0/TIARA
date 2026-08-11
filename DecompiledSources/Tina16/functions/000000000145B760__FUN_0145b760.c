/* Ghidra address: 0145b760 */
/* Ghidra symbol: FUN_0145b760 */


void FUN_0145b760(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,char param_11,longlong param_12)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  undefined8 local_1218;
  int local_1210;
  undefined8 *local_1208 [2];
  undefined8 local_11f8;
  int local_11f0;
  undefined1 local_11e8 [23];
  undefined1 local_11d1;
  undefined1 local_11d0 [4];
  undefined4 local_11cc;
  undefined1 local_11c8 [3184];
  undefined8 auStack_558 [88];
  undefined1 local_298;
  
  local_298 = 0;
  iVar5 = *(int *)(param_12 + 0x48);
  iVar2 = 1;
  if (0 < iVar5) {
    puVar3 = auStack_558;
    do {
      puVar3 = puVar3 + 2;
      *puVar3 = *(undefined8 *)(param_12 + 0x368 + (longlong)iVar2 * 8);
      puVar3[1] = *(undefined8 *)(param_12 + 0x4b0 + (longlong)iVar2 * 8);
      iVar2 = iVar2 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  iVar5 = *(int *)(param_12 + 0x4c);
  iVar2 = 1;
  if (0 < iVar5) {
    do {
      lVar4 = (longlong)(*(int *)(param_12 + 0x48) + iVar2);
      auStack_558[lVar4 * 2] = *(undefined8 *)(param_12 + 0xd8 + (longlong)iVar2 * 8);
      auStack_558[lVar4 * 2 + 1] = *(undefined8 *)(param_12 + 0x220 + (longlong)iVar2 * 8);
      iVar2 = iVar2 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_01449ab0(*(undefined8 *)(param_12 + 0x18),*(undefined4 *)(param_12 + 0x48),local_11e8,param_12
              );
  FUN_01449ab0(*(undefined8 *)(param_12 + 0x20),*(undefined4 *)(param_12 + 0x4c),&local_11f8,
               param_12);
  if ((byte)(param_11 - 1U) < 2) {
    FUN_01449ab0(0,1,local_1208,param_12);
    iVar5 = local_11f0;
    *local_1208[0] = 0;
    local_1208[0][1] = 0;
    local_1208[0][2] = 0x3ff0000000000000;
    local_1208[0][3] = 0;
    local_11f0 = local_11f0 + -1;
    FUN_01449ab0(0,iVar5,&local_1218,param_12);
    FUN_01449df0(&local_11f8,local_1208,&local_1218,param_12);
    FUN_01449b90(local_1208);
    FUN_01449b90(&local_11f8);
    local_11f8 = local_1218;
    local_11f0 = local_1210;
  }
  cVar1 = FUN_01449a00(param_12);
  if (cVar1 == '\0') {
    FUN_0145ac60(*(undefined4 *)(param_12 + 0x48),*(undefined4 *)(param_12 + 0x4c),auStack_558 + 2,
                 local_11e8,&local_11f8,*(undefined8 *)(param_12 + 0xa0),local_11c8,&local_11cc,
                 local_11d0,&local_11d1,param_12);
  }
  else {
    FUN_0145a7f0(*(undefined4 *)(param_12 + 0x48),*(undefined4 *)(param_12 + 0x4c),auStack_558 + 2,
                 0x3ff0000000000000,local_11c8,&local_11cc,local_11d0,&local_11d1,param_12);
  }
  if ((byte)(*(char *)(param_12 + 0xb4) - 2U) < 2) {
    FUN_01457df0(local_11cc,local_11c8,param_11,param_1,param_2,param_3,param_4,param_5,param_6,
                 param_7,param_8,param_9,param_10,param_12);
  }
  else if (*(char *)(param_12 + 0xb4) == '\x04') {
    FUN_0144c1c0(local_11cc,local_11c8,param_11,param_1,param_2,param_3,param_4,param_5,param_6,
                 param_7,param_8,param_9,param_10,0,param_12);
  }
  FUN_01449b90(local_11e8);
  FUN_01449b90(&local_11f8);
  return;
}

