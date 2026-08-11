/* Ghidra address: 00812bb0 */
/* Ghidra symbol: FUN_00812bb0 */


void FUN_00812bb0(longlong *param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 local_140 [16];
  undefined1 local_130 [16];
  undefined1 local_120 [16];
  undefined1 local_110 [16];
  undefined1 local_100 [16];
  undefined1 local_f0 [16];
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  int local_20;
  int iStack_1c;
  
  FUN_00786c20(param_1,param_2);
  local_20 = (int)*(short *)(param_2 + 0x10);
  iStack_1c = (int)*(short *)(param_2 + 0x12);
  uVar4 = FUN_00786090(param_1);
  thunk_FUN_0417e313(uVar4,&local_20);
  cVar2 = (**(code **)(*param_1 + 8))(param_1);
  if (cVar2 != '\0') {
    cVar2 = (**(code **)(*param_1 + 0x10))(param_1);
    if (cVar2 == '\0') {
      local_20 = local_20 + 1;
      iStack_1c = iStack_1c + 1;
    }
    else {
      local_20 = local_20 + 2;
      iStack_1c = iStack_1c + 2;
    }
  }
  bVar1 = false;
  FUN_008118f0(param_1,local_30);
  iVar3 = FUN_004230c0(local_30);
  if (0 < iVar3) {
    FUN_008118f0(param_1,local_40);
    cVar2 = FUN_00423210(local_40,&local_20);
    if ((cVar2 == '\0') || ((char)param_1[0xe] != '\x1a')) {
      FUN_008118f0(param_1,local_50);
      cVar2 = FUN_00423210(local_50,&local_20);
      if ((cVar2 == '\0') && ((char)param_1[0xe] == '\x1b')) {
        *(undefined1 *)(param_1 + 0xe) = 0x1a;
        bVar1 = true;
      }
    }
    else {
      *(undefined1 *)(param_1 + 0xe) = 0x1b;
      bVar1 = true;
    }
  }
  FUN_00811f80(param_1,local_60);
  iVar3 = FUN_004230a0(local_60);
  if (0 < iVar3) {
    FUN_00811f80(param_1,local_70);
    cVar2 = FUN_00423210(local_70,&local_20);
    if ((cVar2 == '\0') || ((char)param_1[10] != '\x16')) {
      FUN_00811f80(param_1,local_80);
      cVar2 = FUN_00423210(local_80,&local_20);
      if ((cVar2 == '\0') && ((char)param_1[10] == '\x17')) {
        *(undefined1 *)(param_1 + 10) = 0x16;
        bVar1 = true;
      }
    }
    else {
      *(undefined1 *)(param_1 + 10) = 0x17;
      bVar1 = true;
    }
  }
  FUN_008118f0(param_1,local_90);
  iVar3 = FUN_004230c0(local_90);
  if (0 < iVar3) {
    FUN_00811760(param_1,local_a0);
    cVar2 = FUN_00423210(local_a0,&local_20);
    if ((cVar2 == '\0') || ((char)param_1[0xc] != '\x06')) {
      FUN_00811760(param_1,local_b0);
      cVar2 = FUN_00423210(local_b0,&local_20);
      if ((cVar2 == '\0') && ((char)param_1[0xc] == '\a')) {
        *(undefined1 *)(param_1 + 0xc) = 6;
        bVar1 = true;
      }
    }
    else {
      *(undefined1 *)(param_1 + 0xc) = 7;
      bVar1 = true;
    }
  }
  FUN_008118f0(param_1,local_c0);
  iVar3 = FUN_004230c0(local_c0);
  if (0 < iVar3) {
    FUN_00811d70(param_1,local_d0);
    cVar2 = FUN_00423210(local_d0,&local_20);
    if ((cVar2 == '\0') || (*(char *)((longlong)param_1 + 0x71) != '\x02')) {
      FUN_00811d70(param_1,local_e0);
      cVar2 = FUN_00423210(local_e0,&local_20);
      if ((cVar2 == '\0') && (*(char *)((longlong)param_1 + 0x71) == '\x03')) {
        *(undefined1 *)((longlong)param_1 + 0x71) = 2;
        bVar1 = true;
      }
    }
    else {
      *(undefined1 *)((longlong)param_1 + 0x71) = 3;
      bVar1 = true;
    }
  }
  FUN_00811f80(param_1,local_f0);
  iVar3 = FUN_004230a0(local_f0);
  if (0 < iVar3) {
    FUN_00811df0(param_1,local_100);
    cVar2 = FUN_00423210(local_100,&local_20);
    if ((cVar2 == '\0') || ((char)param_1[8] != '\x0e')) {
      FUN_00811df0(param_1,local_110);
      cVar2 = FUN_00423210(local_110,&local_20);
      if ((cVar2 == '\0') && ((char)param_1[8] == '\x0f')) {
        *(undefined1 *)(param_1 + 8) = 0xe;
        bVar1 = true;
      }
    }
    else {
      *(undefined1 *)(param_1 + 8) = 0xf;
      bVar1 = true;
    }
  }
  FUN_00811f80(param_1,local_120);
  iVar3 = FUN_004230a0(local_120);
  if (0 < iVar3) {
    FUN_008123f0(param_1,local_130);
    cVar2 = FUN_00423210(local_130,&local_20);
    if ((cVar2 == '\0') || (*(char *)((longlong)param_1 + 0x51) != '\n')) {
      FUN_008123f0(param_1,local_140);
      cVar2 = FUN_00423210(local_140,&local_20);
      if ((cVar2 == '\0') && (*(char *)((longlong)param_1 + 0x51) == '\v')) {
        *(undefined1 *)((longlong)param_1 + 0x51) = 10;
        bVar1 = true;
      }
    }
    else {
      *(undefined1 *)((longlong)param_1 + 0x51) = 0xb;
      bVar1 = true;
    }
  }
  if (bVar1) {
    (**(code **)(*param_1 + 0xa0))(param_1);
  }
  return;
}

