/* Ghidra address: 0138c060 */
/* Ghidra symbol: FUN_0138c060 */


void FUN_0138c060(longlong param_1,char param_2)

{
  char cVar1;
  double dVar2;
  double local_20;
  
  local_20 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0xc50));
  if (param_2 == '\0') {
    local_20 = (double)FUN_010bfbe0(&local_20,0x3d719799812dea11,0);
  }
  else if (param_2 == '\x01') {
    local_20 = (double)FUN_010bfa60(&local_20,0x3d719799812dea11,0);
  }
  if (*(char *)(param_1 + 0x990) == '\t') {
    local_20 = (double)FUN_00b90660(local_20,0x3ff0000000000000,0xbff0000000000000);
  }
  dVar2 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0xc48));
  if (dVar2 <= local_20) {
    FUN_0138c740(param_1,param_1);
  }
  else {
    FUN_00b90440(*(undefined8 *)(param_1 + 0xc50),local_20);
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0xc70) + 0xf0))(*(longlong **)(param_1 + 0xc70));
    if ((cVar1 == '\0') || (*(char *)(*(longlong *)(param_1 + 0xc70) + 0x328) == '\0')) {
      *(double *)(*(longlong *)(param_1 + 0xe78) + 0x40) = local_20;
      if ((*(char *)(param_1 + 0x990) == '\x06') || ((byte)(*(char *)(param_1 + 0x990) - 8U) < 2)) {
        FUN_010eae00(*(undefined8 *)(param_1 + 0x9b0),local_20,0,1,1);
      }
      else {
        FUN_010eb220(*(undefined8 *)(param_1 + 0x9b0),local_20,0,0,1,1);
      }
      FUN_00b90440(*(undefined8 *)(param_1 + 0xc50),
                   *(undefined8 *)(*(longlong *)(param_1 + 0xe78) + 0x40));
    }
    else {
      *(double *)(*(longlong *)(*(longlong *)(param_1 + 0xe78) + 0x50) + 0x40) = local_20;
      if ((*(char *)(param_1 + 0x990) == '\x06') || ((byte)(*(char *)(param_1 + 0x990) - 8U) < 2)) {
        FUN_010eb220(*(undefined8 *)(param_1 + 0x9b0),local_20,0,0,1,1);
      }
      else {
        FUN_010eb220(*(undefined8 *)(param_1 + 0x9b0),local_20,0,1,1,1);
      }
      FUN_00b90440(*(undefined8 *)(param_1 + 0xc50),
                   *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0xe78) + 0x50) + 0x40));
    }
  }
  return;
}

