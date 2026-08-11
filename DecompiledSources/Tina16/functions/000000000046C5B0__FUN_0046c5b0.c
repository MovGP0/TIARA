/* Ghidra address: 0046c5b0 */
/* Ghidra symbol: FUN_0046c5b0 */


undefined1 FUN_0046c5b0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  bool bVar6;
  ushort local_58;
  short local_40;
  
  uVar5 = param_2;
  puVar4 = (undefined8 *)FUN_0046c230(param_1);
  uVar1 = *puVar4;
  puVar4 = (undefined8 *)FUN_0046c230(param_2);
  local_40 = (short)uVar1;
  local_58 = (ushort)*puVar4;
  if (local_40 == 0) {
    uVar3 = (&DAT_01dc4800)[local_58 == 0];
  }
  else if (local_40 == 1) {
    uVar3 = (&DAT_01dc4800)[local_58 == 1];
  }
  else {
    if (local_58 < 8) {
      bVar6 = ((int)CONCAT71((int7)((ulonglong)uVar5 >> 8),1) << ((byte)*puVar4 & 0x1f) & 3U) != 0;
    }
    else {
      bVar6 = false;
    }
    if (bVar6) {
      uVar3 = 3;
    }
    else {
      cVar2 = FUN_0046f320(param_1,param_2);
      if (cVar2 == '\0') {
        cVar2 = FUN_0046f360(param_1,param_2);
        if (cVar2 == '\0') {
          uVar3 = 2;
        }
        else {
          uVar3 = 1;
        }
      }
      else {
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}

