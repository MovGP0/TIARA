/* Ghidra address: 0070cdf0 */
/* Ghidra symbol: FUN_0070cdf0 */


void FUN_0070cdf0(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_00786090(param_1);
  lVar2 = thunk_FUN_041b2403(uVar1,0x431,0,0);
  if ((lVar2 != 0) && (*(longlong *)(param_1 + 0x48) == 0)) {
    uVar1 = FUN_007d5080(&PTR_FUN_006441f8,1,0);
    *(undefined8 *)(param_1 + 0x48) = uVar1;
    FUN_007d55a0(uVar1,1);
    FUN_007d5670(*(undefined8 *)(param_1 + 0x48),lVar2);
  }
  return;
}

