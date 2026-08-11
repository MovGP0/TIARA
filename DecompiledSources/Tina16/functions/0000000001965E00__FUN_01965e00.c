/* Ghidra address: 01965e00 */
/* Ghidra symbol: FUN_01965e00 */


void FUN_01965e00(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar3;
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  if ((*(int *)(*(longlong *)(param_1 + 0x1c0) + 0x28) != 0x1fffffff) &&
     (*(double *)(*(longlong *)(param_1 + 0x1c0) + 0x40) != 0.0)) {
    lVar2 = *(longlong *)(param_1 + 0x288);
    FUN_005fdcb0(*(undefined8 *)(lVar2 + 0x80),0);
    if (*(int *)(param_1 + 0x2c0) == 0x1fffffff) {
      FUN_005fdcb0(*(undefined8 *)(lVar2 + 0x80),1);
    }
    else {
      FUN_005fdab0(*(undefined8 *)(lVar2 + 0x80),*(int *)(param_1 + 0x2c0));
    }
    FUN_005fd4e0(*(undefined8 *)(lVar2 + 0x78),
                 *(undefined4 *)(*(longlong *)(param_1 + 0x1c0) + 0x28));
    FUN_005fd6d0(*(undefined8 *)(lVar2 + 0x78),1);
    cVar1 = *(char *)(*(longlong *)(param_1 + 0x1c0) + 0x3c);
    if (cVar1 == '\x05') {
      FUN_005fd670(*(undefined8 *)(lVar2 + 0x78),0);
    }
    else {
      FUN_005fd670(*(undefined8 *)(lVar2 + 0x78),cVar1);
    }
    FUN_0195aad0(param_1,*(undefined4 *)(param_1 + 0x248),*(undefined4 *)(param_1 + 0x24c),
                 *(undefined4 *)(param_1 + 0x250),CONCAT44(uVar3,*(undefined4 *)(param_1 + 0x254)),
                 *(undefined4 *)(param_1 + 0x260));
    if (*(char *)(param_1 + 0x2cd) != '\0') {
      FUN_01965850(param_1,(double)*(int *)(param_1 + 0x250),(double)*(int *)(param_1 + 0x254),
                   (double)*(int *)(param_1 + 0x248),(double)*(int *)(param_1 + 0x24c));
    }
    if (*(char *)(param_1 + 0x2c5) != '\0') {
      FUN_01965850(param_1,(double)*(int *)(param_1 + 0x248),(double)*(int *)(param_1 + 0x24c),
                   (double)*(int *)(param_1 + 0x250),(double)*(int *)(param_1 + 0x254));
    }
  }
  return;
}

