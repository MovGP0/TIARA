/* Ghidra address: 00691a90 */
/* Ghidra symbol: FUN_00691a90 */


void FUN_00691a90(longlong param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined1 local_98 [16];
  int local_88;
  int iStack_84;
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  undefined8 local_20;
  
  FUN_00786bc0(param_1,param_2);
  FUN_00785c20(param_1,param_2);
  local_88 = (int)*(short *)(param_2 + 0x10);
  iStack_84 = (int)*(short *)(param_2 + 0x12);
  local_20 = CONCAT44(iStack_84,local_88);
  bVar1 = false;
  cVar2 = FUN_0068ff80(param_1);
  if (cVar2 == '\0') {
    FUN_0068fff0(param_1,local_60);
    iVar3 = FUN_004230c0(local_60);
    if (0 < iVar3) {
      FUN_0068fff0(param_1,local_98);
      cVar2 = FUN_004231e0(local_98,&local_20);
      if ((cVar2 == '\0') || (*(char *)(param_1 + 0x48) != '\x1a')) {
        FUN_0068fff0(param_1,local_98);
        cVar2 = FUN_004231e0(local_98,&local_20);
        if ((cVar2 == '\0') && (*(char *)(param_1 + 0x48) == '\x1b')) {
          *(undefined1 *)(param_1 + 0x48) = 0x1a;
          bVar1 = true;
        }
      }
      else {
        *(undefined1 *)(param_1 + 0x48) = 0x1b;
        bVar1 = true;
      }
    }
    FUN_0068fff0(param_1,local_70);
    iVar3 = FUN_004230c0(local_70);
    if (0 < iVar3) {
      FUN_00690520(param_1,local_98);
      cVar2 = FUN_004231e0(local_98,&local_20);
      if ((cVar2 == '\0') || (*(char *)(param_1 + 0x4a) != '\x06')) {
        FUN_00690520(param_1,local_98);
        cVar2 = FUN_004231e0(local_98,&local_20);
        if ((cVar2 == '\0') && (*(char *)(param_1 + 0x4a) == '\a')) {
          *(undefined1 *)(param_1 + 0x4a) = 6;
          bVar1 = true;
        }
      }
      else {
        *(undefined1 *)(param_1 + 0x4a) = 7;
        bVar1 = true;
      }
    }
    FUN_0068fff0(param_1,local_80);
    iVar3 = FUN_004230c0(local_80);
    if (0 < iVar3) {
      FUN_006903f0(param_1,local_98);
      cVar2 = FUN_004231e0(local_98,&local_20);
      if ((cVar2 == '\0') || (*(char *)(param_1 + 0x49) != '\x02')) {
        FUN_006903f0(param_1,local_98);
        cVar2 = FUN_004231e0(local_98,&local_20);
        if ((cVar2 == '\0') && (*(char *)(param_1 + 0x49) == '\x03')) {
          *(undefined1 *)(param_1 + 0x49) = 2;
          bVar1 = true;
        }
      }
      else {
        *(undefined1 *)(param_1 + 0x49) = 3;
        bVar1 = true;
      }
    }
  }
  else {
    FUN_00690690(param_1,local_30);
    iVar3 = FUN_004230a0(local_30);
    if (0 < iVar3) {
      FUN_00690690(param_1,local_98);
      cVar2 = FUN_004231e0(local_98,&local_20);
      if ((cVar2 == '\0') || (*(char *)(param_1 + 0x4b) != '\x16')) {
        FUN_00690690(param_1,local_98);
        cVar2 = FUN_004231e0(local_98,&local_20);
        if ((cVar2 == '\0') && (*(char *)(param_1 + 0x4b) == '\x17')) {
          *(undefined1 *)(param_1 + 0x4b) = 0x16;
          bVar1 = true;
        }
      }
      else {
        *(undefined1 *)(param_1 + 0x4b) = 0x17;
        bVar1 = true;
      }
    }
    FUN_00690690(param_1,local_40);
    iVar3 = FUN_004230a0(local_40);
    if (0 < iVar3) {
      FUN_00690bc0(param_1,local_98);
      cVar2 = FUN_004231e0(local_98,&local_20);
      if ((cVar2 == '\0') || (*(char *)(param_1 + 0x4d) != '\x0e')) {
        FUN_00690bc0(param_1,local_98);
        cVar2 = FUN_004231e0(local_98,&local_20);
        if ((cVar2 == '\0') && (*(char *)(param_1 + 0x4d) == '\x0f')) {
          *(undefined1 *)(param_1 + 0x4d) = 0xe;
          bVar1 = true;
        }
      }
      else {
        *(undefined1 *)(param_1 + 0x4d) = 0xf;
        bVar1 = true;
      }
    }
    FUN_00690690(param_1,local_50);
    iVar3 = FUN_004230a0(local_50);
    if (0 < iVar3) {
      FUN_00690a90(param_1,local_98);
      cVar2 = FUN_004231e0(local_98,&local_20);
      if ((cVar2 == '\0') || (*(char *)(param_1 + 0x4c) != '\n')) {
        FUN_00690a90(param_1,local_98);
        cVar2 = FUN_004231e0(local_98,&local_20);
        if ((cVar2 == '\0') && (*(char *)(param_1 + 0x4c) == '\v')) {
          *(undefined1 *)(param_1 + 0x4c) = 10;
          bVar1 = true;
        }
      }
      else {
        *(undefined1 *)(param_1 + 0x4c) = 0xb;
        bVar1 = true;
      }
    }
  }
  if (bVar1) {
    FUN_0068ff40(param_1);
  }
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}

