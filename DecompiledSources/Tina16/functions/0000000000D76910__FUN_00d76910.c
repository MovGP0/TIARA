/* Ghidra address: 00d76910 */
/* Ghidra symbol: FUN_00d76910 */


void FUN_00d76910(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_48 [16];
  undefined1 local_38 [24];
  
  if (*(char *)(param_1 + 0x8c) == '\0') {
    return;
  }
  if (*(int *)(param_1 + 0x84) < 1) {
    return;
  }
  if (*(int *)(param_1 + 0x88) < 1) {
    return;
  }
  cVar1 = FUN_00423b30(param_3);
  if (cVar1 == '\0') {
    FUN_00d77cb0(param_1,local_48);
    cVar1 = FUN_004239d0(local_38,local_48,param_3);
    if (cVar1 == '\0') {
      return;
    }
  }
  if (*(char *)(param_1 + 0x79) != '\x17') {
    if (*(char *)(param_1 + 0x79) != '\x19') {
      iVar2 = FUN_00d77c90(param_1);
      if ((iVar2 == 0) ||
         ((iVar2 = FUN_00d77c90(param_1), 0 < iVar2 && (*(char *)(param_1 + 0xd1) != '\0')))) {
        if (*(int *)(param_1 + 0x114) == 0x1fffffff) {
          if (DAT_01eceec4 != '\0') {
            FUN_00d77cb0(param_1,local_48);
            uVar3 = FUN_00d58450(&DAT_007f007f);
            FUN_00d57cd0(param_2,local_48,uVar3);
          }
        }
        else {
          FUN_00d77cb0(param_1,local_48);
          FUN_00d57cd0(param_2,local_48,*(undefined4 *)(param_1 + 0x114));
        }
        FUN_00d76dd0(param_1,param_2);
      }
      FUN_00d76ce0(param_1,param_2,param_3);
      return;
    }
    return;
  }
  return;
}

