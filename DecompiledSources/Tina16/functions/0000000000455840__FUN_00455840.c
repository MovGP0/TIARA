/* Ghidra address: 00455840 */
/* Ghidra symbol: FUN_00455840 */


void FUN_00455840(longlong param_1,int param_2)

{
  int iVar1;
  int local_18 [2];
  undefined1 local_10;
  
  iVar1 = param_2;
  if (param_2 < *(int *)(param_1 + 0x10)) {
    local_10 = 0;
    iVar1 = CONCAT31((int3)((uint)param_2 >> 8),1);
    local_18[0] = param_2;
    param_1 = FUN_0044d8d0(&PTR_FUN_004355d0,iVar1,PTR_PTR_02003a10,local_18,0);
    FUN_004134c0();
  }
  if (*(int *)(param_1 + 0x14) < iVar1) {
    local_10 = 0;
    local_18[0] = iVar1;
    param_1 = FUN_0044d8d0(&PTR_FUN_004355d0,1,PTR_PTR_02003a10,local_18,0);
    FUN_004134c0(param_1);
  }
  FUN_004169f0(param_1 + 8);
  return;
}

