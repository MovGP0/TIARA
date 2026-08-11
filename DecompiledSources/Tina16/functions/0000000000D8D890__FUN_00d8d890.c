/* Ghidra address: 00d8d890 */
/* Ghidra symbol: FUN_00d8d890 */


ulonglong FUN_00d8d890(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = 0;
  iVar1 = FUN_004170c0(&DAT_00d8d930,param_2,1);
  if (0 < iVar1) {
    lVar2 = FUN_00d74650(*(undefined8 *)(param_1 + 0x48),param_2);
  }
  if (lVar2 == 0) {
    lVar2 = FUN_00d74650(*(undefined8 *)(param_1 + 0x48),L"CustomColors");
    if (lVar2 == 0) {
      lVar2 = FUN_00d74650(*(undefined8 *)(param_1 + 0x48),param_2);
    }
    else {
      lVar2 = FUN_00d77610(lVar2,param_2);
    }
  }
  if (lVar2 == 0) {
    uVar3 = FUN_00d83030(param_1,param_2);
  }
  else {
    uVar3 = (ulonglong)*(uint *)(lVar2 + 0x114);
  }
  return uVar3;
}

