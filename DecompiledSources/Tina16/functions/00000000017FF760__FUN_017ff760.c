/* Ghidra address: 017ff760 */
/* Ghidra symbol: FUN_017ff760 */


undefined8 FUN_017ff760(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 local_res8 [4];
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 local_20;
  
  local_30 = auStack_58;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  iVar1 = FUN_004170c0(&DAT_017ff8c4,local_res8[0],1);
  if ((iVar1 == 0) || (*(short *)(PTR_DAT_02004830 + 0x17a) == 0x2e)) {
    iVar1 = FUN_004170c0(&LAB_017ff8d4,local_res8[0],1);
    if ((iVar1 != 0) && (*(short *)(PTR_DAT_02004830 + 0x17a) != 0x2c)) {
      lVar2 = FUN_00414de0(local_res8);
      iVar1 = FUN_004170c0(&LAB_017ff8d4,local_res8[0],1);
      *(undefined2 *)(lVar2 + -2 + (longlong)iVar1 * 2) = *(undefined2 *)(PTR_DAT_02004830 + 0x17a);
    }
  }
  else {
    lVar2 = FUN_00414de0(local_res8);
    iVar1 = FUN_004170c0(&DAT_017ff8c4,local_res8[0],1);
    *(undefined2 *)(lVar2 + -2 + (longlong)iVar1 * 2) = *(undefined2 *)(PTR_DAT_02004830 + 0x17a);
  }
  local_20 = FUN_00448650(local_res8[0],PTR_DAT_02004830);
  FUN_00414480(local_res8);
  return local_20;
}

