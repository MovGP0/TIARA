/* Ghidra address: 00c597b0 */
/* Ghidra symbol: FUN_00c597b0 */


void FUN_00c597b0(longlong param_1,short *param_2)

{
  short sVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  sVar1 = *param_2;
  if (sVar1 == 0x20) {
    uVar2 = *(undefined8 *)(param_1 + 0x4a0);
    pcVar3 = (code *)FUN_00411550(uVar2,0xffea);
    (*pcVar3)(uVar2);
  }
  else if (sVar1 == 0x26) {
    FUN_00c59970(param_1,*(undefined8 *)(param_1 + 0x490));
    uVar2 = *(undefined8 *)(param_1 + 0x490);
    pcVar3 = (code *)FUN_00411550(uVar2,0xffea);
    (*pcVar3)(uVar2);
  }
  else if (sVar1 == 0x28) {
    FUN_00c59970(param_1,*(undefined8 *)(param_1 + 0x498));
    uVar2 = *(undefined8 *)(param_1 + 0x498);
    pcVar3 = (code *)FUN_00411550(uVar2,0xffea);
    (*pcVar3)(uVar2);
  }
  return;
}

