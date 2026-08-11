/* Ghidra address: 017dca30 */
/* Ghidra symbol: FUN_017dca30 */


void FUN_017dca30(longlong param_1,undefined1 param_2,ulonglong param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  ulonglong local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_00c43ea0(*(undefined8 *)(param_1 + 0x50),local_res18);
  FUN_017d9580(param_1,param_4,param_5,local_res18[0],1,param_2);
  FUN_017d9580(param_1,param_4,param_6,local_res18[0] ^ 0x8000000000000000,1,param_2);
  return;
}

