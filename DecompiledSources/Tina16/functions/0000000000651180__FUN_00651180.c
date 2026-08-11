/* Ghidra address: 00651180 */
/* Ghidra symbol: FUN_00651180 */


void FUN_00651180(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  (**(code **)(*param_1 + -0x38))(param_1,param_2);
  if ((*(ushort *)((longlong)param_1 + 0x34) & 3) == 0) {
    lVar1 = param_1[0x1a];
    if ((*(int *)(lVar1 + 0x14) == 0) || ((int)param_1[0x13] <= *(int *)(lVar1 + 0x14))) {
      if ((*(int *)(lVar1 + 0x1c) != 0) && ((int)param_1[0x13] < *(int *)(lVar1 + 0x1c))) {
        *(int *)(lVar1 + 0x1c) = (int)param_1[0x13];
      }
    }
    else {
      *(int *)(lVar1 + 0x14) = (int)param_1[0x13];
    }
    if ((*(int *)(lVar1 + 0x10) == 0) ||
       (*(int *)((longlong)param_1 + 0x9c) <= *(int *)(lVar1 + 0x10))) {
      if ((*(int *)(lVar1 + 0x18) != 0) &&
         (*(int *)((longlong)param_1 + 0x9c) < *(int *)(lVar1 + 0x18))) {
        *(undefined4 *)(lVar1 + 0x18) = *(undefined4 *)((longlong)param_1 + 0x9c);
      }
    }
    else {
      *(undefined4 *)(lVar1 + 0x10) = *(undefined4 *)((longlong)param_1 + 0x9c);
    }
    lVar1 = *(longlong *)(param_2 + 0x10);
    if ((((lVar1 != 0) && (param_1[0x21] != 0)) &&
        ((*(uint *)((longlong)param_1 + 0xa4) & 0x400) == 0)) &&
       ((((*(uint *)(lVar1 + 0x20) & 1) == 0 && (*(int *)(lVar1 + 0x18) != 0)) &&
        (*(int *)(lVar1 + 0x1c) != 0)))) {
      FUN_0064fd30(param_1);
    }
  }
  return;
}

