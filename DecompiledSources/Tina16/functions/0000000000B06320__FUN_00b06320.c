/* Ghidra address: 00b06320 */
/* Ghidra symbol: FUN_00b06320 */


void FUN_00b06320(longlong param_1,int *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  bool bVar3;
  
  if ((*(longlong *)(param_1 + 0x530) != 0) && ((*param_2 == 0x100 || (*param_2 == 0x104)))) {
    if (param_2[2] - 0x20U < 0x10) {
      bVar3 = ((int)CONCAT62((int6)((ulonglong)param_2 >> 0x10),1) <<
               ((byte)(param_2[2] - 0x20U) & 0x1f) & 0x140U) != 0;
    }
    else {
      bVar3 = false;
    }
    if (bVar3) {
      lVar1 = *(longlong *)(param_1 + 0x530);
      if (((*(char *)(lVar1 + 0xa9) == '\0') && (*(longlong *)(param_2 + 2) == 0x28)) &&
         ((*(ulonglong *)(param_2 + 4) & 0x20000000) != 0)) {
        FUN_0064dbe0(lVar1,1);
        return;
      }
      uVar2 = FUN_0065b870(lVar1);
      thunk_FUN_041b2403(uVar2,*param_2,*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4));
      return;
    }
  }
  FUN_00681b60(param_1,param_2);
  return;
}

