/* Ghidra address: 00f40660 */
/* Ghidra symbol: FUN_00f40660 */


void FUN_00f40660(longlong param_1,short *param_2)

{
  short sVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  sVar1 = *param_2;
  if (sVar1 == 0x20) {
    uVar2 = *(undefined8 *)(param_1 + 0x4e0);
    pcVar3 = (code *)FUN_00411550(uVar2,0xffea);
    (*pcVar3)(uVar2);
  }
  else if (sVar1 == 0x26) {
    FUN_00f40880(param_1,*(undefined8 *)(param_1 + 0x4d0));
    uVar2 = *(undefined8 *)(param_1 + 0x4d0);
    pcVar3 = (code *)FUN_00411550(uVar2,0xffea);
    (*pcVar3)(uVar2);
  }
  else if (sVar1 == 0x28) {
    FUN_00f40880(param_1,*(undefined8 *)(param_1 + 0x4d8));
    uVar2 = *(undefined8 *)(param_1 + 0x4d8);
    pcVar3 = (code *)FUN_00411550(uVar2,0xffea);
    (*pcVar3)(uVar2);
  }
  return;
}

