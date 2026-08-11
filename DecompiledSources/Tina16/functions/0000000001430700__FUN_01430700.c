/* Ghidra address: 01430700 */
/* Ghidra symbol: FUN_01430700 */


char FUN_01430700(undefined8 param_1,int param_2,ulonglong param_3)

{
  char cVar1;
  uint uVar2;
  bool bVar3;
  
  cVar1 = '\0';
  if (param_2 - 0x40U < 0x20) {
    uVar2 = 1 << ((byte)(param_2 - 0x40U) & 0x1f);
    param_3 = (ulonglong)uVar2;
    bVar3 = (uVar2 & 0x7fffffe) != 0;
  }
  else {
    bVar3 = false;
  }
  if (bVar3) {
    cVar1 = (char)param_2 + -0x40;
  }
  if (param_2 - 0x30U < 0x10) {
    bVar3 = ((int)CONCAT62((int6)(param_3 >> 0x10),1) << ((byte)(param_2 - 0x30U) & 0x1f) & 0x3ffU)
            != 0;
  }
  else {
    bVar3 = false;
  }
  if (bVar3) {
    cVar1 = (char)param_2 + -0x15;
  }
  return cVar1;
}

