/* Ghidra address: 006f3ee0 */
/* Ghidra symbol: FUN_006f3ee0 */


ulonglong FUN_006f3ee0(undefined8 param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = 0;
  if ((param_2 & 0x20) != 0) {
    uVar1 = 0x20;
  }
  if ((param_2 & 4) != 0) {
    uVar1 = uVar1 | 2;
  }
  if ((param_2 & 8) != 0) {
    uVar1 = uVar1 | 4;
  }
  if ((param_2 & 1) != 0) {
    uVar1 = uVar1 | 8;
  }
  if ((param_2 & 2) != 0) {
    uVar1 = uVar1 | 0x10;
  }
  return uVar1;
}

