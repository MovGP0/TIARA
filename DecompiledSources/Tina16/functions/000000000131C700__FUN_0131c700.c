/* Ghidra address: 0131c700 */
/* Ghidra symbol: FUN_0131c700 */


void FUN_0131c700(longlong param_1,uint param_2)

{
  code *local_28;
  longlong local_20;
  
  FUN_00411a80(param_1,param_2);
  if (*(char *)(*(longlong *)(param_1 + 0x48) + 0x72) == '\0') {
    local_28 = FUN_0131c570;
    local_20 = param_1;
    FUN_004d1a50(param_1,&local_28);
  }
  else {
    FUN_013189e0(*(longlong *)(param_1 + 0x48),0);
  }
  FUN_004095f0(*(undefined8 *)(param_1 + 0x90));
  FUN_004d0ea0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

