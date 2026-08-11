/* Ghidra address: 006da240 */
/* Ghidra symbol: FUN_006da240 */


void FUN_006da240(longlong param_1,char param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong lVar3;
  
  if (param_2 != *(char *)(param_1 + 0x37)) {
    *(char *)(param_1 + 0x37) = param_2;
    FUN_004b1830(param_1,0);
    pcVar2 = (code *)FUN_00411550(param_1,0xffffffff);
    lVar3 = (*pcVar2)(param_1);
    uVar1 = *(undefined8 *)(lVar3 + 0x28);
    pcVar2 = (code *)FUN_00411550(uVar1,0xffaa);
    (*pcVar2)(uVar1,param_1);
  }
  return;
}

