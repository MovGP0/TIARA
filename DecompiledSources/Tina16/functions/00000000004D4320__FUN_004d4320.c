/* Ghidra address: 004d4320 */
/* Ghidra symbol: FUN_004d4320 */


void FUN_004d4320(longlong param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  if ((char)param_2 == '\0') {
    *(ushort *)(param_1 + 0x34) = *(ushort *)(param_1 + 0x34) & 0xffef;
  }
  else {
    *(ushort *)(param_1 + 0x34) = *(ushort *)(param_1 + 0x34) | 0x10;
  }
  if (param_3 != '\0') {
    iVar1 = FUN_004d3e30();
    iVar3 = 0;
    if (-1 < iVar1 + -1) {
      do {
        uVar2 = FUN_004d3de0(param_1,iVar3);
        FUN_004d4320(uVar2,param_2,1);
        iVar3 = iVar3 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  return;
}

