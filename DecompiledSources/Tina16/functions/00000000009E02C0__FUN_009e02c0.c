/* Ghidra address: 009e02c0 */
/* Ghidra symbol: FUN_009e02c0 */


undefined8 FUN_009e02c0(undefined8 param_1,longlong param_2,char param_3)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong local_res10 [3];
  undefined8 local_28;
  undefined8 local_20;
  
  local_28 = 0;
  local_20 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  iVar4 = 1;
LAB_009e03be:
  do {
    iVar2 = 0;
    if (local_res10[0] != 0) {
      iVar2 = *(int *)(local_res10[0] + -4);
    }
    if (iVar2 < iVar4) {
      FUN_00414ad0(param_1,local_res10[0]);
      FUN_00414560(&local_28,2);
      FUN_00414480(local_res10);
      return param_1;
    }
    if (param_3 != '\0') {
      FUN_00416780(&local_20,*(undefined2 *)(local_res10[0] + -2 + (longlong)iVar4 * 2));
      iVar2 = FUN_004170c0(local_20,L":/\\><|?*\"#$+%!`&{}=@\'",1);
      if (0 < iVar2) {
        FUN_00416e20(local_res10,iVar4,1);
        goto LAB_009e03be;
      }
    }
    if (*(short *)(local_res10[0] + -2 + (longlong)iVar4 * 2) == *(short *)PTR_DAT_020044e8) {
      lVar3 = FUN_00414de0(local_res10);
      *(undefined2 *)(lVar3 + -2 + (longlong)iVar4 * 2) = 0x5f;
    }
    else {
      uVar1 = *(ushort *)(local_res10[0] + -2 + (longlong)iVar4 * 2);
      if (uVar1 < 0x80) {
        FUN_00416780(&local_28,uVar1);
        iVar2 = FUN_004170c0(local_28,L":/\\><|?*\"#$+%!`&{}=@\'",1);
        if (0 < iVar2) goto LAB_009e03a9;
        iVar4 = iVar4 + 1;
      }
      else {
LAB_009e03a9:
        lVar3 = FUN_00414de0(local_res10);
        *(undefined2 *)(lVar3 + -2 + (longlong)iVar4 * 2) = 0x2d;
      }
    }
  } while( true );
}

