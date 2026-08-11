/* Ghidra address: 0199c670 */
/* Ghidra symbol: FUN_0199c670 */


void FUN_0199c670(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_38 [32];
  
  if (*(longlong *)(param_1 + 0x3a0) == 0) {
    uVar1 = FUN_0199c370(0,&LAB_01984a68);
    *(undefined8 *)(param_1 + 0x3a0) = uVar1;
  }
  if (*(longlong *)(param_1 + 0x3a0) != 0) {
    FUN_00b95290(*(longlong *)(param_1 + 0x3a0));
    iVar3 = *(int *)(param_1 + 0x10);
    iVar2 = 0;
    if (-1 < iVar3 + -1) {
      do {
        uVar1 = FUN_00b94e60(param_1,iVar2);
        FUN_0199c4a0(auStack_38,uVar1);
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  return;
}

