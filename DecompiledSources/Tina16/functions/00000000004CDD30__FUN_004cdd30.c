/* Ghidra address: 004cdd30 */
/* Ghidra symbol: FUN_004cdd30 */


void FUN_004cdd30(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar2 = 0;
  uVar3 = 0;
  cVar1 = FUN_004c9a90(*(undefined8 *)(param_1 + 0x1e0),L"INHERITED");
  if (cVar1 == '\0') {
    cVar1 = FUN_004c9a90(*(undefined8 *)(param_1 + 0x1e0),L"INLINE");
    if (cVar1 == '\0') {
      FUN_004c8f60(*(undefined8 *)(param_1 + 0x1e0),L"OBJECT");
    }
    else {
      uVar3 = 1;
    }
  }
  else {
    uVar2 = 1;
  }
  FUN_004c9210(*(undefined8 *)(param_1 + 0x1e0));
  FUN_004cd370(param_1,uVar2,uVar3);
  while( true ) {
    cVar1 = FUN_004c9a90(*(undefined8 *)(param_1 + 0x1e0),&LAB_004cdecc);
    if (cVar1 != '\0') break;
    cVar1 = FUN_004c9a90(*(undefined8 *)(param_1 + 0x1e0),L"OBJECT");
    if (cVar1 != '\0') break;
    cVar1 = FUN_004c9a90(*(undefined8 *)(param_1 + 0x1e0),L"INHERITED");
    if (cVar1 != '\0') break;
    cVar1 = FUN_004c9a90(*(undefined8 *)(param_1 + 0x1e0),L"INLINE");
    if (cVar1 != '\0') break;
    FUN_004cdbc0(param_1);
  }
  FUN_004c8510(*(undefined8 *)(param_1 + 0x1d8),0);
  while( true ) {
    cVar1 = FUN_004c9a90(*(undefined8 *)(param_1 + 0x1e0),&LAB_004cdecc);
    if (cVar1 != '\0') break;
    FUN_004cdd30(param_1);
  }
  FUN_004c8510(*(undefined8 *)(param_1 + 0x1d8),0);
  FUN_004c9210(*(undefined8 *)(param_1 + 0x1e0));
  return;
}

