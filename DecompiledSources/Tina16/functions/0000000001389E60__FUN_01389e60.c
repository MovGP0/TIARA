/* Ghidra address: 01389e60 */
/* Ghidra symbol: FUN_01389e60 */


void FUN_01389e60(longlong param_1,char param_2)

{
  double *pdVar1;
  double local_20;
  
  local_20 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0xc28));
  if (param_2 == '\0') {
    local_20 = (double)FUN_010bfbe0(&local_20,0x3eb0c6f7a0b5ed8d,0);
  }
  else if (param_2 == '\x01') {
    local_20 = (double)FUN_010bfa60(&local_20,0x3eb0c6f7a0b5ed8d,0);
  }
  if (*(char *)(param_1 + 0xe4a) == '\0') {
    *(double *)(param_1 + 0xe50) = local_20 - *(double *)(param_1 + 0xe68) / 2.0;
    *(double *)(param_1 + 0xe58) = local_20 + *(double *)(param_1 + 0xe68) / 2.0;
  }
  else {
    *(double *)(param_1 + 0xe50) = local_20;
  }
  (**(code **)(**(longlong **)(param_1 + 0xe88) + 0x108))
            (*(longlong **)(param_1 + 0xe88),param_1 + 0xe50,param_1 + 0xe58);
  (**(code **)(**(longlong **)(param_1 + 0xe88) + 0x118))
            (*(longlong **)(param_1 + 0xe88),*(undefined8 *)(param_1 + 0xe50),
             *(undefined8 *)(param_1 + 0xe58));
  *(double *)(param_1 + 0xe60) = (*(double *)(param_1 + 0xe50) + *(double *)(param_1 + 0xe58)) / 2.0
  ;
  *(double *)(param_1 + 0xe68) = *(double *)(param_1 + 0xe58) - *(double *)(param_1 + 0xe50);
  if (*(char *)(param_1 + 0xe4a) == '\0') {
    FUN_00b90440(*(undefined8 *)(param_1 + 0xc28),*(undefined8 *)(param_1 + 0xe60));
    FUN_00b90440(*(undefined8 *)(param_1 + 0xc30),*(undefined8 *)(param_1 + 0xe68));
  }
  else {
    FUN_00b90440(*(undefined8 *)(param_1 + 0xc28),*(undefined8 *)(param_1 + 0xe50));
    FUN_00b90440(*(undefined8 *)(param_1 + 0xc30),*(undefined8 *)(param_1 + 0xe58));
  }
  if ((*(char *)(param_1 + 0x990) != '\x06') && (1 < (byte)(*(char *)(param_1 + 0x990) - 8U))) {
    FUN_010eae00(*(undefined8 *)(param_1 + 0x9b0),*(undefined8 *)(param_1 + 0xe50),0,0,0);
    FUN_010eae00(*(undefined8 *)(param_1 + 0x9b0),*(undefined8 *)(param_1 + 0xe58),1,0,1);
    pdVar1 = (double *)(*(longlong *)(param_1 + 0x9b0) + 0x78);
    if (*pdVar1 <= 0.0 && *pdVar1 != 0.0) {
      FUN_010eae00(*(longlong *)(param_1 + 0x9b0),0,0,0,0);
    }
    FUN_010e8e30(*(undefined8 *)(param_1 + 0x9b0),1);
  }
  FUN_01389900(param_1);
  return;
}

