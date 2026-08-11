/* Ghidra address: 00834ed0 */
/* Ghidra symbol: FUN_00834ed0 */


void FUN_00834ed0(undefined8 param_1,ushort *param_2)

{
  ushort uVar1;
  char cVar2;
  bool bVar3;
  
  FUN_00680e40(param_1,param_2);
  cVar2 = FUN_008355d0(param_1);
  if ((cVar2 != '\0') && (*param_2 != 0)) {
    uVar1 = *param_2;
    if (uVar1 < 0x100) {
      bVar3 = (*(byte *)((longlong)&PTR_DAT_00834f34 + ((longlong)(ulonglong)uVar1 >> 3)) >>
               ((ulonglong)uVar1 & 7) & 1) != 0;
    }
    else {
      bVar3 = false;
    }
    if (!bVar3) {
      FUN_00835d70(param_1,param_2);
      *param_2 = 0;
    }
  }
  return;
}

