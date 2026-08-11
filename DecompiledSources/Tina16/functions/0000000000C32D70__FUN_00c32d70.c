/* Ghidra address: 00c32d70 */
/* Ghidra symbol: FUN_00c32d70 */


undefined4 FUN_00c32d70(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  longlong *plVar3;
  undefined4 uVar4;
  int iVar5;
  
  uVar4 = 0;
  iVar5 = 0;
  while( true ) {
    iVar2 = FUN_00c1aa10(*(undefined8 *)(param_1 + 0x50));
    if ((iVar2 <= iVar5) || (1 < (byte)uVar4)) break;
    plVar3 = (longlong *)FUN_00c2fce0(*(undefined8 *)(param_1 + 0x50),iVar5);
    uVar1 = (**(code **)(*plVar3 + 0x18))(plVar3);
    if ((byte)uVar4 < (byte)uVar1) {
      uVar4 = uVar1;
    }
    iVar5 = iVar5 + 1;
  }
  return uVar4;
}

