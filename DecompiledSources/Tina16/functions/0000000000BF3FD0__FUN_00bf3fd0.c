/* Ghidra address: 00bf3fd0 */
/* Ghidra symbol: FUN_00bf3fd0 */


int FUN_00bf3fd0(longlong param_1,undefined8 param_2,byte param_3,char param_4)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  
  puVar3 = (ushort *)FUN_00416740(param_2);
  if ((puVar3 == (ushort *)0x0) || ((*(uint *)(param_1 + 0x63a) & 2) == 0 && param_4 == '\0')) {
    iVar2 = 0;
  }
  else {
    iVar2 = 0;
    for (; (uVar1 = *puVar3, uVar1 != 0 && (uVar1 < 0x21)); puVar3 = puVar3 + 1) {
      if ((param_3 & uVar1 == 9) == 0) {
        iVar2 = iVar2 + 1;
      }
      else {
        iVar2 = iVar2 + *(int *)(param_1 + 0x618);
      }
    }
  }
  return iVar2;
}

