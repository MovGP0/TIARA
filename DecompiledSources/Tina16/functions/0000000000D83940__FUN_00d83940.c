/* Ghidra address: 00d83940 */
/* Ghidra symbol: FUN_00d83940 */


ulonglong FUN_00d83940(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  code *pcVar3;
  
  FUN_00d84660(param_1);
  lVar1 = param_1[10];
  pcVar3 = (code *)FUN_00411550(lVar1,0xffef);
  (*pcVar3)(lVar1,param_2);
  iVar2 = FUN_00d74940(param_1[10]);
  if (0 < iVar2) {
    (**(code **)(*param_1 + 0x70))(param_1);
  }
  return CONCAT71((int7)((ulonglong)param_2 >> 8),0 < iVar2) & 0xffffffff;
}

