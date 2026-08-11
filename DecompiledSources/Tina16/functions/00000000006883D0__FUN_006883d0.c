/* Ghidra address: 006883d0 */
/* Ghidra symbol: FUN_006883d0 */


void FUN_006883d0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_00416db0(param_2,*(undefined8 *)(param_1 + 0x4a0));
  if (iVar2 != 0) {
    FUN_00414ad0(param_1 + 0x4a0,param_2);
    cVar1 = FUN_0065be20(param_1);
    if ((cVar1 != '\0') && (*(char *)(param_1 + 0x4fc) == '\x01')) {
      FUN_00688cc0(param_1);
    }
  }
  return;
}

