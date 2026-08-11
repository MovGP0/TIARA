/* Ghidra address: 0088f4f0 */
/* Ghidra symbol: FUN_0088f4f0 */


undefined4 FUN_0088f4f0(short *param_1,int *param_2)

{
  int iVar1;
  short *psVar2;
  undefined8 uVar3;
  undefined4 local_14;
  undefined8 local_10;
  
  local_10 = 0;
  iVar1 = 0;
  for (psVar2 = param_1; *psVar2 != 0; psVar2 = psVar2 + 1) {
    if (*psVar2 == 0x2e) {
      iVar1 = iVar1 + 1;
    }
  }
  if (iVar1 == 3) {
    FUN_00415460(&local_10,param_1,0);
    uVar3 = FUN_00415ab0(local_10);
    iVar1 = (**(code **)PTR_PTR_020017d0)(uVar3);
    if (iVar1 == -1) {
      local_14 = 0;
    }
    else {
      *param_2 = iVar1;
      local_14 = 0xffffffff;
    }
  }
  else {
    local_14 = 0;
  }
  FUN_004144d0(&local_10);
  return local_14;
}

