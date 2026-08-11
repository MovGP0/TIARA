/* Ghidra address: 00a0b490 */
/* Ghidra symbol: FUN_00a0b490 */


void FUN_00a0b490(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  code *pcVar2;
  
  lVar1 = FUN_004097b0();
  if (lVar1 == 0) {
    *(undefined4 *)(param_2 + 0x3fc) = 100;
  }
  else {
    *(undefined4 *)(param_2 + 0x3fc) = 0;
  }
  FUN_00498350(param_2 + 0x48,0,0,0,0);
  pcVar2 = (code *)FUN_00411550(*(undefined8 *)(param_2 + 0x420),0xfffd);
  (*pcVar2)(*(undefined8 *)(param_2 + 0x420),*(undefined8 *)(param_2 + 0x420),2,
            *(undefined1 *)(param_2 + 0x3fc),*(undefined1 *)(*(longlong *)(param_2 + 0x420) + 0x3a),
            param_2 + 0x48,0);
  if (*(char *)(*(longlong *)(param_2 + 0x420) + 0x3a) != '\0') {
    (**(code **)(**(longlong **)(param_2 + 0x420) + 0x20))
              (*(undefined8 *)(param_2 + 0x420),*(undefined8 *)(param_2 + 0x420));
  }
  return;
}

