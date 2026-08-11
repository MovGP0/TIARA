/* Ghidra address: 016d6ae0 */
/* Ghidra symbol: FUN_016d6ae0 */


int * FUN_016d6ae0(longlong param_1,int param_2,double param_3,double param_4)

{
  ulonglong uVar1;
  undefined2 uVar2;
  int *piVar3;
  longlong lVar4;
  
  if (*(char *)(param_1 + 0x3d) != '\0') {
    while (uVar1 = (longlong)
                   ((*(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x2c)) + *(int *)(param_1 + 0x38)
                   ) % (longlong)*(int *)(param_1 + 0x38),
          uVar1 = (ulonglong)(uint)((int)uVar1 >> 0x1f) << 0x20 | uVar1 & 0xffffffff,
          *(int *)(param_1 + 0x34) <= (int)((longlong)uVar1 / (longlong)*(int *)(param_1 + 0x30))) {
      *(undefined1 *)(param_1 + 0x3c) = 0;
      FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030,
                   (longlong)uVar1 % (longlong)*(int *)(param_1 + 0x30) & 0xffffffff);
    }
  }
  piVar3 = (int *)((longlong)param_2 / 1 & 0xffffffff);
  if (param_2 % 1 == 0) {
    if (*(char *)(param_1 + 0x3d) == '\0') {
      lVar4 = 0;
      if (*(longlong *)(param_1 + 0x40) != 0) {
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x40) + -8);
      }
      if (lVar4 < *(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x30)) {
        FUN_00419260(param_1 + 0x40,&DAT_004066a0,1,(longlong)(*(int *)(param_1 + 0x28) * 2));
      }
    }
    param_3 = param_3 * 32768.0;
    if (param_3 <= 32767.0) {
      if (-32768.0 <= param_3) {
        uVar2 = FUN_0040c770(param_3);
      }
      else {
        uVar2 = 0x8000;
      }
    }
    else {
      uVar2 = 0x7fff;
    }
    *(undefined2 *)(*(longlong *)(param_1 + 0x40) + (longlong)*(int *)(param_1 + 0x28) * 2) = uVar2;
    piVar3 = (int *)(param_1 + 0x28);
    *piVar3 = *piVar3 + 1;
    if ((*(char *)(param_1 + 0x3d) != '\0') &&
       (piVar3 = (int *)(ulonglong)*(uint *)(param_1 + 0x28),
       *(uint *)(param_1 + 0x28) == *(uint *)(param_1 + 0x38))) {
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
    if (*(int *)(param_1 + 0x30) == 2) {
      param_4 = param_4 * 32768.0;
      if (param_4 <= 32767.0) {
        if (-32768.0 <= param_4) {
          uVar2 = FUN_0040c770(param_4);
        }
        else {
          uVar2 = 0x8000;
        }
      }
      else {
        uVar2 = 0x7fff;
      }
      *(undefined2 *)(*(longlong *)(param_1 + 0x40) + (longlong)*(int *)(param_1 + 0x28) * 2) =
           uVar2;
      piVar3 = (int *)(param_1 + 0x28);
      *piVar3 = *piVar3 + 1;
      if ((*(char *)(param_1 + 0x3d) != '\0') &&
         (piVar3 = (int *)(ulonglong)*(uint *)(param_1 + 0x28),
         *(uint *)(param_1 + 0x28) == *(uint *)(param_1 + 0x38))) {
        *(undefined4 *)(param_1 + 0x28) = 0;
      }
    }
  }
  if ((*(char *)(param_1 + 0x3d) != '\0') &&
     (uVar1 = (longlong)
              ((*(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x2c)) + *(int *)(param_1 + 0x38)) %
              (longlong)*(int *)(param_1 + 0x38),
     uVar1 = (longlong)((ulonglong)(uint)((int)uVar1 >> 0x1f) << 0x20 | uVar1 & 0xffffffff) /
             (longlong)*(int *)(param_1 + 0x30), piVar3 = (int *)(uVar1 & 0xffffffff),
     *(int *)(param_1 + 0x34) <= (int)uVar1)) {
    *(undefined1 *)(param_1 + 0x3c) = 0;
  }
  return piVar3;
}

