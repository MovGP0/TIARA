/* Ghidra address: 01976ec0 */
/* Ghidra symbol: FUN_01976ec0 */


undefined8 FUN_01976ec0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 1;
  iVar1 = FUN_00414cb0(*(undefined8 *)(param_1 + 0x58));
  if (0 < iVar1) {
    do {
      if (*(short *)(*(longlong *)(param_1 + 0x58) + -2 + (longlong)iVar1 * 2) == 0x2e) {
        iVar2 = iVar1 + 1;
        break;
      }
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  iVar1 = FUN_00414cb0(*(undefined8 *)(param_1 + 0x58));
  FUN_00416dc0(param_2,*(undefined8 *)(param_1 + 0x58),iVar2,(iVar1 - iVar2) + 1);
  return param_2;
}

