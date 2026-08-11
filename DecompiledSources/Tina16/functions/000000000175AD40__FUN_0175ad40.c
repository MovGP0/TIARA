/* Ghidra address: 0175ad40 */
/* Ghidra symbol: FUN_0175ad40 */


undefined8 FUN_0175ad40(longlong param_1,longlong param_2)

{
  uint uVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_2 + 0x12e) == '\0') {
LAB_0175ada1:
    uVar2 = 1;
  }
  else {
    if (((*(longlong *)(param_1 + 0x28) != 0) && (*(longlong *)PTR_DAT_02004e40 != 0)) &&
       (*(longlong *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8) != 0)) {
      uVar1 = (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02004e40 + 0x27a8) + 0x18))
                        (*(longlong **)(*(longlong *)PTR_DAT_02004e40 + 0x27a8),
                         *(longlong *)(param_1 + 0x28));
      if (uVar1 < 0x80000000) goto LAB_0175ada1;
    }
    uVar2 = 0;
  }
  return uVar2;
}

