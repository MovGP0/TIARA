/* Ghidra address: 00ab2450 */
/* Ghidra symbol: FUN_00ab2450 */


int FUN_00ab2450(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,int param_5
                )

{
  int *piVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_20 = auStack_48;
  piVar1 = (int *)(*(longlong *)(param_1 + 0x18) + 0x2d8);
  *piVar1 = *piVar1 + 1;
  local_10 = *(int *)(param_1 + 0x74);
  local_c = local_10 + *(int *)(param_1 + 0x88);
  local_18 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x94);
  local_14 = local_10 - local_18;
  *(int *)(param_1 + 0x14c) = param_5;
  *(int *)(param_1 + 0x94) = local_10;
  *(int *)(param_1 + 0x90) = param_5;
  *(int *)(param_1 + 0x98) = param_5 + *(int *)(param_1 + 300);
  *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x94) + *(int *)(param_1 + 0x8c);
  if (((*(int *)(param_3 + 4) <= local_14 + *(int *)(param_1 + 0x8c)) &&
      (local_14 < *(int *)(param_3 + 0xc))) ||
     (*(char *)(*(longlong *)(param_1 + 0x18) + 0x92) != '\0')) {
    lVar2 = *(longlong *)(param_1 + 0x18);
    if ((((*(char *)(lVar2 + 0x92) == '\0') || (*(int *)(lVar2 + 0x2d8) != 1)) ||
        ((*(char *)(param_1 + 0xd0) == '\0' || (*(int *)(lVar2 + 0x218) <= local_10)))) ||
       ((lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x2f8), lVar2 != 0 &&
        (lVar2 != param_1)))) {
      FUN_00ab1210(auStack_48,param_5,local_10,local_18);
    }
    else {
      local_20 = auStack_48;
      FUN_00ab2360(auStack_48,param_5,local_10,local_18);
    }
  }
  piVar1 = (int *)(*(longlong *)(param_1 + 0x18) + 0x2d8);
  *piVar1 = *piVar1 + -1;
  return local_c;
}

