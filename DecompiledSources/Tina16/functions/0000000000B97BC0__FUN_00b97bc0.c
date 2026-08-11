/* Ghidra address: 00b97bc0 */
/* Ghidra symbol: FUN_00b97bc0 */


undefined2 FUN_00b97bc0(undefined8 param_1,undefined *param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined **ppuVar3;
  int iVar4;
  bool bVar5;
  
  iVar4 = 0x23;
  ppuVar3 = &PTR_u_windows_1250_01e95320;
  while( true ) {
    puVar1 = *ppuVar3;
    if (param_2 == puVar1) {
      bVar5 = true;
    }
    else if ((param_2 == (undefined *)0x0) || (puVar1 == (undefined *)0x0)) {
      bVar5 = false;
    }
    else {
      iVar2 = FUN_0043e420(param_2,puVar1);
      bVar5 = iVar2 == 0;
    }
    if (bVar5) break;
    ppuVar3 = ppuVar3 + 2;
    iVar4 = iVar4 + -1;
    if (iVar4 == 0) {
      return 0;
    }
  }
  return *(undefined2 *)(ppuVar3 + -1);
}

