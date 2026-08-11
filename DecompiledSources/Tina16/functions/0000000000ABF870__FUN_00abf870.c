/* Ghidra address: 00abf870 */
/* Ghidra symbol: FUN_00abf870 */


void FUN_00abf870(longlong param_1,uint param_2)

{
  code *pcVar1;
  char cVar2;
  longlong lVar3;
  
  FUN_00411a80(param_1,param_2);
  pcVar1 = (code *)FUN_00411550(param_1,0xffb0);
  cVar2 = (*pcVar1)(param_1);
  if (cVar2 != '\0') {
    lVar3 = FUN_007f9b70(param_1,1);
    if (lVar3 != 0) {
      FUN_00801e40(lVar3,*(undefined8 *)(param_1 + 0x78));
    }
  }
  FUN_00652b60(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

