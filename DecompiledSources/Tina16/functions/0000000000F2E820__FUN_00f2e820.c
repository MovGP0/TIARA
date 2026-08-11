/* Ghidra address: 00f2e820 */
/* Ghidra symbol: FUN_00f2e820 */


ulonglong FUN_00f2e820(undefined8 param_1,char *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 unaff_RSI;
  ulonglong uVar2;
  undefined8 local_res8 [4];
  
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (*param_2 == '\a') {
    local_res8[0] = param_1;
    uVar1 = FUN_00417740(param_3,&DAT_00527bf8);
    FUN_00538080(local_res8,param_2,uVar1);
  }
  else {
    uVar2 = 0;
  }
  return uVar2 & 0xffffffff;
}

