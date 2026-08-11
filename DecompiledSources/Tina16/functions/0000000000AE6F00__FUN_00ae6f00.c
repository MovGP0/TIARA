/* Ghidra address: 00ae6f00 */
/* Ghidra symbol: FUN_00ae6f00 */


undefined1 FUN_00ae6f00(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  longlong local_res8 [4];
  undefined1 local_19;
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  *param_2 = 0xffffffff;
  iVar3 = 0;
  if (local_res8[0] != 0) {
    iVar3 = *(int *)(local_res8[0] + -4);
  }
  do {
    if (iVar3 < 3) {
      local_19 = 0;
LAB_00ae6fc0:
      FUN_00414480(local_res8);
      return local_19;
    }
    FUN_004169f0(local_res8,iVar3 + -1);
    cVar1 = (**(code **)(**(longlong **)PTR_DAT_020041e0 + 0x140))
                      (*(longlong **)PTR_DAT_020041e0,local_res8[0],param_2);
    if (cVar1 != '\0') {
      lVar2 = (**(code **)(**(longlong **)PTR_DAT_020041e0 + 0x30))
                        (*(longlong **)PTR_DAT_020041e0,*param_2);
      *param_2 = *(undefined4 *)(lVar2 + 8);
      FUN_00416dc0(param_3,*param_3,iVar3 + 1,0x7fffffff);
      local_19 = 1;
      goto LAB_00ae6fc0;
    }
    iVar3 = iVar3 + -1;
  } while( true );
}

