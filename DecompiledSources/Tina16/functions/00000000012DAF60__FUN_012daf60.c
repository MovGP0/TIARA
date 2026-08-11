/* Ghidra address: 012daf60 */
/* Ghidra symbol: FUN_012daf60 */


void FUN_012daf60(longlong param_1,uint param_2)

{
  code *local_28;
  longlong local_20;
  
  FUN_00411a80(param_1,param_2);
  if (*(char *)(*(longlong *)(param_1 + 0x48) + 0x62) == '\0') {
    local_28 = FUN_012dadd0;
    local_20 = param_1;
    FUN_004d1a50(param_1,&local_28);
  }
  else {
    FUN_012d7d80(*(longlong *)(param_1 + 0x48),0);
  }
  FUN_004095f0(*(undefined8 *)(param_1 + 0x90));
  FUN_004d0ea0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

