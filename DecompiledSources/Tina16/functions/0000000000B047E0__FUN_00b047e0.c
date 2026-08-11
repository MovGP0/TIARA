/* Ghidra address: 00b047e0 */
/* Ghidra symbol: FUN_00b047e0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b047e0(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = param_1;
  if (DAT_01e80a08 == '\0') {
    DAT_01e80a0c = param_1;
    uVar1 = _DAT_01e80a10;
  }
  _DAT_01e80a10 = uVar1;
  DAT_01e80a08 = 1;
  return;
}

