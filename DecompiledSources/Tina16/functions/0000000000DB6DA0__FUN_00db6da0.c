/* Ghidra address: 00db6da0 */
/* Ghidra symbol: FUN_00db6da0 */


void FUN_00db6da0(undefined8 param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  char cVar1;
  
  cVar1 = FUN_016e9e80(param_1,1);
  cVar1 = cVar1 + '\x01';
  FUN_016ebe60(param_1,cVar1,param_2,param_3,1);
  if (param_4 == '\x01') {
    FUN_016ed320(param_1,cVar1,0,0x3e112e0be826d695,0);
  }
  else if (param_4 == '\x02') {
    FUN_016ed320(param_1,cVar1,0,0x412e848000000000,0);
  }
  return;
}

