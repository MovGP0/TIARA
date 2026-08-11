/* Ghidra address: 00b5b250 */
/* Ghidra symbol: FUN_00b5b250 */


void FUN_00b5b250(longlong param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  
  uVar5 = 0;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    uVar5 = *(undefined4 *)(*(longlong *)(param_1 + 0x38) + -4);
  }
  *(undefined4 *)(param_1 + 0x34) = uVar5;
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (*(int *)(param_1 + 0x30) < *(int *)(param_1 + 0x34)) {
    do {
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x34) - *(int *)(param_1 + 0x30);
      iVar2 = *(int *)(*(longlong *)(param_1 + 0x50) + 0xd38);
      iVar3 = *(int *)(*(longlong *)(param_1 + 0x50) + 0x130);
      if (iVar3 < iVar2 + *(int *)(param_1 + 0x2c)) {
        *(int *)(param_1 + 0x2c) = iVar3 - iVar2;
      }
      lVar4 = FUN_00414df0(param_1 + 0x38);
      FUN_00409a70(lVar4 + -1 + (longlong)(*(int *)(param_1 + 0x30) + 1),
                   *(longlong *)(param_1 + 0x50) + 0x134 +
                   (longlong)*(int *)(*(longlong *)(param_1 + 0x50) + 0xd38),
                   (longlong)*(int *)(param_1 + 0x2c));
      if (param_2 == '\0') {
        FUN_0040d200(*(longlong *)(param_1 + 0x50) + 0x934 +
                     (longlong)*(int *)(*(longlong *)(param_1 + 0x50) + 0xd38),
                     (longlong)*(int *)(param_1 + 0x2c),1);
      }
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x2c);
      piVar1 = (int *)(*(longlong *)(param_1 + 0x50) + 0xd38);
      *piVar1 = *piVar1 + *(int *)(param_1 + 0x2c);
      if ((*(int *)(*(longlong *)(param_1 + 0x50) + 0xd38) ==
           *(int *)(*(longlong *)(param_1 + 0x50) + 0x130)) ||
         (*(int *)(param_1 + 0x30) < *(int *)(param_1 + 0x34))) {
        FUN_00b5ae40(*(undefined8 *)(param_1 + 0x50));
      }
    } while (*(int *)(param_1 + 0x30) < *(int *)(param_1 + 0x34));
  }
  return;
}

