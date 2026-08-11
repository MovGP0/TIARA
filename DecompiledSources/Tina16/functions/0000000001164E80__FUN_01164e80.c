/* Ghidra address: 01164e80 */
/* Ghidra symbol: FUN_01164e80 */


void FUN_01164e80(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 local_70;
  undefined8 local_68 [8];
  
  puVar2 = &DAT_01f27f88;
  puVar3 = local_68;
  for (lVar1 = 8; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_016ebb00(param_1,1,local_68,0x40);
  FUN_016ee260(param_1,&local_70,0xd0,0);
  FUN_011646d0(param_1,param_2,1,2,3,4,local_68,local_70);
  FUN_016e9f40(param_1,FUN_01164e30);
  return;
}

