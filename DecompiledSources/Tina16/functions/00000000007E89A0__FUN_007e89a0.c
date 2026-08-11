/* Ghidra address: 007e89a0 */
/* Ghidra symbol: FUN_007e89a0 */


ulonglong FUN_007e89a0(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  if (PTR_DAT_02005bd0[0xd] != '\0') {
    if (*(char *)(param_1 + 0x91) == '\0') {
      uVar3 = (ulonglong)(*(char *)(param_1 + 0x78) == '\x01');
    }
    else {
      lVar1 = FUN_007dc570(param_1 + 200);
      if (lVar1 == 0) {
        uVar3 = FUN_0080b100(*(undefined8 *)PTR_DAT_02004030);
      }
      else {
        pcVar2 = (code *)FUN_00411550(lVar1,0xffc5);
        uVar3 = (*pcVar2)(lVar1);
      }
    }
  }
  return uVar3;
}

