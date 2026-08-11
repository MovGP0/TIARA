/* Ghidra address: 00eae050 */
/* Ghidra symbol: FUN_00eae050 */


void FUN_00eae050(undefined8 param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 local_res8 [4];
  longlong *local_20;
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  cVar2 = FUN_00eb00d0(DAT_0202ea78,local_res8[0],&local_20);
  if (cVar2 != '\0') {
    iVar3 = (**(code **)(*local_20 + 0x28))();
    iVar5 = 0;
    if (-1 < iVar3 + -1) {
      do {
        uVar4 = (**(code **)(*local_20 + 0x30))(local_20,iVar5);
        FUN_00410f20(uVar4);
        iVar5 = iVar5 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    FUN_00410f20(local_20);
    lVar1 = DAT_0202ea70;
    if (DAT_0202ea70 != 0) {
      DAT_0202ea70 = 0;
      FUN_00410f20(lVar1);
    }
    DAT_0202ea68 = 0;
    FUN_00eafef0(DAT_0202ea78,local_res8[0]);
  }
  FUN_00414480(local_res8);
  return;
}

