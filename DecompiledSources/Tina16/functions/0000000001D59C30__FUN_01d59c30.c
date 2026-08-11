/* Ghidra address: 01d59c30 */
/* Ghidra symbol: FUN_01d59c30 */


void FUN_01d59c30(undefined8 param_1,undefined8 param_2)

{
  longlong local_88;
  undefined1 local_80 [40];
  undefined1 local_58 [64];
  
  FUN_016ebb00(param_1,1,local_80,0x68);
  FUN_016ee260(param_1,&local_88,0x108,0);
  *(undefined1 *)(local_88 + 0x30) = 1;
  FUN_01d593e0(param_1,param_2,1,2,local_80,local_58,local_88,0);
  FUN_016e9f40(param_1,FUN_01d59990);
  FUN_016e9fa0(param_1,FUN_01d59940);
  return;
}

