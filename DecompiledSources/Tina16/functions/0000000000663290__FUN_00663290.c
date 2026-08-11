/* Ghidra address: 00663290 */
/* Ghidra symbol: FUN_00663290 */


void FUN_00663290(longlong param_1,char param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  code *local_48;
  longlong local_40;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  if (((((*(ushort *)(*(longlong *)(param_1 + 0x28) + 0x34) & 1) == 0) &&
       (*(longlong *)(param_1 + 0x58) == 0)) && (*(longlong *)(param_1 + 0x90) != 0)) &&
     (iVar3 = FUN_006591f0(*(longlong *)(param_1 + 0x28)), 0 < iVar3)) {
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0xe0))(*(longlong **)(param_1 + 0x28),&local_38);
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x1a8))(*(longlong **)(param_1 + 0x28),&local_38)
    ;
    if ((param_2 == '\0') && (cVar2 = FUN_004238a0(&local_38,param_1 + 0x38), cVar2 != '\0')) {
      return;
    }
    *(ulonglong *)(param_1 + 0x38) = CONCAT44(local_34,local_38);
    *(ulonglong *)(param_1 + 0x40) = CONCAT44(local_2c,local_30);
    lVar1 = *(longlong *)(param_1 + 0x90);
    if (*(char *)(lVar1 + 0x20) == '\x01') {
      *(int *)(lVar1 + 0x40) = local_30 - local_38;
      *(int *)(param_1 + 0x98) = local_2c - local_34;
    }
    else if (*(char *)(lVar1 + 0x20) == '\x02') {
      *(int *)(lVar1 + 0x40) = local_2c - local_34;
      *(int *)(param_1 + 0x98) = local_30 - local_38;
    }
    iVar3 = FUN_00659110(*(undefined8 *)(param_1 + 0x28));
    if ((0 < iVar3) && (FUN_00663a70(param_1,0), *(int *)(param_1 + 0x9c) == 0)) {
      local_48 = FUN_00663cb0;
      local_40 = param_1;
      FUN_006612d0(param_1,0,&local_48);
    }
  }
  return;
}

