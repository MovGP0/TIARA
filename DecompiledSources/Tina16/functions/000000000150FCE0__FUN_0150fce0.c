/* Ghidra address: 0150fce0 */
/* Ghidra symbol: FUN_0150fce0 */


void FUN_0150fce0(longlong param_1,char param_2)

{
  double dVar1;
  uint local_1c;
  
  local_1c = FUN_00f04d50(*(undefined8 *)(param_1 + 0xdf8));
  if (param_2 == '\0') {
    local_1c = local_1c - 1;
  }
  else if (param_2 == '\x01') {
    local_1c = local_1c + 1;
  }
  (**(code **)(**(longlong **)(param_1 + 0xee0) + 0xe0))(*(longlong **)(param_1 + 0xee0),&local_1c);
  (**(code **)(**(longlong **)(param_1 + 0xee0) + 0xf0))(*(longlong **)(param_1 + 0xee0),local_1c);
  FUN_00f04fa0(*(undefined8 *)(param_1 + 0xdf8),local_1c);
  if (*(char *)(param_1 + 0xec2) == '\0') {
    *(double *)(param_1 + 0xc58) = (double)(int)local_1c;
  }
  else {
    dVar1 = (double)(**(code **)(**(longlong **)(param_1 + 0xee0) + 0xc0))
                              (*(longlong **)(param_1 + 0xee0));
    *(double *)(param_1 + 0xc58) = (double)(int)local_1c * dVar1;
  }
  *(undefined8 *)(param_1 + 0xc50) = 0;
  FUN_010eae00(*(undefined8 *)(param_1 + 0x9b0),*(undefined8 *)(param_1 + 0xc50),0,0,0);
  FUN_010eae00(*(undefined8 *)(param_1 + 0x9b0),*(undefined8 *)(param_1 + 0xc58),1,1,0);
  if (*(char *)(*(longlong *)(param_1 + 0xba8) + 0x328) == '\0') {
    FUN_00b90440(*(undefined8 *)(param_1 + 0xb90),*(undefined8 *)(param_1 + 0xc50));
  }
  else {
    FUN_00b90440(*(undefined8 *)(param_1 + 0xb90),*(undefined8 *)(param_1 + 0xc58));
  }
  FUN_01506c70(param_1);
  FUN_010f6920(param_1,1);
  FUN_01506fd0(param_1);
  return;
}

