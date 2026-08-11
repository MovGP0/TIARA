/* Ghidra address: 0043e130 */
/* Ghidra symbol: FUN_0043e130 */


undefined8 * FUN_0043e130(undefined8 *param_1,ushort *param_2)

{
  int iVar1;
  ushort *puVar2;
  ushort uVar3;
  
  iVar1 = 0;
  if (param_2 != (ushort *)0x0) {
    iVar1 = *(int *)(param_2 + -2);
  }
  FUN_004169f0(param_1,iVar1);
  if ((0 < iVar1) && (puVar2 = (ushort *)*param_1, 0 < iVar1)) {
    do {
      uVar3 = *param_2;
      if ((ushort)(uVar3 - 0x61) < 0x1a) {
        uVar3 = uVar3 ^ 0x20;
      }
      *puVar2 = uVar3;
      puVar2 = puVar2 + 1;
      param_2 = param_2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return param_1;
}

