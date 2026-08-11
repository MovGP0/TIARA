/* Ghidra address: 01891230 */
/* Ghidra symbol: FUN_01891230 */


void FUN_01891230(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  code *pcVar3;
  
  FUN_006516f0(param_1);
  *(undefined1 *)(param_1 + 0x97) = 0;
  cVar2 = (**(code **)(*param_1 + 0xf0))(param_1);
  if (cVar2 != '\0') {
    lVar1 = param_1[0x98];
    pcVar3 = (code *)FUN_00411550(lVar1,0xffb0);
    cVar2 = (*pcVar3)(lVar1);
    if (cVar2 == '\0') {
      FUN_01891930(param_1);
      (**(code **)(*param_1 + 0x180))(param_1);
    }
  }
  return;
}

