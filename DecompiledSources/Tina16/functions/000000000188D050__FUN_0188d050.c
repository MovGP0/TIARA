/* Ghidra address: 0188d050 */
/* Ghidra symbol: FUN_0188d050 */


int FUN_0188d050(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined8 local_res10 [3];
  int local_1c;
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_1c = -1;
  iVar2 = 0;
  iVar5 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x10);
  iVar1 = local_1c;
  if (-1 < iVar5 + -1) {
    do {
      lVar4 = FUN_0188d030(param_1,iVar2);
      iVar3 = FUN_0043e6d0(*(undefined8 *)(lVar4 + 0x60),local_res10[0]);
      iVar1 = iVar2;
      if (iVar3 == 0) break;
      iVar2 = iVar2 + 1;
      iVar5 = iVar5 + -1;
      iVar1 = local_1c;
    } while (iVar5 != 0);
  }
  local_1c = iVar1;
  FUN_00414480(local_res10);
  return local_1c;
}

