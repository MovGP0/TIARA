/* Ghidra address: 00ea12d0 */
/* Ghidra symbol: FUN_00ea12d0 */


int FUN_00ea12d0(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  ushort uVar2;
  
  uVar1 = *param_1;
  uVar2 = *param_2;
  if (uVar1 != 0 || uVar2 != 0) {
    do {
      param_2 = param_2 + 1;
      param_1 = param_1 + 1;
      if (uVar1 != uVar2) {
        return ((uVar2 < uVar1) - 1) + (uint)(uVar2 < uVar1);
      }
      uVar1 = *param_1;
      uVar2 = *param_2;
    } while (uVar1 != 0 || uVar2 != 0);
  }
  return 0;
}

