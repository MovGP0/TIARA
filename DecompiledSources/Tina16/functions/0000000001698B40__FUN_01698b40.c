/* Ghidra address: 01698b40 */
/* Ghidra symbol: FUN_01698b40 */


void FUN_01698b40(undefined8 param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_2 != (int *)0x0) {
    if ((*param_2 == 2) || (*param_2 == 3)) {
      *(char *)((longlong)param_2 + 0x52) = (char)param_3;
    }
    if ((param_2[0x13] == 0x32) && (*(longlong *)(param_2 + 0x18) != 0)) {
      iVar1 = 0;
      iVar2 = param_2[0x15];
      if (-1 < iVar2 + -1) {
        do {
          FUN_01698b40(param_1,*(undefined8 *)
                                (*(longlong *)(param_2 + 0x18) + (longlong)iVar1 * 0x10),param_3);
          FUN_01698b40(param_1,*(undefined8 *)
                                (*(longlong *)(param_2 + 0x18) + 8 + (longlong)iVar1 * 0x10),param_3
                      );
          iVar1 = iVar1 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
    }
    FUN_01698b40(param_1,*(undefined8 *)(param_2 + 2),param_3);
    FUN_01698b40(param_1,*(undefined8 *)(param_2 + 4),param_3);
  }
  return;
}

