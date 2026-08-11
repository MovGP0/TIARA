/* Ghidra address: 004d1280 */
/* Ghidra symbol: FUN_004d1280 */


void FUN_004d1280(longlong param_1,char param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((*(char *)(param_1 + 0x19) == '\0' && param_2 == '\0') || (*(char *)(param_1 + 0x1d) != '\0')
      ) || (*(char *)(param_1 + 0x40) != '\0')) {
    uVar2 = FUN_0044d710(&PTR_FUN_004831c0,1,PTR_PTR_02004260);
    FUN_004134c0(uVar2);
  }
  else {
    *(undefined1 *)(param_1 + 0x1b) = 0;
    *(undefined1 *)(param_1 + 0x19) = 0;
    iVar1 = thunk_FUN_041cb65c(*(undefined8 *)(param_1 + 0x10));
    if (iVar1 != 1) {
      uVar2 = FUN_0044d710(&PTR_FUN_004831c0,1,PTR_PTR_02004260);
      FUN_004134c0(uVar2);
    }
  }
  return;
}

