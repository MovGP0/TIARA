/* Ghidra address: 010e32a0 */
/* Ghidra symbol: FUN_010e32a0 */


void FUN_010e32a0(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  longlong local_res8 [4];
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  iVar5 = 0;
  do {
    uVar3 = FUN_00808070(*(undefined8 *)PTR_DAT_02005950,iVar5);
    cVar1 = FUN_004113d0(uVar3,&PTR_FUN_010dee68);
    if (cVar1 != '\0') {
      uVar3 = FUN_00808070(*(undefined8 *)PTR_DAT_02005950,iVar5);
      uVar3 = FUN_0065b870(uVar3);
      iVar2 = thunk_FUN_041de4d6(uVar3);
      if (iVar2 != 0) {
        if (local_res8[0] != 0) {
          lVar4 = FUN_00808070(*(undefined8 *)PTR_DAT_02005950,iVar5);
          iVar2 = FUN_00416db0(local_res8[0],*(undefined8 *)(lVar4 + 0x10));
          if (iVar2 == 0) goto LAB_010e3353;
        }
        uVar3 = FUN_00808070(*(undefined8 *)PTR_DAT_02005950,iVar5);
        uVar3 = FUN_004113f0(uVar3,&PTR_FUN_010dee68);
        FUN_00805200(uVar3);
      }
    }
LAB_010e3353:
    iVar5 = iVar5 + 1;
    iVar2 = FUN_00808090(*(undefined8 *)PTR_DAT_02005950);
    if (iVar2 <= iVar5) {
      FUN_00414480(local_res8);
      return;
    }
  } while( true );
}

