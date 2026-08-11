/* Ghidra address: 01cd64a0 */
/* Ghidra symbol: FUN_01cd64a0 */


void FUN_01cd64a0(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong local_res10 [3];
  undefined8 local_20;
  
  local_20 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  iVar2 = FUN_004170c0(&DAT_01cd6634,local_res10[0],1);
  if (iVar2 < 1) {
    if (*(char *)(param_1 + 0x70) == '\x01') {
      cVar1 = FUN_005b84e0(&DAT_01cd6644,local_res10[0]);
      if (cVar1 == '\0') {
        FUN_00416ba0(&local_20,local_res10[0],L" (#dB)");
        FUN_01cd64a0(param_1,local_20);
        goto code_r0x01cd65dd;
      }
    }
    FUN_00414ad0(param_1 + 0xd8,local_res10[0]);
    FUN_00414480(param_1 + 0xe0);
  }
  else {
    iVar2 = FUN_004170c0(&DAT_01cd6634,local_res10[0],1);
    FUN_00416dc0(param_1 + 0xd8,local_res10[0],1,iVar2 + -1);
    iVar3 = FUN_004170c0(&DAT_01cd6634,local_res10[0],1);
    iVar2 = 0;
    if (local_res10[0] != 0) {
      iVar2 = *(int *)(local_res10[0] + -4);
    }
    iVar4 = FUN_004170c0(&DAT_01cd6634,local_res10[0],1);
    FUN_00416dc0(param_1 + 0xe0,local_res10[0],iVar3 + 1,iVar2 - iVar4);
  }
code_r0x01cd65dd:
  FUN_00414480(&local_20);
  FUN_00414480(local_res10);
  return;
}

