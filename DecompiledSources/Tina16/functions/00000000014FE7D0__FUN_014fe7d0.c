/* Ghidra address: 014fe7d0 */
/* Ghidra symbol: FUN_014fe7d0 */


void FUN_014fe7d0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  DAT_0210ec18 = param_2;
  uVar1 = FUN_019a45d0();
  FUN_0199d1d0(uVar1,FUN_014fe320);
  uVar1 = FUN_019a45d0();
  FUN_0199d4b0(uVar1,FUN_014fe400);
  uVar1 = FUN_019a45d0();
  FUN_019af4e0(uVar1);
  if (*PTR_DAT_02003fc8 == '\0') {
    FUN_014ff100(param_1);
  }
  return;
}

