/* Ghidra address: 009d3690 */
/* Ghidra symbol: FUN_009d3690 */


undefined8 FUN_009d3690(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_RAX;
  longlong lVar1;
  
  lVar1 = FUN_009d7110(&DAT_009cd270,CONCAT71((int7)((ulonglong)in_RAX >> 8),1) & 0xffffffff,param_2
                       ,param_3);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = lVar1 + 0x28;
  }
  FUN_0041b840(param_1,lVar1);
  return param_1;
}

