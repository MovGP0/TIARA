/* Ghidra address: 00537d50 */
/* Ghidra symbol: FUN_00537d50 */


undefined8 FUN_00537d50(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  char *pcVar2;
  undefined7 uVar3;
  bool bVar4;
  
  lVar1 = FUN_00536180(param_1);
  if (lVar1 != 0) {
    pcVar2 = (char *)FUN_00536180(param_1);
    if ((byte)(*pcVar2 - 8U) < 0x10) {
      bVar4 = ((int)CONCAT62((int6)((ulonglong)param_2 >> 0x10),1) << (*pcVar2 - 8U & 0x1f) & 0x220U
              ) != 0;
      uVar3 = 2;
    }
    else {
      bVar4 = false;
      uVar3 = 0;
    }
    if (bVar4) {
      return CONCAT71(uVar3,1);
    }
  }
  return 0;
}

