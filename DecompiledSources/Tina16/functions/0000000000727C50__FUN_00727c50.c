/* Ghidra address: 00727c50 */
/* Ghidra symbol: FUN_00727c50 */


undefined4 FUN_00727c50(longlong *param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if (*(char *)(*(longlong *)PTR_DAT_02004030 + 400) == '\0') {
    lVar3 = *(longlong *)(*(longlong *)PTR_DAT_02004030 + 0x2d0);
  }
  else {
    lVar3 = FUN_0080f430(*(undefined8 *)PTR_DAT_02004030);
    if (lVar3 == 0) {
      lVar3 = *(longlong *)(*(longlong *)PTR_DAT_02004030 + 0x2d0);
    }
  }
  uVar1 = *PTR_DAT_02002b98;
  FUN_00782c20(0);
  uVar2 = (**(code **)(*param_1 + 0xa0))(param_1,lVar3);
  FUN_00782c20(uVar1);
  return uVar2;
}

