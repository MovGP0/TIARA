/* Ghidra address: 00809c70 */
/* Ghidra symbol: FUN_00809c70 */


undefined8 FUN_00809c70(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  
  iVar2 = FUN_00808040();
  iVar4 = 0;
  if (-1 < iVar2 + -1) {
    do {
      uVar3 = FUN_00808020(*(undefined8 *)(param_1 + 0x30),iVar4);
      cVar1 = FUN_00807890(uVar3);
      if (cVar1 != '\0') {
        uVar3 = FUN_00808020(*(undefined8 *)(param_1 + 0x30),iVar4);
        return uVar3;
      }
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

