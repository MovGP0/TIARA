/* Ghidra address: 00807410 */
/* Ghidra symbol: FUN_00807410 */


void FUN_00807410(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((*(int *)(param_2 + 8) == 2) && (*(char *)(param_1 + 0xff) != '\x01')) &&
     ((*(ushort *)(param_1 + 0x34) & 0x10) == 0)) {
    uVar2 = FUN_0065b870(param_1);
    iVar1 = FUN_007f9220(uVar2);
    if ((iVar1 == 0) && (iVar1 = FUN_00659110(param_1), 0 < iVar1)) {
      uVar2 = FUN_0065b870(param_1);
      thunk_FUN_041cc6e2(uVar2,0,0,0,0,0,7);
      uVar2 = FUN_0065b870(param_1);
      thunk_FUN_0413e052(uVar2,0xa2,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
      if (*(char *)(param_1 + 0x4d5) == '\0') {
        return;
      }
      uVar2 = FUN_00659130(param_1,0);
      FUN_0064e9e0(uVar2,1,0xffffffff);
      return;
    }
  }
  FUN_00803290(param_1,param_2);
  return;
}

