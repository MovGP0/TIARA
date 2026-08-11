/* Ghidra address: 0147b780 */
/* Ghidra symbol: FUN_0147b780 */


undefined1 FUN_0147b780(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 local_19;
  longlong local_18;
  longlong local_10;
  
  local_10 = 0;
  local_18 = 0;
  FUN_0043e1a0(&local_10,param_1);
  FUN_0043e1a0(&local_18,param_2);
  local_19 = 0;
  iVar2 = 0;
  if (local_10 != 0) {
    iVar2 = *(int *)(local_10 + -4);
  }
  iVar3 = 0;
  if (local_18 != 0) {
    iVar3 = *(int *)(local_18 + -4);
  }
  uVar4 = iVar2 - iVar3 >> 0x1f;
  if ((iVar2 - iVar3 ^ uVar4) - uVar4 == 1) {
    cVar1 = FUN_004563e0(&local_10,local_18,0);
    if (cVar1 == '\0') {
      cVar1 = FUN_004563e0(&local_18,local_10,0);
      if (cVar1 == '\0') {
        cVar1 = FUN_004575a0(&local_10,local_18,0);
        if (cVar1 == '\0') {
          cVar1 = FUN_004575a0(&local_18,local_10,0);
          if (cVar1 == '\0') goto code_r0x0147b844;
        }
      }
    }
    local_19 = 1;
  }
code_r0x0147b844:
  FUN_00414560(&local_18,2);
  return local_19;
}

