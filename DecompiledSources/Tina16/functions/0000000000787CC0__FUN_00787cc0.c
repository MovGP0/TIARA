/* Ghidra address: 00787cc0 */
/* Ghidra symbol: FUN_00787cc0 */


undefined8 FUN_00787cc0(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
    FUN_00410f20(uVar1);
  }
  lVar2 = FUN_00787d30(param_1);
  if (lVar2 != 0) {
    uVar3 = FUN_00787d30(param_1);
    uVar3 = FUN_00787880(&PTR_FUN_0075ad10,1,uVar3);
    *(undefined8 *)(param_1 + 0x10) = uVar3;
  }
  return uVar3;
}

