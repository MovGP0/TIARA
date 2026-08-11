/* Ghidra address: 019b5d30 */
/* Ghidra symbol: FUN_019b5d30 */


int FUN_019b5d30(short *param_1,undefined8 param_2,undefined8 param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  short *local_res8 [4];
  int local_1c;
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  for (local_1c = 0; iVar3 = FUN_019b5ce0(param_2,param_3), local_1c < iVar3;
      local_1c = local_1c + 1) {
    sVar1 = FUN_019b60b0(param_2,local_1c,param_3);
    if (sVar1 == *local_res8[0]) {
      iVar3 = 0;
      while( true ) {
        iVar2 = 0;
        if (local_res8[0] != (short *)0x0) {
          iVar2 = *(int *)(local_res8[0] + -2);
        }
        if ((iVar2 <= iVar3) ||
           (sVar1 = FUN_019b60b0(param_2,local_1c + iVar3,param_3),
           sVar1 != local_res8[0][(longlong)(iVar3 + 1) + -1])) break;
        iVar3 = iVar3 + 1;
      }
      iVar2 = 0;
      if (local_res8[0] != (short *)0x0) {
        iVar2 = *(int *)(local_res8[0] + -2);
      }
      if (iVar3 == iVar2) goto LAB_019b5ddb;
    }
  }
  local_1c = -1;
LAB_019b5ddb:
  FUN_00414480(local_res8);
  return local_1c;
}

