/* Ghidra address: 00f48b10 */
/* Ghidra symbol: FUN_00f48b10 */


void FUN_00f48b10(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 local_res10 [3];
  short local_2a [5];
  
  local_2a[0] = 0;
  iVar3 = 0;
  local_res10[0] = param_2;
  for (lVar1 = param_1; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x38)) {
    iVar2 = FUN_00f48a00(lVar1);
    iVar3 = iVar3 + iVar2;
    local_2a[0] = local_2a[0] + 1;
  }
  iVar2 = FUN_01d31a40(local_res10[0]);
  if (iVar2 == 0) {
    FUN_01d31180(local_res10[0],0x110,0x10,iVar3 + 2);
    FUN_01d311c0(local_res10[0],local_2a,2);
    for (; param_1 != 0; param_1 = *(longlong *)(param_1 + 0x38)) {
      FUN_00f48a10(param_1,local_res10);
    }
  }
  return;
}

