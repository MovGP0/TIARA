/* Ghidra address: 004bf530 */
/* Ghidra symbol: FUN_004bf530 */


void FUN_004bf530(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 local_20;
  
  local_30 = auStack_58;
  (**(code **)(*param_2 + 0x40))(param_2);
  cVar1 = FUN_004be290(param_1);
  if (cVar1 == '\0') {
    FUN_004b1e70(param_2);
  }
  while( true ) {
    cVar1 = FUN_004be290(param_1);
    if (cVar1 != '\0') break;
    uVar2 = FUN_004bea50(param_1);
    if ((byte)uVar2 < 8) {
      bVar3 = ((int)CONCAT71((int7)((ulonglong)uVar2 >> 8),1) << ((byte)uVar2 & 0x1f) & 0x1cU) != 0;
    }
    else {
      bVar3 = false;
    }
    if (bVar3) {
      FUN_004c06c0(param_1);
    }
    local_20 = FUN_004b1ca0(param_2);
    FUN_004be030(param_1,1);
    while( true ) {
      cVar1 = FUN_004be290(param_1);
      if (cVar1 != '\0') break;
      FUN_004c0960(param_1,local_20);
    }
    FUN_004be030(param_1,0);
  }
  FUN_004be030(param_1,0);
  (**(code **)(*param_2 + 0x48))(param_2);
  return;
}

