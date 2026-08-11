/* Ghidra address: 004c0180 */
/* Ghidra symbol: FUN_004c0180 */


void FUN_004c0180(longlong param_1,undefined8 param_2)

{
  char cVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = auStack_48;
  while( true ) {
    cVar1 = FUN_004be290(param_1);
    if (cVar1 != '\0') break;
    FUN_004c0960(param_1,param_2);
  }
  FUN_004be030(param_1,0);
  local_10 = *(undefined8 *)(param_1 + 0x58);
  local_18 = *(undefined8 *)(param_1 + 0x50);
  pcVar2 = (code *)FUN_00411550(param_2,0xfffb);
  uVar3 = (*pcVar2)(param_2);
  *(undefined8 *)(param_1 + 0x58) = uVar3;
  pcVar2 = (code *)FUN_00411550(param_2,0xfffc);
  lVar4 = (*pcVar2)(param_2);
  *(longlong *)(param_1 + 0x50) = lVar4;
  if (lVar4 == 0) {
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x30);
  }
  while( true ) {
    cVar1 = FUN_004be290(param_1);
    if (cVar1 != '\0') break;
    FUN_004bfcb0(param_1,0);
  }
  FUN_004be030(param_1,0);
  *(undefined8 *)(param_1 + 0x58) = local_10;
  *(undefined8 *)(param_1 + 0x50) = local_18;
  return;
}

