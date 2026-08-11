/* Ghidra address: 017c2f00 */
/* Ghidra symbol: FUN_017c2f00 */


void FUN_017c2f00(longlong *param_1,undefined4 param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined2 local_res10;
  undefined2 uStackX_12;
  undefined4 local_3c;
  
  local_res10 = (short)param_2;
  uStackX_12 = (short)((uint)param_2 >> 0x10);
  iVar1 = (**(code **)(*param_1 + 0x1f8))(param_1,(longlong)local_res10,(longlong)uStackX_12);
  iVar2 = (**(code **)(*param_3 + 0x1f8))(param_3,(longlong)local_res10,(longlong)uStackX_12);
  iVar3 = FUN_017c2b70(param_3);
  iVar5 = iVar3 + -1;
  iVar4 = 1;
  if (0 < iVar5) {
    do {
      if (iVar2 == 0) {
        local_3c = FUN_017c2c60(param_3,iVar4);
      }
      else {
        local_3c = FUN_017c2c60(param_3,(iVar3 - iVar4) + -1);
      }
      if (iVar1 == 0) {
        FUN_017c2d10(param_1,0,local_3c);
      }
      else {
        FUN_017c2d60(param_1,local_3c);
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_017c30d0(param_1);
  return;
}

