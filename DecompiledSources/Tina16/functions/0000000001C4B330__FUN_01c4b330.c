/* Ghidra address: 01c4b330 */
/* Ghidra symbol: FUN_01c4b330 */


int FUN_01c4b330(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_38 = 0;
  local_30[0] = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  iVar2 = 1;
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x6b0) + 0x4e0) + -1;
  if ((1 < iVar3) && (0 < iVar3)) {
    do {
      uVar4 = (uint)(iVar2 + iVar3) >> 1;
      FUN_0084e320(*(undefined8 *)(param_1 + 0x6b0),local_30,1,uVar4);
      iVar1 = FUN_0043e6d0(local_30[0],local_res10);
      if (iVar1 == 0) {
        FUN_0084e320(*(undefined8 *)(param_1 + 0x6b0),&local_38,2,uVar4);
        iVar1 = FUN_0043e6d0(local_38,local_res18);
      }
      if (iVar1 < 0) {
        iVar2 = uVar4 + 1;
      }
      else {
        iVar3 = uVar4 - 1;
        if (iVar1 == 0) break;
      }
    } while (iVar2 <= iVar3);
  }
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x6b0) + 0x4e0) + -1;
  if (iVar2 < iVar3) {
    iVar3 = iVar2;
  }
  if (iVar3 < 2) {
    iVar3 = 1;
  }
  FUN_00414560(&local_38,2);
  FUN_00414560(&local_res10,2);
  return iVar3;
}

