/* Ghidra address: 01c06f80 */
/* Ghidra symbol: FUN_01c06f80 */


void FUN_01c06f80(longlong *param_1)

{
  longlong lVar1;
  code *pcVar2;
  
  (**(code **)(*param_1 + -0x38))(param_1);
  lVar1 = param_1[99];
  if (lVar1 != 0) {
    pcVar2 = (code *)FUN_00411550(lVar1,0xffce);
    (*pcVar2)(lVar1);
  }
  return;
}

