/* Ghidra address: 008179c0 */
/* Ghidra symbol: FUN_008179c0 */


void FUN_008179c0(longlong param_1,int param_2,int param_3)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 local_30 [2];
  
  if (*(char *)(param_1 + 0xab) == '\0') {
    local_30[0] = FUN_00664d10(*(undefined8 *)PTR_DAT_020054d8);
    cVar1 = FUN_00422c40(param_1 + 0xb4,local_30);
    if ((cVar1 == '\0') ||
       ((*(char *)(param_1 + 0x9a) == '\0' && (*(char *)(param_1 + 0xa8) == '\0')))) {
      uVar5 = FUN_00664d10(*(undefined8 *)PTR_DAT_020054d8);
      *(undefined8 *)(param_1 + 0xb4) = uVar5;
      if ((param_2 < 0) || (param_3 < 0)) {
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
      *(undefined1 *)(param_1 + 0xa9) = uVar2;
      if (*(char *)(param_1 + 0xa8) == '\0') {
        uVar4 = FUN_00814e80(param_1,param_2,param_3);
        *(undefined4 *)(param_1 + 8) = uVar4;
      }
      else {
        iVar3 = FUN_00814e80(param_1,param_2,param_3);
        if (iVar3 != -1) {
          uVar4 = FUN_00814e80(param_1,param_2,param_3);
          *(undefined4 *)(param_1 + 8) = uVar4;
        }
      }
      if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0xb0)) {
        FUN_00814f60(param_1);
        *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_1 + 8);
        if ((*(char *)(param_1 + 0xa8) != '\0') && (*(longlong *)(param_1 + 0xa0) == 0)) {
          iVar3 = FUN_007e2ef0(*(undefined8 *)
                                (*(longlong *)(param_1 + 0x40) + 8 +
                                (longlong)*(int *)(param_1 + 8) * 0x20));
          if (iVar3 != 0) {
            FUN_00817ea0(param_1);
          }
        }
      }
      if (*(char *)(param_1 + 0xc1) != '\0') {
        iVar3 = FUN_00814e10(param_1,param_2,param_3);
        *(int *)(param_1 + 0x48) = iVar3;
        if (iVar3 != *(int *)(param_1 + 0x4c)) {
          FUN_00814f60(param_1);
          *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0x48);
        }
        if (*(int *)(param_1 + 0x48) == -1) {
          *(undefined4 *)(param_1 + 0xbc) = 0xffffffff;
        }
      }
    }
  }
  return;
}

