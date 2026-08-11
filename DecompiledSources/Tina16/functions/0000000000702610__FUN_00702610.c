/* Ghidra address: 00702610 */
/* Ghidra symbol: FUN_00702610 */


void FUN_00702610(longlong param_1,longlong param_2)

{
  code *pcVar1;
  int iVar2;
  
  FUN_0064fca0(param_1,0x449,1,0);
  DAT_02012488 = param_1;
  FUN_0064e190(param_1,1);
  FUN_00701db0();
  if (param_2 == 0) {
    FUN_0064fca0(param_1,0x448,0,0);
    *(undefined1 *)(param_1 + 0x600) = 1;
  }
  else {
    iVar2 = FUN_006fa830(param_2);
    FUN_0064fca0(param_1,0x448,(longlong)iVar2,0);
    pcVar1 = (code *)FUN_00411550(param_1,0xffaa);
    (*pcVar1)(param_1,param_2);
  }
  return;
}

