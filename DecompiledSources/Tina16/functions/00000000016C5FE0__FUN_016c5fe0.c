/* Ghidra address: 016c5fe0 */
/* Ghidra symbol: FUN_016c5fe0 */


void FUN_016c5fe0(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined1 local_240 [256];
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  byte local_124 [256];
  int local_24;
  undefined1 local_20 [16];
  
  local_258 = 0;
  local_260 = 0;
  local_268 = 0;
  local_250 = 0;
  local_248 = 0;
  local_130 = 0;
  local_138 = 0;
  local_140 = 0;
  FUN_00414ff0(local_124,*(undefined8 *)(param_2 + 8));
  cVar1 = FUN_016c4c50(*(undefined8 *)(*(longlong *)(param_1 + 0x310) + 0x2a0),
                       *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x310) + 0x268) + 0x10)
                       ,local_124,&local_24);
  if (cVar1 == '\0') {
    FUN_004154b0(&local_138,*(longlong *)(param_1 + 0x310) + 0x168,0);
    FUN_004154b0(&local_140,local_124,0);
    FUN_00415980(&local_130,3,local_138,&DAT_016c64bc,local_140);
    FUN_00415560(local_240,local_130,0xff);
    uVar4 = FUN_016bbb50(*(undefined8 *)(*(longlong *)(param_1 + 0x310) + 0x2a0),
                         *(undefined8 *)(param_2 + 8),local_240);
    *(undefined8 *)(param_2 + 8) = uVar4;
    FUN_004169a0(&local_248,local_124);
    iVar2 = FUN_004170c0(&DAT_016c64cc,local_248,1);
    if (iVar2 == 0) {
      uVar3 = FUN_016bbd90(*(undefined8 *)(*(longlong *)(param_1 + 0x310) + 0x2a0),
                           *(undefined8 *)(param_2 + 8),
                           *(undefined8 *)(*(longlong *)(param_1 + 0x310) + 0x2d0),local_20);
      *(undefined4 *)(param_2 + 0x18) = uVar3;
    }
  }
  else {
    iVar2 = FUN_00414f50(local_124,&DAT_016c64d0,(ulonglong)local_124[0] + 1);
    if (iVar2 != 0) {
      FUN_004169a0(&local_250,local_124);
      iVar2 = FUN_004170c0(&LAB_016c64e0,local_250,1);
      if (iVar2 != 1) {
        if (local_24 < *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x310) + 0x2b8) + 0x10)) {
          lVar5 = FUN_01d347d0(*(undefined8 *)(*(longlong *)(param_1 + 0x310) + 0x2b8),local_24);
          uVar4 = FUN_016bbb50(*(undefined8 *)(*(longlong *)(param_1 + 0x310) + 0x2a0),
                               *(undefined8 *)(param_2 + 8),*(undefined8 *)(lVar5 + 8));
          *(undefined8 *)(param_2 + 8) = uVar4;
        }
        else {
          lVar5 = FUN_01d347d0(*(undefined8 *)
                                (*(longlong *)(*(longlong *)(param_1 + 0x310) + 0x268) + 0x10),
                               local_24);
          if (*(longlong *)(lVar5 + 0x10) == 0) {
            FUN_004154b0(&local_260,*(longlong *)(param_1 + 0x310) + 0x168,0);
            FUN_004154b0(&local_268,local_124,0);
            FUN_00415980(&local_258,3,local_260,&DAT_016c64bc,local_268);
            FUN_00415560(local_240,local_258,0xff);
            uVar4 = FUN_016bbb50(*(undefined8 *)(*(longlong *)(param_1 + 0x310) + 0x2a0),
                                 *(undefined8 *)(param_2 + 8),local_240);
            *(undefined8 *)(param_2 + 8) = uVar4;
          }
          else {
            uVar4 = FUN_016bbb50(*(undefined8 *)(*(longlong *)(param_1 + 0x310) + 0x2a0),
                                 *(undefined8 *)(param_2 + 8),*(longlong *)(lVar5 + 0x10));
            *(undefined8 *)(param_2 + 8) = uVar4;
          }
        }
        if (*(longlong *)(lVar5 + 0x10) == 0) {
          *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(lVar5 + 0x18);
          *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(lVar5 + 0x1c);
        }
        else {
          uVar3 = FUN_016bc310(*(undefined8 *)(*(longlong *)(param_1 + 0x310) + 0x2a0),
                               *(longlong *)(lVar5 + 0x10),
                               *(undefined8 *)(*(longlong *)(param_1 + 0x310) + 0x2d0),1);
          *(undefined4 *)(param_2 + 0x18) = uVar3;
        }
        FUN_016bc170(*(undefined8 *)(*(longlong *)(param_1 + 0x310) + 0x2a0),
                     *(undefined8 *)(param_2 + 8),*(undefined4 *)(param_2 + 0x18),
                     *(undefined8 *)(*(longlong *)(param_1 + 0x310) + 0x2d0),local_20);
        goto code_r0x016c642d;
      }
    }
    uVar3 = FUN_016bc310(*(undefined8 *)(*(longlong *)(param_1 + 0x310) + 0x2a0),local_124,
                         *(undefined8 *)(*(longlong *)(param_1 + 0x310) + 0x2d0),1);
    *(undefined4 *)(param_2 + 0x18) = uVar3;
  }
code_r0x016c642d:
  FUN_00414590(&local_268,3);
  FUN_00414560(&local_250,2);
  FUN_00414590(&local_140,3);
  return;
}

