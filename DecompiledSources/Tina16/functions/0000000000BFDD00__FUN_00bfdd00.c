/* Ghidra address: 00bfdd00 */
/* Ghidra symbol: FUN_00bfdd00 */


void FUN_00bfdd00(undefined8 param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_20 = 0;
  local_10 = 0;
  cVar1 = FUN_0065be20(param_1);
  if (cVar1 != '\0') {
    uVar4 = FUN_0065b870(param_1);
    iVar2 = thunk_FUN_039bb6fb(uVar4);
    if (iVar2 != 0) {
      FUN_00bf36a0(param_1,&local_10);
      uVar4 = FUN_00416740(local_10);
      FUN_00711330(*(undefined8 *)(param_2 + 0x10),uVar4,*(int *)(param_2 + 8) + -1);
      uVar3 = FUN_00711290(*(undefined8 *)(param_2 + 0x10));
      *(ulonglong *)(param_2 + 0x18) = (ulonglong)uVar3;
      goto code_r0x00bfddf4;
    }
  }
  FUN_00bf36a0(param_1,&local_18);
  FUN_00415dd0(&local_20,local_18,0);
  uVar4 = FUN_00415ab0(local_20);
  FUN_0061db10(*(undefined8 *)(param_2 + 0x10),uVar4,*(int *)(param_2 + 8) + -1);
  iVar2 = FUN_00414ce0(*(undefined8 *)(param_2 + 0x10));
  *(longlong *)(param_2 + 0x18) = (longlong)iVar2;
code_r0x00bfddf4:
  FUN_004144d0(&local_20);
  FUN_00414560(&local_18,2);
  return;
}

