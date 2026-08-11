/* Ghidra address: 01507110 */
/* Ghidra symbol: FUN_01507110 */


void FUN_01507110(longlong param_1,char param_2)

{
  undefined8 uVar1;
  double local_20;
  
  local_20 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0xb90));
  uVar1 = FUN_010bf950((*(double *)(param_1 + 0xc58) - *(double *)(param_1 + 0xc50)) / 10.0);
  if (param_2 == '\0') {
    local_20 = (double)FUN_010bfbe0(&local_20,uVar1,0);
  }
  else if (param_2 == '\x01') {
    local_20 = (double)FUN_010bfa60(&local_20,uVar1,0);
  }
  if (((*(char *)(*(longlong *)(param_1 + 0xb98) + 0x328) != '\0') &&
      (local_20 < *(double *)(param_1 + 0xc58))) ||
     ((*(char *)(*(longlong *)(param_1 + 0xba8) + 0x328) != '\0' &&
      (*(double *)(param_1 + 0xc50) <= local_20 && local_20 != *(double *)(param_1 + 0xc50))))) {
    if (*(char *)(*(longlong *)(param_1 + 0xba8) + 0x328) == '\0') {
      *(double *)(param_1 + 0xc50) = local_20;
    }
    else {
      *(double *)(param_1 + 0xc58) = local_20;
    }
  }
  else if (*(char *)(*(longlong *)(param_1 + 0xba8) + 0x328) == '\0') {
    local_20 = *(double *)(param_1 + 0xc50);
  }
  else {
    local_20 = *(double *)(param_1 + 0xc58);
  }
  FUN_00b90440(*(undefined8 *)(param_1 + 0xb90),local_20);
  FUN_01506fd0(param_1);
  if (*(char *)(param_1 + 0xc08) != '\0') {
    if (*(char *)(*(longlong *)(param_1 + 0xba8) + 0x328) == '\0') {
      uVar1 = FUN_00b90090(*(undefined8 *)(param_1 + 0xb90));
      FUN_010eae00(*(undefined8 *)(param_1 + 0x9b0),uVar1,0,1,0);
    }
    else {
      uVar1 = FUN_00b90090(*(undefined8 *)(param_1 + 0xb90));
      FUN_010eae00(*(undefined8 *)(param_1 + 0x9b0),uVar1,1,1,0);
    }
  }
  *(undefined1 *)(param_1 + 0xc08) = 0;
  return;
}

