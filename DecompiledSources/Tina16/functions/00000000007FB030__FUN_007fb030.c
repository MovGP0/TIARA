/* Ghidra address: 007fb030 */
/* Ghidra symbol: FUN_007fb030 */


void FUN_007fb030(longlong param_1,byte *param_2)

{
  char cVar1;
  
  FUN_0064ec60(param_1,param_2);
  if ((*param_2 & 2) != 0) {
    cVar1 = FUN_007f9fa0(*(undefined8 *)(param_1 + 0x4b0));
    if (cVar1 == '\0') {
      cVar1 = FUN_007f9fa0(*(undefined8 *)(param_1 + 0x498));
      if (cVar1 == '\0') {
        *param_2 = *param_2 & 0xfd;
      }
    }
  }
  return;
}

