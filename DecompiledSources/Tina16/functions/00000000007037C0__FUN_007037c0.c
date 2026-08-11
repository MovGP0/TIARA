/* Ghidra address: 007037c0 */
/* Ghidra symbol: FUN_007037c0 */


ulonglong FUN_007037c0(undefined8 param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = 8;
  if ((param_2 & 1) != 0) {
    uVar1 = 9;
  }
  if ((param_2 & 2) != 0) {
    uVar1 = uVar1 | 4;
  }
  if ((param_2 & 4) != 0) {
    uVar1 = uVar1 | 2;
  }
  return uVar1;
}

