/* Ghidra address: 00a026e0 */
/* Ghidra symbol: FUN_00a026e0 */


void FUN_00a026e0(longlong param_1)

{
  short sVar1;
  ushort uVar2;
  undefined8 uVar3;
  char cVar4;
  undefined1 auStack_38 [32];
  undefined8 *local_18;
  int local_c;
  
  local_18 = (undefined8 *)(param_1 + 0x28);
  uVar3 = *local_18;
  *local_18 = 0;
  FUN_00410f20(uVar3);
  local_c = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x10);
  if (1 < local_c) {
    sVar1 = **(short **)(param_1 + 0x10);
    if (sVar1 == -0x4411) {
      if (2 < local_c) {
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 2;
        if (**(char **)(param_1 + 0x10) == -0x41) {
          *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
          FUN_00a02a60(param_1,0xfde9);
          *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) | 1;
          *(undefined4 *)(param_1 + 0x34) = 3;
          return;
        }
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -2;
      }
    }
    else {
      if (sVar1 == -0x101) {
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 2;
        FUN_00a02a60(param_1,0x4b0);
        *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) | 1;
        *(undefined4 *)(param_1 + 0x34) = 2;
        return;
      }
      if (sVar1 == -2) {
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 2;
        FUN_00a02a60(param_1,0x4b1);
        *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) | 1;
        *(undefined4 *)(param_1 + 0x34) = 2;
        return;
      }
    }
    uVar2 = **(ushort **)(param_1 + 0x10);
    if ((uVar2 & 0xff) == 0) {
      if ((uVar2 & 0xff00) != 0) {
        FUN_00a02a60(param_1,0x4b1);
        *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) | 1;
        return;
      }
    }
    else if ((uVar2 & 0xff00) == 0) {
      FUN_00a02a60(param_1,0x4b0);
      *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) | 1;
      return;
    }
  }
  cVar4 = FUN_00a02640(auStack_38);
  if (cVar4 == '\0') {
    FUN_00a02a60(param_1,0);
  }
  else {
    FUN_00a02a60(param_1,0xc42c);
    *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) | 1;
  }
  return;
}

