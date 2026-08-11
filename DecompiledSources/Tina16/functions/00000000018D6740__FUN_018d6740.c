/* Ghidra address: 018d6740 */
/* Ghidra symbol: FUN_018d6740 */


ulonglong FUN_018d6740(longlong param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  
  if (*(int *)(*(longlong *)(param_1 + 0x50) + 0x4c) < *(int *)(param_1 + 0x34) + param_2) {
    param_2 = *(int *)(*(longlong *)(param_1 + 0x50) + 0x4c) - *(int *)(param_1 + 0x34);
  }
  if (*(char *)(*(longlong *)(param_1 + 0x50) + 0xb8) == '\0') {
    uVar3 = FUN_005ffa40(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x98));
    lVar4 = FUN_00415f70(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x90));
    iVar2 = thunk_FUN_04193722(uVar3,lVar4 + (longlong)*(int *)(param_1 + 0x34) * 2,param_2,0,0,
                               *(longlong *)
                                (*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x80) + 0x38) +
                               (longlong)*(int *)(param_1 + 0x34) * 4,param_1 + 0x38);
    uVar5 = CONCAT71((int7)((ulonglong)uVar3 >> 8),iVar2 != 0);
  }
  else {
    uVar3 = FUN_005ffa40(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x98));
    lVar4 = FUN_00415ab0(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x40));
    iVar2 = thunk_FUN_041cf317(uVar3,lVar4 + *(int *)(param_1 + 0x34),param_2,0,0,
                               *(longlong *)
                                (*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x80) + 0x38) +
                               (longlong)*(int *)(param_1 + 0x34) * 4,param_1 + 0x38);
    uVar5 = CONCAT71((int7)((ulonglong)uVar3 >> 8),iVar2 != 0);
  }
  if ((char)uVar5 == '\0') {
    if (*(int *)(param_1 + 0x30) < 0x2001) {
      uVar5 = CONCAT71((int7)(uVar5 >> 8),1);
    }
    else {
      *(int *)(param_1 + 0x30) = param_2 / 2;
    }
  }
  else {
    if (*(int *)(param_1 + 0x2c) != 0) {
      iVar2 = *(int *)(param_1 + 0x34);
      iVar6 = *(int *)(param_1 + 0x34) + param_2 + -1;
      if (iVar2 <= iVar6) {
        iVar6 = (iVar6 - iVar2) + 1;
        do {
          piVar1 = (int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x80) + 0x38)
                          + (longlong)iVar2 * 4);
          *piVar1 = *piVar1 + *(int *)(param_1 + 0x2c);
          iVar2 = iVar2 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
    }
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + param_2;
    uVar5 = (ulonglong)
            CONCAT31((int3)((uint)*(int *)(param_1 + 0x34) >> 8),
                     *(int *)(*(longlong *)(param_1 + 0x50) + 0x4c) <= *(int *)(param_1 + 0x34));
    *(undefined4 *)(param_1 + 0x2c) =
         *(undefined4 *)
          (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x80) + 0x38) +
          (longlong)(*(int *)(param_1 + 0x34) + -1) * 4);
  }
  return uVar5 & 0xffffffff;
}

