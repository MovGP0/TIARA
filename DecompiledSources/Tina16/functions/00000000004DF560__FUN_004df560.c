/* Ghidra address: 004df560 */
/* Ghidra symbol: FUN_004df560 */


void FUN_004df560(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(lVar1 + -8);
  }
  FUN_004f6f30(lVar1,lVar2 - 1U & 0xffffffff,param_2,param_3,param_4,0,
               *(undefined4 *)(param_1 + 0x10));
  return;
}

