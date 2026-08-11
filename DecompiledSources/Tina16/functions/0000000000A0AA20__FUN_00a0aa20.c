/* Ghidra address: 00a0aa20 */
/* Ghidra symbol: FUN_00a0aa20 */


void FUN_00a0aa20(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  code *pcVar2;
  uint uVar3;
  
  lVar1 = FUN_004097b0();
  if (lVar1 == 0) {
    *(undefined4 *)(param_2 + 0x3dc) = 100;
  }
  else {
    *(undefined4 *)(param_2 + 0x3dc) = 0;
  }
  uVar3 = 0;
  FUN_00498350(param_2 + 0x48,0,0,0,0);
  pcVar2 = (code *)FUN_00411550(*(undefined8 *)(param_2 + 0x410),0xfffd);
  (*pcVar2)(*(undefined8 *)(param_2 + 0x410),*(undefined8 *)(param_2 + 0x410),2,
            *(undefined1 *)(param_2 + 0x3dc),uVar3 & 0xffffff00,param_2 + 0x48,0);
  return;
}

