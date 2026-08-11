/* Ghidra address: 00c406f0 */
/* Ghidra symbol: FUN_00c406f0 */


bool FUN_00c406f0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  bool bVar4;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  iVar3 = 0;
  while( true ) {
    if (iVar3 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x10)) {
      lVar2 = FUN_004aeac0(*(longlong *)(param_1 + 0x18),iVar3);
      iVar1 = FUN_0044fdb0(local_res10[0],*(undefined8 *)(lVar2 + 0x20),0);
      bVar4 = iVar1 != 0;
    }
    else {
      bVar4 = false;
    }
    if (!bVar4) break;
    iVar3 = iVar3 + 1;
  }
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x10);
  FUN_00414480(local_res10);
  return iVar3 == iVar1;
}

