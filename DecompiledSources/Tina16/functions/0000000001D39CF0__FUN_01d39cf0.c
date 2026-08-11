/* Ghidra address: 01d39cf0 */
/* Ghidra symbol: FUN_01d39cf0 */


void FUN_01d39cf0(ulonglong *param_1)

{
  longlong lVar1;
  ulonglong local_39;
  ulonglong uStack_31;
  ulonglong uStack_29;
  ulonglong uStack_21;
  undefined1 uStack_19;
  
  local_39 = *param_1;
  uStack_31 = param_1[1];
  uStack_29 = param_1[2];
  uStack_21 = param_1[3];
  uStack_19 = (undefined1)param_1[4];
  FUN_004179d0(&local_39,&DAT_01d36af8);
  lVar1 = FUN_01d3a780(DAT_03567a70,local_39 & 0xffff);
  FUN_01d396b0(&local_39,0,*(byte *)(lVar1 + 0xb6) - 1);
  FUN_00417740(&local_39,&DAT_01d36af8);
  return;
}

