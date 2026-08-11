/* Ghidra address: 01654c40 */
/* Ghidra symbol: FUN_01654c40 */


void FUN_01654c40(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong local_30 [2];
  
  FUN_016ee260(param_1,local_30,0xd0,0);
  lVar1 = FUN_016ea6c0(param_1,1);
  *(undefined8 *)(local_30[0] + 0x20) = *(undefined8 *)(lVar1 + 0x18);
  *(undefined8 *)(local_30[0] + 0x50) = *(undefined8 *)(lVar1 + 0x28);
  FUN_01654100(local_30[0],param_1,param_2,param_3);
  return;
}

