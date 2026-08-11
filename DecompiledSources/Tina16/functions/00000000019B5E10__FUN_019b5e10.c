/* Ghidra address: 019b5e10 */
/* Ghidra symbol: FUN_019b5e10 */


int FUN_019b5e10(short *param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  short sVar1;
  int iVar2;
  int iVar3;
  short *local_res8 [4];
  int local_1c;
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  for (; iVar3 = FUN_019b5ce0(param_2,param_4), param_3 < iVar3; param_3 = param_3 + 1) {
    sVar1 = FUN_019b60b0(param_2,param_3,param_4);
    if (sVar1 == *local_res8[0]) {
      iVar3 = 0;
      while( true ) {
        iVar2 = 0;
        if (local_res8[0] != (short *)0x0) {
          iVar2 = *(int *)(local_res8[0] + -2);
        }
        if ((iVar2 <= iVar3) ||
           (sVar1 = FUN_019b60b0(param_2,param_3 + iVar3,param_4),
           sVar1 != local_res8[0][(longlong)(iVar3 + 1) + -1])) break;
        iVar3 = iVar3 + 1;
      }
      iVar2 = 0;
      if (local_res8[0] != (short *)0x0) {
        iVar2 = *(int *)(local_res8[0] + -2);
      }
      local_1c = param_3;
      if (iVar3 == iVar2) goto LAB_019b5ec0;
    }
  }
  local_1c = -1;
LAB_019b5ec0:
  FUN_00414480(local_res8);
  return local_1c;
}

