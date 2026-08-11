/* Ghidra address: 006ed8d0 */
/* Ghidra symbol: FUN_006ed8d0 */


void FUN_006ed8d0(longlong param_1,char param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (*(char *)(param_1 + 0x19) != param_2) {
    *(char *)(param_1 + 0x19) = param_2;
    lVar1 = FUN_006edb60(*(undefined8 *)(param_1 + 8));
    if (lVar1 != 0) {
      uVar2 = FUN_006edb60(*(undefined8 *)(param_1 + 8));
      pcVar3 = (code *)FUN_00411550(uVar2,0xffee);
      (*pcVar3)(uVar2);
    }
    FUN_006ed570(param_1);
  }
  return;
}

