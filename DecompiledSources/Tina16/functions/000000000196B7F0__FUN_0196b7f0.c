/* Ghidra address: 0196b7f0 */
/* Ghidra symbol: FUN_0196b7f0 */


void FUN_0196b7f0(longlong param_1,int param_2)

{
  undefined8 uVar1;
  char cVar2;
  
  *(int *)(param_1 + 0x230) = param_2;
  if (param_2 < 0x100) {
    cVar2 = FUN_0188b4f0(param_2,param_1 + 0x238,param_1 + 0x228);
    if ((cVar2 != '\0') && (*(char *)(param_1 + 0x1b1) == '\x01')) {
      uVar1 = *(undefined8 *)(param_1 + 0x238);
      *(undefined8 *)(param_1 + 0x238) = *(undefined8 *)(param_1 + 0x228);
      *(undefined8 *)(param_1 + 0x228) = uVar1;
    }
    FUN_0196baa0(param_1);
  }
  return;
}

