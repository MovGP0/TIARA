/* Ghidra address: 00660d90 */
/* Ghidra symbol: FUN_00660d90 */


void FUN_00660d90(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  code *local_38;
  undefined8 local_30;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  do {
    if (lVar1 == 0) {
      return;
    }
    iVar2 = FUN_00660cd0(lVar1);
    iVar3 = FUN_00660670(lVar1);
    if (iVar2 < iVar3) {
LAB_00660dd3:
      FUN_006608c0(param_1);
      local_30 = *(undefined8 *)(param_1 + 0x38);
      local_38 = FUN_00663cb0;
      FUN_006612d0(local_30,param_1,&local_38);
    }
    else {
      iVar2 = FUN_00660cd0(lVar1);
      iVar3 = FUN_006606d0(param_1);
      if (iVar3 < iVar2) goto LAB_00660dd3;
    }
    FUN_00660d90(lVar1);
    lVar1 = *(longlong *)(lVar1 + 0x18);
  } while( true );
}

