/* Ghidra address: 00d2af50 */
/* Ghidra symbol: FUN_00d2af50 */


void FUN_00d2af50(longlong param_1,longlong *param_2)

{
  code *local_38;
  longlong local_30;
  code *local_28;
  longlong local_20;
  
  FUN_004d2e60(param_1,param_2);
  local_28 = FUN_00d2ad70;
  local_38 = FUN_00d2aea0;
  local_30 = param_1;
  local_20 = param_1;
  (**(code **)(*param_2 + 8))
            (param_2,L"Cipher",&local_28,&local_38,*(longlong *)(param_1 + 0x80) != 0);
  return;
}

