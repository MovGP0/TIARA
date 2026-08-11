/* Ghidra address: 0180d800 */
/* Ghidra symbol: FUN_0180d800 */


undefined8 FUN_0180d800(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  longlong local_res8 [4];
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  iVar2 = FUN_00414cb0(local_res8[0]);
  iVar5 = 1;
  if (0 < iVar2) {
    do {
      cVar1 = FUN_0043e100(*(undefined2 *)(local_res8[0] + -2 + (longlong)iVar5 * 2),&DAT_0180d908);
      if (cVar1 != '\0') {
        lVar4 = FUN_00414de0(local_res8);
        *(undefined2 *)(lVar4 + -2 + (longlong)iVar5 * 2) =
             *(undefined2 *)(PTR_DAT_02004830 + 0x17a);
      }
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  while (iVar2 = FUN_004170c0(&LAB_0180d934,local_res8[0],1), iVar2 != 0) {
    uVar3 = FUN_004170c0(&LAB_0180d934,local_res8[0],1);
    FUN_00416e20(local_res8,uVar3,1);
  }
  uVar6 = FUN_00448630(local_res8[0]);
  FUN_00414480(local_res8);
  return uVar6;
}

