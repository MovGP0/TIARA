/* Ghidra address: 00ddee40 */
/* Ghidra symbol: FUN_00ddee40 */


undefined8 FUN_00ddee40(undefined8 param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  lVar2 = FUN_007f9b70(param_1,1);
  if (lVar2 != 0) {
    cVar1 = FUN_004113d0(lVar2,&PTR_FUN_007f0370);
    if ((cVar1 == '\0') || (*(char *)(lVar2 + 0x4d6) == '\x01')) {
      if (*(longlong *)(*(longlong *)PTR_DAT_02004030 + 0xa8) != 0) {
        uVar3 = *(undefined8 *)(*(longlong *)(*(longlong *)PTR_DAT_02004030 + 0xa8) + 0x500);
      }
    }
    else {
      uVar3 = *(undefined8 *)(lVar2 + 0x500);
    }
  }
  return uVar3;
}

