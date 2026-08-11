/* Ghidra address: 01430770 */
/* Ghidra symbol: FUN_01430770 */


int FUN_01430770(undefined8 param_1,byte param_2,ulonglong param_3)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  
  iVar1 = 0;
  if (param_2 < 0x20) {
    uVar2 = 1 << (param_2 & 0x1f);
    param_3 = (ulonglong)uVar2;
    bVar3 = (uVar2 & 0x7fffffe) != 0;
  }
  else {
    bVar3 = false;
  }
  if (bVar3) {
    iVar1 = param_2 + 0x40;
  }
  if ((byte)(param_2 - 0x18) < 0x10) {
    bVar3 = ((int)CONCAT62((int6)(param_3 >> 0x10),1) << (param_2 - 0x18 & 0x1f) & 0x1ff8U) != 0;
  }
  else {
    bVar3 = false;
  }
  if (bVar3) {
    iVar1 = param_2 + 0x15;
  }
  return iVar1;
}

