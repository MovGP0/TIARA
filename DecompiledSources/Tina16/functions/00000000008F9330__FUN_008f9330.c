/* Ghidra address: 008f9330 */
/* Ghidra symbol: FUN_008f9330 */


void FUN_008f9330(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_30;
  undefined8 local_20;
  
  local_20 = 0;
  local_30 = param_2;
  do {
    FUN_00414be0(&local_20,
                 *(undefined8 *)
                  (*(longlong *)(param_1 + 0x18) +
                  (longlong)(int)((uint)(local_30 + param_3) >> 1) * 0x10));
    iVar2 = local_30;
    iVar3 = param_3;
    do {
      while (iVar1 = FUN_008f7250(*(undefined8 *)
                                   (*(longlong *)(param_1 + 0x18) + (longlong)iVar2 * 0x10),local_20
                                 ), iVar1 < 0) {
        iVar2 = iVar2 + 1;
      }
      while (iVar1 = FUN_008f7250(*(undefined8 *)
                                   (*(longlong *)(param_1 + 0x18) + (longlong)iVar3 * 0x10),local_20
                                 ), 0 < iVar1) {
        iVar3 = iVar3 + -1;
      }
      if (iVar2 <= iVar3) {
        FUN_008f8b70(param_1,iVar2,iVar3);
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + -1;
      }
    } while (iVar2 <= iVar3);
    if (local_30 < iVar3) {
      FUN_008f9330(param_1,local_30,iVar3);
    }
    local_30 = iVar2;
  } while (iVar2 < param_3);
  FUN_00414520(&local_20);
  return;
}

