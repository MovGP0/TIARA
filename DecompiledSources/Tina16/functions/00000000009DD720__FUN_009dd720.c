/* Ghidra address: 009dd720 */
/* Ghidra symbol: FUN_009dd720 */


undefined8 FUN_009dd720(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if (DAT_02012ac8 == 0) {
    DAT_02012ac8 = FUN_009d3c60(&DAT_009cc1a0,1);
    if (DAT_02012ac8 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = DAT_02012ac8 + 0x50;
    }
    FUN_0041b840(param_1 + 8,lVar1);
  }
  FUN_0041b840(param_2,*(undefined8 *)(param_1 + 8));
  return param_2;
}

