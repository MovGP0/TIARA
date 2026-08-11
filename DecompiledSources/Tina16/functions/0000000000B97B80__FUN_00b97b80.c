/* Ghidra address: 00b97b80 */
/* Ghidra symbol: FUN_00b97b80 */


ulonglong FUN_00b97b80(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 unaff_RSI;
  
  iVar1 = FUN_00b97bc0();
  if (iVar1 != 0) {
    uVar2 = FUN_00b97b20(&PTR_FUN_0043a338,iVar1);
    *param_3 = uVar2;
  }
  else {
    *param_3 = 0;
  }
  return CONCAT71((int7)((ulonglong)unaff_RSI >> 8),iVar1 != 0) & 0xffffffff;
}

