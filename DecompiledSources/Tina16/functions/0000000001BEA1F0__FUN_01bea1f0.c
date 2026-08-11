/* Ghidra address: 01bea1f0 */
/* Ghidra symbol: FUN_01bea1f0 */


void FUN_01bea1f0(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  FUN_01c06a30(param_1);
  uVar2 = FUN_01c07120(param_1);
  cVar1 = FUN_004113d0(uVar2,&PTR_FUN_01bdc350);
  if (cVar1 != '\0') {
    lVar3 = FUN_01c07120(param_1);
    if ((*(longlong *)(lVar3 + 0x5d0) != 0) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x5d0) + 0x78) != 0)) {
      thunk_FUN_03c244fb(*(undefined8 *)(*(longlong *)PTR_DAT_02004030 + 0x2d0));
    }
  }
  return;
}

