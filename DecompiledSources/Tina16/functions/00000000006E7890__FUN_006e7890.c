/* Ghidra address: 006e7890 */
/* Ghidra symbol: FUN_006e7890 */


void FUN_006e7890(longlong param_1,longlong param_2)

{
  char cVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  FUN_0065b830(*(undefined8 *)(param_1 + 8));
  cVar1 = FUN_0065be20(*(undefined8 *)(param_1 + 8));
  if (cVar1 != '\0') {
    uVar3 = *(undefined8 *)(param_1 + 8);
    pcVar2 = (code *)FUN_00411550(uVar3,0xffc5);
    cVar1 = (*pcVar2)(uVar3);
    if (cVar1 != '\0') {
      if (*(short *)(param_2 + 0x18) == 1) {
        *(undefined2 *)(param_2 + 0x18) = 2;
      }
      else if (*(short *)(param_2 + 0x18) == 2) {
        *(undefined2 *)(param_2 + 0x18) = 1;
      }
    }
    uVar3 = FUN_0065b870(*(undefined8 *)(param_1 + 8));
    FUN_004701a0(uVar3,0x447,0,param_2);
  }
  return;
}

