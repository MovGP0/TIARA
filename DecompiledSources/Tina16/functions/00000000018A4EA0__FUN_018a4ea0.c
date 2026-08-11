/* Ghidra address: 018a4ea0 */
/* Ghidra symbol: FUN_018a4ea0 */


void FUN_018a4ea0(undefined8 param_1,int param_2,int param_3,double param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = FUN_004b1ca0();
  uVar2 = FUN_0040c770((double)param_2 * param_4);
  *(undefined4 *)(lVar1 + 0x1c) = uVar2;
  uVar2 = FUN_0040c770((double)param_3 * param_4);
  *(undefined4 *)(lVar1 + 0x18) = uVar2;
  return;
}

