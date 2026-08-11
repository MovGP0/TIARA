/* Ghidra address: 00c4cea0 */
/* Ghidra symbol: FUN_00c4cea0 */


void FUN_00c4cea0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 local_18;
  short *local_10;
  
  local_10 = (short *)0x0;
  local_18 = 0;
  FUN_004be030(param_2,1);
  while( true ) {
    cVar1 = FUN_004be290(param_2);
    if (cVar1 != '\0') break;
    FUN_004c1ed0(param_2,&local_10);
    iVar2 = FUN_004170c0(&LAB_00c4cfc8,local_10,1);
    iVar3 = 0;
    if (local_10 != (short *)0x0) {
      iVar3 = *(int *)(local_10 + -2);
    }
    FUN_00416dc0(&local_18,local_10,iVar2 + 1,iVar3 - iVar2);
    if (*local_10 == 0x53) {
      FUN_00414ad0(param_1 + 0x88,local_18);
    }
    else if (*local_10 == 0x54) {
      FUN_00414ad0(param_1 + 0x90,local_18);
    }
  }
  FUN_004be030(param_2,0);
  FUN_00414560(&local_18,2);
  return;
}

