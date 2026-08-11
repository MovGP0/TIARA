/* Ghidra address: 00fa60a0 */
/* Ghidra symbol: FUN_00fa60a0 */


int FUN_00fa60a0(undefined8 param_1,longlong param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong local_res10 [3];
  undefined8 local_30 [2];
  ushort *local_20;
  
  local_30[0] = 0;
  local_20 = (ushort *)0x0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  iVar3 = 0;
  iVar4 = 0;
  if (local_res10[0] != 0) {
    iVar4 = *(int *)(local_res10[0] + -4);
  }
  if (0 < iVar4) {
    do {
      FUN_005b8820(&local_20,local_res10[0],1);
      uVar1 = *local_20;
      if (uVar1 < 0x39) {
        iVar2 = uVar1 - 0x30;
      }
      else {
        iVar2 = uVar1 - 0x37;
      }
      iVar3 = iVar3 * 0x10 + iVar2;
      iVar2 = 0;
      if (local_res10[0] != 0) {
        iVar2 = *(int *)(local_res10[0] + -4);
      }
      FUN_005b8850(local_30,local_res10[0],iVar2 + -1);
      FUN_00414b50(local_res10,local_30[0]);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00414480(local_30);
  FUN_00414480(&local_20);
  FUN_00414480(local_res10);
  return iVar3;
}

