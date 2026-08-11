/* Ghidra address: 01662860 */
/* Ghidra symbol: FUN_01662860 */


void FUN_01662860(longlong param_1,uint param_2,longlong param_3,longlong param_4,int param_5,
                 undefined8 param_6,byte param_7)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  byte bVar5;
  
  *(undefined1 *)(param_1 + 0xb) = 1;
  if (param_3 != 0) {
    lVar4 = 0;
    if (*(longlong *)(param_1 + 400) != 0) {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 400) + -8);
    }
    if (lVar4 <= *(int *)(param_1 + 0x198)) {
      FUN_00419260(param_1 + 400,&DAT_0165b8b0,1,(longlong)(*(int *)(param_1 + 0x198) * 2 + 100));
    }
    puVar1 = (undefined8 *)
             (*(longlong *)(param_1 + 400) + (longlong)*(int *)(param_1 + 0x198) * 0x40);
    *(undefined4 *)(puVar1 + 3) = 4;
    puVar1[2] = *(undefined8 *)(param_1 + 0x1b8);
    *(undefined4 *)((longlong)puVar1 + 0x1c) = *(undefined4 *)(param_1 + 0x1c0);
    puVar1[4] = param_3;
    puVar1[6] = param_6;
    *(undefined1 *)(puVar1 + 7) = 0;
    if ((param_2 & 0xff00) == 0x100) {
      *puVar1 = FUN_00c43f10;
    }
    if ((param_2 & 0xff00) == 0) {
      *puVar1 = FUN_00c43ea0;
    }
    if (*(char *)(puVar1[2] + 0x110) == '\0') {
      *(undefined8 *)(*(longlong *)(param_1 + 400) + 8 + (longlong)*(int *)(param_1 + 0x198) * 0x40)
           = 0;
    }
    else {
      FUN_00409a70(puVar1[2] + 0x98,
                   *(longlong *)(param_1 + 400) + 8 + (longlong)*(int *)(param_1 + 0x198) * 0x40,8);
    }
    *(int *)(param_1 + 0x198) = *(int *)(param_1 + 0x198) + 1;
  }
  lVar4 = 0;
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + -8);
  }
  param_2 = param_2 & 0xff;
  if (lVar4 < (int)(*(int *)(param_1 + 0x1d0) + param_2)) {
    FUN_00419260(param_1 + 0x1c8,&DAT_0165b940,1,(longlong)(*(int *)(param_1 + 0x1d0) * 2 + 100));
  }
  iVar3 = 1;
  for (; param_2 != 0; param_2 = param_2 - 1) {
    plVar2 = (longlong *)
             (*(longlong *)(param_1 + 0x1c8) + (longlong)*(int *)(param_1 + 0x1d0) * 0x28);
    if (param_3 == 0) {
      *plVar2 = 0;
      *(undefined4 *)((longlong)plVar2 + 0xc) = 0xffffffff;
      plVar2[2] = 0;
    }
    else {
      *plVar2 = *(longlong *)(param_1 + 0x1b8);
      *(undefined4 *)((longlong)plVar2 + 0xc) = *(undefined4 *)(param_1 + 0x1c0);
    }
    if (*plVar2 == 0) {
      *(undefined4 *)(plVar2 + 1) = 0xffffffff;
    }
    else {
      *(undefined4 *)(plVar2 + 1) = *(undefined4 *)(*plVar2 + 0x13c);
    }
    plVar2[3] = *(longlong *)(param_4 + -8 + (longlong)(param_5 + 1) * 8);
    if ((iVar3 == 2) || (iVar3 == 3)) {
      bVar5 = 1;
    }
    else {
      bVar5 = 0;
    }
    *(byte *)(plVar2 + 4) = bVar5 ^ param_7;
    *(int *)(param_1 + 0x1d0) = *(int *)(param_1 + 0x1d0) + 1;
    param_5 = param_5 + 1;
    iVar3 = iVar3 + 1;
  }
  if (param_3 != 0) {
    *(int *)(param_1 + 0x1c0) = *(int *)(param_1 + 0x1c0) + 1;
  }
  return;
}

