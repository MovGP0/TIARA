/* Ghidra address: 015d3670 */
/* Ghidra symbol: FUN_015d3670 */


void FUN_015d3670(longlong param_1,int param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_3c8 [32];
  undefined4 local_3a8;
  undefined8 local_3a0;
  undefined8 local_390 [5];
  undefined4 local_366;
  undefined8 local_300 [12];
  undefined8 local_2a0;
  undefined8 local_270 [5];
  int local_246;
  undefined8 local_1e0 [4];
  undefined2 local_1be;
  undefined8 local_150 [13];
  undefined4 local_e8;
  undefined8 local_c0 [4];
  short local_9e;
  undefined1 *local_30;
  longlong local_20;
  
  puVar5 = local_390;
  for (lVar4 = 0x12; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  puVar5 = local_300;
  for (lVar4 = 0x12; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  puVar5 = local_270;
  for (lVar4 = 0x12; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  puVar5 = local_1e0;
  for (lVar4 = 0x12; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  puVar5 = local_150;
  for (lVar4 = 0x12; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  puVar5 = local_c0;
  for (lVar4 = 0x12; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  local_30 = auStack_3c8;
  if (-1 < param_2) {
    local_30 = auStack_3c8;
    iVar2 = FUN_015c2df0(*(undefined8 *)(*(longlong *)(param_1 + 0x238) + 0x28));
    if (param_2 < iVar2) goto LAB_015d375e;
  }
  uVar3 = FUN_015b59b0(&PTR_FUN_015b5818,1,0x10,param_1);
  FUN_004134c0(uVar3);
LAB_015d375e:
  local_20 = FUN_015c1c10(&DAT_015b87c8,1);
  FUN_015c29e0(*(undefined8 *)(*(longlong *)(param_1 + 0x238) + 0x28),local_c0,param_2);
  if (local_9e == -1) {
    if (*(char *)(*(longlong *)(param_1 + 0x238) + 0xa8) == '\0') {
      FUN_015c1bf0(local_20,0);
    }
    else {
      FUN_015c29e0(*(undefined8 *)(*(longlong *)(param_1 + 0x238) + 0x28),local_150,param_2);
      FUN_015c1bf0(local_20,local_e8);
    }
  }
  else {
    FUN_015c29e0(*(undefined8 *)(*(longlong *)(param_1 + 0x238) + 0x28),local_1e0,param_2);
    FUN_015c1bf0(local_20,local_1be);
  }
  if (*(short *)(*(longlong *)(param_1 + 0x238) + 0x88) == -1) {
    if (*(char *)(*(longlong *)(param_1 + 0x238) + 0xa8) == '\0') {
      *(undefined4 *)(local_20 + 0x10) = 0;
    }
    else {
      *(int *)(local_20 + 0x10) = *(int *)(*(longlong *)(param_1 + 0x238) + 0x48) + -1;
    }
  }
  else {
    *(uint *)(local_20 + 0x10) = (uint)*(ushort *)(*(longlong *)(param_1 + 0x238) + 0x88);
  }
  FUN_015d9f40(param_1,local_20);
  FUN_015c29e0(*(undefined8 *)(*(longlong *)(param_1 + 0x238) + 0x28),local_270,param_2);
  if (local_246 == -1) {
    FUN_015c29e0(*(undefined8 *)(*(longlong *)(param_1 + 0x238) + 0x28),local_300,param_2);
    FUN_004b6dc0(*(undefined8 *)(param_1 + 0x250),local_2a0);
  }
  else {
    FUN_015c29e0(*(undefined8 *)(*(longlong *)(param_1 + 0x238) + 0x28),local_390,param_2);
    FUN_004b6dc0(*(undefined8 *)(param_1 + 0x250),local_366);
  }
  uVar3 = FUN_015c2a60(*(undefined8 *)(*(longlong *)(param_1 + 0x238) + 0x28),param_2);
  local_3a0 = param_5;
  local_3a8 = param_4;
  cVar1 = FUN_015cd2b0(param_1,*(undefined8 *)(param_1 + 0x250),param_3,uVar3);
  if ((((cVar1 == '\0') && (*(char *)(param_1 + 0x100) == '\0')) &&
      (*(char *)(param_1 + 0x110) == '\0')) && (*(char *)(param_1 + 0x102) == '\0')) {
    uVar3 = FUN_015b59b0(&PTR_FUN_015b5818,1,8,param_1);
    FUN_004134c0(uVar3);
  }
  FUN_00410f20(local_20);
  FUN_00417840(local_390,&DAT_015b9418,6);
  return;
}

