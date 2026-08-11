/* Ghidra address: 0072b700 */
/* Ghidra symbol: FUN_0072b700 */


void FUN_0072b700(undefined8 param_1)

{
  longlong lVar1;
  code *pcVar2;
  
  lVar1 = *(longlong *)(*(longlong *)PTR_DAT_02005950 + 0xd8);
  if ((lVar1 == 0) || (*(char *)(lVar1 + 0x4d6) == '\x01')) {
    lVar1 = FUN_0080f430(*(undefined8 *)PTR_DAT_02004030);
    if (lVar1 == 0) {
      lVar1 = *(longlong *)(*(longlong *)PTR_DAT_02004030 + 0x2d0);
    }
  }
  else {
    lVar1 = FUN_0065b870(lVar1);
  }
  pcVar2 = (code *)FUN_00411550(param_1,0xffe0);
  (*pcVar2)(param_1,lVar1);
  return;
}

