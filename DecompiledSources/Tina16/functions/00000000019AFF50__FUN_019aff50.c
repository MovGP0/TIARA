/* Ghidra address: 019aff50 */
/* Ghidra symbol: FUN_019aff50 */


longlong FUN_019aff50(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 local_res10 [3];
  longlong local_38;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  iVar3 = 0;
  iVar4 = *(int *)(param_1 + 0x10);
  if (-1 < iVar4 + -1) {
    do {
      local_38 = FUN_00b94e60(param_1,iVar3);
      cVar1 = FUN_0198a580(local_38);
      if (cVar1 == '\x05') {
        FUN_004169a0(local_30,local_38 + 0x2d8);
        iVar2 = FUN_00416db0(local_30[0],local_res10[0]);
        if (iVar2 == 0) goto LAB_019affe0;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  local_38 = 0;
LAB_019affe0:
  FUN_00414480(local_30);
  FUN_00414480(local_res10);
  return local_38;
}

