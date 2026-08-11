/* Ghidra address: 00e0f090 */
/* Ghidra symbol: FUN_00e0f090 */


undefined4 FUN_00e0f090(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong local_res10 [3];
  undefined4 local_2c;
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  iVar4 = 0;
  if (local_res10[0] != 0) {
    iVar4 = *(int *)(local_res10[0] + -4);
  }
  iVar2 = 1;
  if (0 < iVar4) {
    do {
      lVar3 = (longlong)iVar2;
      if (*(short *)(local_res10[0] + -2 + lVar3 * 2) == 0x5b) {
        lVar1 = FUN_00414de0(local_res10);
        *(undefined2 *)(lVar1 + -2 + lVar3 * 2) = 0x28;
      }
      if (*(short *)(local_res10[0] + -2 + lVar3 * 2) == 0x5d) {
        lVar1 = FUN_00414de0(local_res10);
        *(undefined2 *)(lVar1 + -2 + lVar3 * 2) = 0x29;
      }
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  (**(code **)(*param_1 + 0x78))(param_1,local_res10[0]);
  FUN_00414480(local_res10);
  return local_2c;
}

