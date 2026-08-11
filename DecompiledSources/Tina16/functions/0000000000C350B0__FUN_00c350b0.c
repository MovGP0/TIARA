/* Ghidra address: 00c350b0 */
/* Ghidra symbol: FUN_00c350b0 */


undefined4 FUN_00c350b0(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  
  uVar1 = 0;
  iVar4 = 0;
  while( true ) {
    if ((char)uVar1 != '\0') {
      return uVar1;
    }
    iVar2 = FUN_00c1aa10(*(undefined8 *)(param_1 + 0x50));
    if (iVar2 <= iVar4) break;
    uVar3 = FUN_00c2fce0(*(undefined8 *)(param_1 + 0x50),iVar4);
    uVar1 = FUN_00c2a4a0(uVar3);
    iVar4 = iVar4 + 1;
  }
  return uVar1;
}

