/* Ghidra address: 01540660 */
/* Ghidra symbol: FUN_01540660 */


bool FUN_01540660(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_01540410();
  if (lVar1 != 0) {
    *param_3 = *(undefined4 *)(lVar1 + 0x18);
    *param_4 = *(undefined4 *)(lVar1 + 0x1c);
  }
  return lVar1 != 0;
}

