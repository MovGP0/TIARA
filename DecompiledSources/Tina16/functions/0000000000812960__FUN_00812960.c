/* Ghidra address: 00812960 */
/* Ghidra symbol: FUN_00812960 */


void FUN_00812960(longlong *param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
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
  
  local_20 = (int)*(short *)(param_2 + 0x10);
  iStack_1c = (int)*(short *)(param_2 + 0x12);
  uVar3 = FUN_00786090(param_1);
  thunk_FUN_0417e313(uVar3,&local_20);
  cVar1 = (**(code **)(*param_1 + 8))(param_1);
  if (cVar1 != '\0') {
    cVar1 = (**(code **)(*param_1 + 0x10))(param_1);
    if (cVar1 == '\0') {
      local_20 = local_20 + 1;
      iStack_1c = iStack_1c + 1;
    }
    else {
      local_20 = local_20 + 2;
      iStack_1c = iStack_1c + 2;
    }
  }
  if ((char)param_1[0xe] == '\x1c') {
    *(undefined1 *)((longlong)param_1 + 0x52) = 0;
    *(undefined1 *)(param_1 + 0xe) = 0x1a;
    (**(code **)(*param_1 + 0xa0))(param_1);
    *(undefined1 *)(param_1 + 4) = 1;
    return;
  }
  if ((char)param_1[10] == '\x18') {
    *(undefined1 *)((longlong)param_1 + 0x52) = 0;
    *(undefined1 *)(param_1 + 10) = 0x16;
    (**(code **)(*param_1 + 0xa0))(param_1);
    *(undefined1 *)(param_1 + 4) = 1;
    return;
  }
  FUN_008118f0(param_1,local_30);
  iVar2 = FUN_004230c0(local_30);
  if (0 < iVar2) {
    FUN_00811760(param_1,local_40);
    cVar1 = FUN_00423210(local_40,&local_20);
    if (cVar1 == '\0') {
      *(undefined1 *)(param_1 + 0xc) = 6;
    }
    else {
      *(undefined1 *)(param_1 + 0xc) = 7;
    }
  }
  FUN_008118f0(param_1,local_50);
  iVar2 = FUN_004230c0(local_50);
  if (0 < iVar2) {
    FUN_00811d70(param_1,local_60);
    cVar1 = FUN_00423210(local_60,&local_20);
    if (cVar1 == '\0') {
      *(undefined1 *)((longlong)param_1 + 0x71) = 2;
    }
    else {
      *(undefined1 *)((longlong)param_1 + 0x71) = 3;
    }
  }
  FUN_00811f80(param_1,local_70);
  iVar2 = FUN_004230a0(local_70);
  if (0 < iVar2) {
    FUN_00811df0(param_1,local_80);
    cVar1 = FUN_00423210(local_80,&local_20);
    if (cVar1 == '\0') {
      *(undefined1 *)(param_1 + 8) = 0xe;
    }
    else {
      *(undefined1 *)(param_1 + 8) = 0xf;
    }
  }
  FUN_00811f80(param_1,local_90);
  iVar2 = FUN_004230a0(local_90);
  if (0 < iVar2) {
    FUN_008123f0(param_1,local_a0);
    cVar1 = FUN_00423210(local_a0,&local_20);
    if (cVar1 == '\0') {
      *(undefined1 *)((longlong)param_1 + 0x51) = 10;
    }
    else {
      *(undefined1 *)((longlong)param_1 + 0x51) = 0xb;
    }
  }
  FUN_00785c20(param_1,param_2);
  FUN_00811f80(param_1,local_b0);
  iVar2 = FUN_004230a0(local_b0);
  if (iVar2 < 1) {
    FUN_008118f0(param_1,local_c0);
    iVar2 = FUN_004230c0(local_c0);
    if (iVar2 < 1) goto LAB_00812b96;
  }
  (**(code **)(*param_1 + 0xa0))(param_1);
LAB_00812b96:
  *(undefined1 *)(param_1 + 4) = 1;
  return;
}

