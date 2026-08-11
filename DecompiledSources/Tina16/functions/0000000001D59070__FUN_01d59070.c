/* Ghidra address: 01d59070 */
/* Ghidra symbol: FUN_01d59070 */


void FUN_01d59070(undefined8 param_1,undefined8 param_2,undefined8 *param_3,char param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong local_d8;
  undefined1 local_d0 [64];
  undefined8 local_90 [13];
  
  puVar2 = local_90;
  for (lVar1 = 0xd; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_3;
    param_3 = param_3 + 1;
    puVar2 = puVar2 + 1;
  }
  FUN_01163f30(param_1,0xe,local_d0);
  FUN_016ee260(param_1,&local_d8,0x170,0);
  *(undefined1 *)(local_d8 + 0x98) = 2;
  if (param_4 == '\x01') {
    FUN_01d582e0(param_1,param_2,1,2,3,4,4,5,local_90,local_d0,local_d8);
  }
  else if (param_4 == '\x02') {
    FUN_01d582e0(param_1,param_2,1,2,3,4,5,6,local_90,local_d0,local_d8);
  }
  FUN_016e9f40(param_1,FUN_01d58ee0);
  FUN_016e9fa0(param_1,FUN_01d58e60);
  FUN_016e9fb0(param_1,FUN_01d58dd0);
  return;
}

