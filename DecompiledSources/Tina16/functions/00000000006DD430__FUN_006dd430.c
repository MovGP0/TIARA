/* Ghidra address: 006dd430 */
/* Ghidra symbol: FUN_006dd430 */


undefined8 FUN_006dd430(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  lVar1 = FUN_006dc7a0(param_1);
  if ((lVar1 != 0) && (*(longlong *)(param_1 + 0x20) != 0)) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    uVar2 = FUN_006decf0(uVar3);
    uVar2 = FUN_00611f90(uVar2,*(undefined8 *)(param_1 + 0x20));
    uVar3 = FUN_006df650(uVar3,uVar2);
  }
  return uVar3;
}

