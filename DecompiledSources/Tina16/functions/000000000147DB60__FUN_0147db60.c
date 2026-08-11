/* Ghidra address: 0147db60 */
/* Ghidra symbol: FUN_0147db60 */


ulonglong FUN_0147db60(undefined8 param_1)

{
  ulonglong uVar1;
  undefined8 local_res8 [4];
  longlong local_10;
  
  local_10 = 0;
  local_res8[0] = param_1;
  FUN_00456ab0(local_res8,&local_10,&LAB_0147dbe0,0);
  uVar1 = 0;
  if (local_10 != 0) {
    uVar1 = *(ulonglong *)(local_10 + -8);
  }
  FUN_00419430(&local_10,&DAT_004210c0);
  return uVar1 & 0xffffffff;
}

