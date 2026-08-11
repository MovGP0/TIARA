/* Ghidra address: 014c6920 */
/* Ghidra symbol: FUN_014c6920 */


void FUN_014c6920(longlong param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 in_RAX;
  longlong lVar3;
  byte bVar4;
  bool bVar5;
  undefined8 uVar6;
  
  bVar4 = (char)param_4 - 8;
  if (bVar4 < 8) {
    bVar5 = ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (bVar4 & 0x1f) & 0x11U) != 0;
  }
  else {
    bVar5 = false;
  }
  if (!bVar5) {
    if ((*(byte *)(param_3 + 0x88) & 0x20) == 0) {
      if ((*(byte *)(param_3 + 0x88) & 2) == 0) {
        if ((*(byte *)(param_3 + 0x88) & 0x40) != 0) {
          FUN_016eeca0(param_2,param_3 + 0x1b8,1,*(short *)(param_1 + 2) + 1,0x4000000000000000,0);
          FUN_016eeca0(param_2,param_3 + 0x1b8,0,*(short *)(param_1 + 2) + 2,0x4000000000000000,0);
          FUN_016eeca0(param_2,param_3 + 0x1b8,0,*(short *)(param_1 + 2) + 3,
                       (double)*(byte *)(param_1 + 0x18),0);
        }
      }
      else {
        FUN_016eeca0(param_2,param_3 + 0x1b8,0,*(short *)(param_1 + 2) + 2,0x4000000000000000,0);
        FUN_016eeca0(param_2,param_3 + 0x1b8,0,*(short *)(param_1 + 2) + 3,
                     (double)*(byte *)(param_1 + 0x18),0);
      }
      (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 8) + 0x10))
                (*(longlong *)(param_1 + 0x20),param_2,param_3,param_4);
      uVar6 = FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),
                           *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 2),
                           *(undefined1 *)(param_1 + 6),0);
      *(undefined8 *)(param_1 + 0x10) = uVar6;
      FUN_016eebe0(param_2,param_3 + 0x1b8,0,*(short *)(param_1 + 2) + 1,0);
      uVar2 = FUN_0040c770();
      cVar1 = *(char *)(param_1 + 5);
      if (cVar1 == '\0') {
        lVar3 = FUN_0041f930();
        *(undefined8 *)(lVar3 + 0x280) = 0x4014000000000000;
      }
      else {
        lVar3 = FUN_0041f930();
        uVar6 = FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),cVar1,
                             *(undefined1 *)(param_1 + 6),0);
        *(undefined8 *)(lVar3 + 0x280) = uVar6;
      }
      cVar1 = FUN_014c6880(*(undefined8 *)(param_1 + 0x10),*(undefined1 *)(param_1 + 0xc),uVar2);
      *(char *)(param_1 + 0x1a) = cVar1;
      FUN_016eeca0(param_2,param_3 + 0x1b8,0,*(short *)(param_1 + 2) + 1,(double)(int)cVar1,0);
    }
    else {
      FUN_016eeca0(param_2,param_3 + 0x1b8,0,*(short *)(param_1 + 2) + 2,0x4000000000000000,0);
      FUN_016eeca0(param_2,param_3 + 0x1b8,0,*(short *)(param_1 + 2) + 1,
                   (double)(int)*(char *)(param_1 + 0x1a),0);
      FUN_016eeca0(param_2,param_3 + 0x1b8,1,*(short *)(param_1 + 2) + 1,0x4000000000000000,0);
      FUN_016eeca0(param_2,param_3 + 0x1b8,0,*(short *)(param_1 + 2) + 3,
                   (double)*(byte *)(param_1 + 0x18),0);
    }
  }
  return;
}

