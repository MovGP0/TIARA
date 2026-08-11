/* Ghidra address: 016c73c0 */
/* Ghidra symbol: FUN_016c73c0 */


void FUN_016c73c0(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined1 local_140 [256];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  int local_1c;
  
  local_148 = 0;
  local_150 = 0;
  local_158 = 0;
  local_30[0] = 0;
  local_38 = 0;
  local_40 = 0;
  cVar1 = FUN_016c4c50(*(undefined8 *)(param_1 + 0x2a0),
                       *(undefined8 *)(*(longlong *)(param_1 + 0x268) + 0x10),
                       *(undefined8 *)(param_2 + 0x38),&local_1c);
  if (cVar1 == '\0') {
    FUN_004154b0(&local_38,param_1 + 0x168,0);
    FUN_004154b0(&local_40,*(undefined8 *)(param_2 + 0x38),0);
    FUN_00415980(local_30,3,local_38,&LAB_016c7780,local_40);
    FUN_00415560(local_140,local_30[0],0xff);
    lVar2 = FUN_016bc3a0(*(undefined8 *)(param_1 + 0x2a0),local_140);
  }
  else {
    if (local_1c < *(int *)(*(longlong *)(param_1 + 0x2b8) + 0x10)) {
      lVar2 = FUN_01d347d0(*(undefined8 *)(param_1 + 0x2b8),local_1c);
    }
    else {
      lVar2 = FUN_01d347d0(*(undefined8 *)(*(longlong *)(param_1 + 0x268) + 0x10),local_1c);
    }
    lVar2 = FUN_016bc3a0(*(undefined8 *)(param_1 + 0x2a0),*(undefined8 *)(lVar2 + 8));
  }
  if (*(longlong *)(param_2 + 0x40) == 0) {
    uVar3 = 0;
  }
  else {
    cVar1 = FUN_016c4c50(*(undefined8 *)(param_1 + 0x2a0),
                         *(undefined8 *)(*(longlong *)(param_1 + 0x268) + 0x10),
                         *(longlong *)(param_2 + 0x40),&local_1c);
    if (cVar1 == '\0') {
      FUN_004154b0(&local_150,param_1 + 0x168,0);
      FUN_004154b0(&local_158,*(undefined8 *)(param_2 + 0x40),0);
      FUN_00415980(&local_148,3,local_150,&LAB_016c7780,local_158);
      FUN_00415560(local_140,local_148,0xff);
      uVar3 = FUN_016bc3a0(*(undefined8 *)(param_1 + 0x2a0),local_140);
    }
    else {
      if (local_1c < *(int *)(*(longlong *)(param_1 + 0x2b8) + 0x10)) {
        lVar4 = FUN_01d347d0(*(undefined8 *)(param_1 + 0x2b8),local_1c);
      }
      else {
        lVar4 = FUN_01d347d0(*(undefined8 *)(*(longlong *)(param_1 + 0x268) + 0x10),local_1c);
      }
      uVar3 = FUN_016bc3a0(*(undefined8 *)(param_1 + 0x2a0),*(undefined8 *)(lVar4 + 8));
    }
  }
  if (*(longlong *)(param_2 + 0x10) == 0) {
    uVar5 = *(undefined8 *)(param_2 + 0x28);
  }
  else {
    if (*(longlong *)(param_1 + 0x2d0) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 0x2d0) + 0x488);
    }
    uVar5 = FUN_016c5420(*(undefined8 *)(param_1 + 0x2a0),param_2,
                         *(undefined8 *)(*(longlong *)(param_1 + 0x268) + 0x20),
                         *(undefined8 *)(param_1 + 0x2c0),
                         *(undefined8 *)(*(longlong *)(param_1 + 0x268) + 0x30),0,2,uVar5);
  }
  if (lVar2 != 0) {
    FUN_014e3a70(*(undefined8 *)(param_1 + 0x2c8),*(undefined8 *)(param_2 + 8),lVar2,uVar3,uVar5,
                 *(undefined8 *)(param_1 + 0x2a0));
  }
  FUN_00414590(&local_158,3);
  FUN_00414590(&local_40,3);
  return;
}

