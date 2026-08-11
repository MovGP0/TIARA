/* Ghidra address: 006f3a30 */
/* Ghidra symbol: FUN_006f3a30 */


undefined4 FUN_006f3a30(undefined8 param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar1 = 0xffffffff;
  lVar2 = FUN_006f6fe0(param_1);
  if (lVar2 != 0) {
    uVar3 = FUN_006f6fe0(param_1);
    uVar1 = FUN_006ef6e0(uVar3);
  }
  return uVar1;
}

