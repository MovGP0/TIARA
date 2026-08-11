/* Ghidra address: 00ccf500 */
/* Ghidra symbol: FUN_00ccf500 */


void FUN_00ccf500(longlong param_1)

{
  char cVar1;
  byte bVar2;
  undefined8 uVar3;
  int iVar4;
  bool bVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30 [2];
  longlong local_20 [2];
  
  local_38 = 0;
  local_30[0] = 0;
  local_20[0] = 0;
  if (*(longlong *)(param_1 + 0x1d0) == 0) {
    uVar3 = FUN_00cd0ec0(&DAT_00cc7968,1,param_1);
    *(undefined8 *)(param_1 + 0x1d0) = uVar3;
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x1d0) + 0x28) = *(undefined8 *)(param_1 + 0x1c0);
  uVar3 = 0;
  cVar1 = FUN_00879990(6,0);
  if (cVar1 != '\0') {
    iVar4 = *(int *)(param_1 + 0x130);
    if (iVar4 < 1) {
      iVar4 = 30000;
    }
    FUN_00c8f050(*(undefined8 *)(param_1 + 0x158),0xffff,0x1006,iVar4);
    uVar3 = 0xffff;
    FUN_00c8f050(*(undefined8 *)(param_1 + 0x158),0xffff,0x1005,iVar4);
  }
  bVar2 = *(byte *)(*(longlong *)(param_1 + 0x1c0) + 10);
  if (bVar2 < 8) {
    bVar5 = ((int)CONCAT71((int7)((ulonglong)uVar3 >> 8),1) << (bVar2 & 0x1f) & 6U) != 0;
  }
  else {
    bVar5 = false;
  }
  if (!bVar5) {
    if (*(char *)(param_1 + 0x1b1) == '\0') {
      bVar2 = 1;
    }
    else {
      bVar2 = 2;
    }
  }
  if (bVar2 == 1) {
    FUN_00ccf3e0(auStack_58,local_30);
    FUN_00414b50(local_20,local_30[0]);
    if (local_20[0] == 0) {
      FUN_00ccf480(auStack_58,&local_38);
      FUN_00414b50(local_20,local_38);
      if (local_20[0] == 0) {
        FUN_00414b50(local_20,*(undefined8 *)(param_1 + 0x100));
      }
    }
    FUN_00414ad0(*(longlong *)(param_1 + 0x1d0) + 0x30,local_20[0]);
    FUN_00cd1500(*(undefined8 *)(param_1 + 0x1d0),
                 *(undefined8 *)(*(longlong *)(param_1 + 0x158) + 0x20));
  }
  else {
    FUN_00414480(*(longlong *)(param_1 + 0x1d0) + 0x30);
    FUN_00cd10b0(*(undefined8 *)(param_1 + 0x1d0),
                 *(undefined8 *)(*(longlong *)(param_1 + 0x158) + 0x20));
  }
  *(undefined1 *)(param_1 + 0x1b0) = 0;
  FUN_00414560(&local_38,2);
  FUN_00414480(local_20);
  return;
}

