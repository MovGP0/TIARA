/* Ghidra address: 00432270 */
/* Ghidra symbol: FUN_00432270 */


bool FUN_00432270(ushort *param_1,undefined8 param_2)

{
  ushort uVar1;
  char cVar2;
  bool bVar3;
  
  uVar1 = *param_1;
  if (uVar1 < 0x100) {
    if (uVar1 - 0x30 < 0x10) {
      bVar3 = ((int)CONCAT62((int6)((ulonglong)param_2 >> 0x10),1) << ((byte)(uVar1 - 0x30) & 0x1f)
              & 0x3ffU) != 0;
    }
    else {
      bVar3 = false;
    }
  }
  else {
    cVar2 = FUN_00431e30(uVar1);
    bVar3 = cVar2 == '\r';
  }
  return bVar3;
}

