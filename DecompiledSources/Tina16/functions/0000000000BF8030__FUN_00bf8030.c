/* Ghidra address: 00bf8030 */
/* Ghidra symbol: FUN_00bf8030 */


void FUN_00bf8030(longlong param_1,longlong param_2,undefined4 param_3,int param_4,int param_5,
                 int param_6,byte param_7)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_68 [47];
  undefined1 local_39;
  
  if ((param_6 == 0x1fffffff) ||
     ((*(int *)(*(longlong *)(param_1 + 0x130) + 0x548) != 0x1fffffff &&
      (*(char *)(param_1 + 0xb7) != '\0')))) {
    param_6 = FUN_00bf7050(param_1);
  }
  if (param_5 == 0x1fffffff) {
    lVar4 = FUN_00bf2c10(*(undefined8 *)(param_1 + 0x130));
    param_5 = *(int *)(lVar4 + 0x28);
  }
  bVar1 = false;
  local_39 = 0;
  if (0 < *(int *)(param_1 + 0xc0)) {
    if (((*(byte *)(param_1 + 0xe8) == param_7) ||
        ((((param_7 & 4) == 0 && ((*(byte *)(param_1 + 0xe8) & 4) == 0)) &&
         (cVar2 = FUN_00bf7fe0(auStack_68), cVar2 != '\0')))) &&
       ((((*(char *)(param_1 + 0x7a) != '\0' &&
          ((*(uint *)(*(longlong *)(param_1 + 0x130) + 0x63a) & 0x800000) == 0)) ||
         (*(char *)(param_1 + 0x7b) != '\0')) ||
        ((*(int *)(param_1 + 0xe4) == param_6 &&
         ((*(int *)(param_1 + 0xe0) == param_5 || (cVar2 = FUN_00bf7fe0(auStack_68), cVar2 != '\0'))
         )))))) {
      bVar1 = true;
    }
    if (!bVar1) {
      FUN_00bf7a50(param_1,0);
    }
  }
  if (bVar1) {
    iVar3 = *(int *)(param_1 + 0xc0) + param_4;
    if (*(int *)(param_1 + 0xc4) < iVar3) {
      iVar3 = iVar3 + 0x20;
      *(int *)(param_1 + 0xc4) = iVar3;
      FUN_004169f0(param_1 + 0xd0,iVar3);
    }
    iVar5 = 1;
    iVar3 = param_4;
    if (0 < param_4) {
      do {
        lVar4 = FUN_00414de0(param_1 + 0xd0);
        *(undefined2 *)(lVar4 + -2 + (longlong)(*(int *)(param_1 + 0xc0) + iVar5) * 2) =
             *(undefined2 *)(param_2 + -2 + (longlong)iVar5 * 2);
        iVar5 = iVar5 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xc0) + param_4;
  }
  else {
    *(int *)(param_1 + 0xc0) = param_4;
    if (*(int *)(param_1 + 0xc4) < param_4) {
      *(int *)(param_1 + 0xc4) = param_4 + 0x20;
      FUN_004169f0(param_1 + 0xd0,param_4 + 0x20);
    }
    iVar3 = 1;
    if (0 < param_4) {
      do {
        lVar4 = FUN_00414de0(param_1 + 0xd0);
        *(undefined2 *)(lVar4 + -2 + (longlong)iVar3 * 2) =
             *(undefined2 *)(param_2 + -2 + (longlong)iVar3 * 2);
        iVar3 = iVar3 + 1;
        param_4 = param_4 + -1;
      } while (param_4 != 0);
    }
    *(undefined4 *)(param_1 + 200) = param_3;
    *(int *)(param_1 + 0xe0) = param_5;
    *(int *)(param_1 + 0xe4) = param_6;
    *(byte *)(param_1 + 0xe8) = param_7;
  }
  return;
}

