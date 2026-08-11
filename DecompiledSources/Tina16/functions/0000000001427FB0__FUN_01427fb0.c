/* Ghidra address: 01427fb0 */
/* Ghidra symbol: FUN_01427fb0 */


void FUN_01427fb0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  char cVar2;
  
  cVar1 = FUN_016e9d10(param_1,1);
  FUN_01427e30(param_1,param_2,1,cVar1 + '\x01');
  cVar2 = FUN_016e9e80(param_1,1);
  FUN_016ebe60(param_1,cVar2 + '\x01',cVar1 + '\x01',0,1);
  FUN_016ed320(param_1,cVar2 + '\x01',0,0x3e112e0be826d695,0);
  return;
}

