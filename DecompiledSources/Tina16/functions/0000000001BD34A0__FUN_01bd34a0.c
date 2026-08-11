/* Ghidra address: 01bd34a0 */
/* Ghidra symbol: FUN_01bd34a0 */


void FUN_01bd34a0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  bool bVar3;
  
  cVar1 = (**(code **)(*param_1 + 0x238))(param_1);
  if (cVar1 == '\0') {
    FUN_01c07140(param_1,param_2);
  }
  else {
    lVar2 = FUN_01c07120(param_1);
    if (lVar2 != 0) {
      lVar2 = FUN_01c07120(param_1);
      if (*(byte *)(lVar2 + 0x4c3) < 8) {
        bVar3 = ((int)CONCAT71((int7)((ulonglong)lVar2 >> 8),1) << (*(byte *)(lVar2 + 0x4c3) & 0x1f)
                & 3U) != 0;
      }
      else {
        bVar3 = false;
      }
      if (bVar3) {
        FUN_0064cbf0(param_1,8);
        return;
      }
    }
    FUN_0064cc50(param_1,6);
  }
  return;
}

