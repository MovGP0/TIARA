/* Ghidra address: 00b5af60 */
/* Ghidra symbol: FUN_00b5af60 */


undefined8 FUN_00b5af60(longlong param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  
  FUN_004144d0(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x44) = 0;
  FUN_00415d10(param_1 + 0x48,*(undefined4 *)(param_1 + 0x40),0);
  if (*(int *)(param_1 + 0x44) < *(int *)(param_1 + 0x40)) {
    do {
      *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x44);
      iVar2 = *(int *)(*(longlong *)(param_1 + 0x70) + 0xd38);
      iVar3 = *(int *)(*(longlong *)(param_1 + 0x70) + 0x130);
      if (iVar3 < iVar2 + *(int *)(param_1 + 0x3c)) {
        *(int *)(param_1 + 0x3c) = iVar3 - iVar2;
      }
      if (0 < *(int *)(param_1 + 0x3c)) {
        if (param_2 == '\0') {
          lVar5 = FUN_00414df0(param_1 + 0x48);
          FUN_00409a70(*(longlong *)(param_1 + 0x70) + 0x134 +
                       (longlong)*(int *)(*(longlong *)(param_1 + 0x70) + 0xd38),
                       lVar5 + -1 + (longlong)(*(int *)(param_1 + 0x44) + 1),
                       (longlong)*(int *)(param_1 + 0x3c));
        }
        else {
          lVar5 = FUN_00414df0(param_1 + 0x48);
          FUN_00409a70(*(longlong *)(param_1 + 0x70) + 0x534 +
                       (longlong)*(int *)(*(longlong *)(param_1 + 0x70) + 0xd38),
                       lVar5 + -1 + (longlong)(*(int *)(param_1 + 0x44) + 1),
                       (longlong)*(int *)(param_1 + 0x3c));
        }
      }
      piVar1 = (int *)(*(longlong *)(param_1 + 0x70) + 0xd38);
      *piVar1 = *piVar1 + *(int *)(param_1 + 0x3c);
      *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + *(int *)(param_1 + 0x3c);
      if (*(int *)(param_1 + 0x44) < *(int *)(param_1 + 0x40)) {
        cVar4 = FUN_00b5add0(*(undefined8 *)(param_1 + 0x70));
        *(char *)(*(longlong *)(param_1 + 0x70) + 0x12e) = cVar4;
        if (cVar4 == '\0') {
          return 0;
        }
      }
    } while (*(int *)(param_1 + 0x44) < *(int *)(param_1 + 0x40));
  }
  return 1;
}

