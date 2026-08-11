/* Ghidra address: 015405b0 */
/* Ghidra symbol: FUN_015405b0 */


bool FUN_015405b0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_01540410();
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x18) = param_3;
    *(undefined4 *)(lVar1 + 0x1c) = param_4;
  }
  return lVar1 != 0;
}

