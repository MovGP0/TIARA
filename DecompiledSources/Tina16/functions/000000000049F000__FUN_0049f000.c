/* Ghidra address: 0049f000 */
/* Ghidra symbol: FUN_0049f000 */


longlong FUN_0049f000(longlong param_1,undefined8 param_2)

{
  longlong local_20;
  
  local_20 = 0;
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_004e6770(*(longlong *)(param_1 + 8),param_2,&local_20);
  }
  if ((local_20 == 0) && (*(longlong *)(param_1 + 0x10) != 0)) {
    FUN_004e6770(*(undefined8 *)(param_1 + 0x10),param_2,&local_20);
  }
  return local_20;
}

