/* Ghidra address: 014c5d70 */
/* Ghidra symbol: FUN_014c5d70 */


void FUN_014c5d70(longlong param_1,undefined8 param_2,longlong param_3,char param_4)

{
  undefined1 uVar1;
  undefined8 in_RAX;
  undefined1 unaff_R13B;
  bool bVar2;
  
  if ((byte)(param_4 - 8U) < 8) {
    bVar2 = ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (param_4 - 8U & 0x1f) & 0x11U) != 0;
  }
  else {
    bVar2 = false;
  }
  if (!bVar2) {
    if ((*(byte *)(param_3 + 0x88) & 0x20) == 0) {
      if ((*(byte *)(param_3 + 0x88) & 2) == 0) {
        if ((*(byte *)(param_3 + 0x88) & 0x40) != 0) {
          FUN_016eeca0(param_2,param_3 + 0x1b8,0,*(short *)(param_1 + 2) + 2,0x4000000000000000,0);
          FUN_016eeca0(param_2,param_3 + 0x1b8,0,*(short *)(param_1 + 2) + 3,
                       (double)*(byte *)(param_1 + 0xe),0);
          FUN_016eeca0(param_2,param_3 + 0x1b8,1,*(short *)(param_1 + 2) + 1,0x4000000000000000,0);
        }
      }
      else {
        FUN_016eeca0(param_2,param_3 + 0x1b8,0,*(short *)(param_1 + 2) + 2,0x4000000000000000,0);
        FUN_016eeca0(param_2,param_3 + 0x1b8,0,*(short *)(param_1 + 2) + 3,
                     (double)*(byte *)(param_1 + 0xe),0);
      }
      *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x11) = *(undefined1 *)(param_1 + 0xe);
      if (*(char *)(param_1 + 0x310) == '\0') {
        FUN_016eebe0(param_2,param_3 + 0x1b8,0,*(short *)(param_1 + 2) + 1,0);
        uVar1 = FUN_0040c770();
        *(undefined1 *)(param_1 + 0xf) = uVar1;
        FUN_016eebe0(param_2,param_3 + 0x1b8,0,*(short *)(param_1 + 2) + 2,0);
        unaff_R13B = FUN_0040c770();
        if (*(char *)(param_1 + 0xe) == '\0') {
          *(undefined1 *)(param_1 + 0xf) = 3;
        }
      }
      (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 8) + 0x10))
                (*(longlong *)(param_1 + 0x18),param_2,param_3,0,0,param_4,
                 *(undefined1 *)(param_1 + 0xf),unaff_R13B);
    }
    else {
      FUN_016eeca0(param_2,param_3 + 0x1b8,0,*(short *)(param_1 + 2) + 2,0x4000000000000000,0);
      FUN_016eeca0(param_2,param_3 + 0x1b8,0,*(short *)(param_1 + 2) + 1,
                   (double)(int)*(char *)(param_1 + 0xf),0);
      FUN_016eeca0(param_2,param_3 + 0x1b8,1,*(short *)(param_1 + 2) + 1,0x4000000000000000,0);
      FUN_016eeca0(param_2,param_3 + 0x1b8,0,*(short *)(param_1 + 2) + 3,
                   (double)*(byte *)(param_1 + 0xe),0);
    }
  }
  return;
}

