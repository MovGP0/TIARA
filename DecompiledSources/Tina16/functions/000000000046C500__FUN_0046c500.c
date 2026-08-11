/* Ghidra address: 0046c500 */
/* Ghidra symbol: FUN_0046c500 */


ulonglong FUN_0046c500(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined2 local_58;
  undefined2 local_40;
  
  uVar4 = param_2;
  puVar2 = (undefined8 *)FUN_0046c230(param_1);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_0046c230(param_2);
  local_40 = (short)uVar1;
  local_58 = (ushort)*puVar2;
  if (local_40 == 0) {
    uVar3 = (ulonglong)(local_58 == 0);
  }
  else if (local_40 == 1) {
    uVar3 = (ulonglong)(local_58 == 1);
  }
  else {
    if (local_58 < 8) {
      bVar5 = ((int)CONCAT71((int7)((ulonglong)uVar4 >> 8),1) << ((byte)*puVar2 & 0x1f) & 3U) != 0;
    }
    else {
      bVar5 = false;
    }
    if (bVar5) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_0046f320(param_1,param_2);
    }
  }
  return uVar3;
}

