/* Ghidra address: 00709b80 */
/* Ghidra symbol: FUN_00709b80 */


void FUN_00709b80(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  
  FUN_00786bc0(param_1,param_2);
  FUN_00785c20(param_1,param_2);
  *(undefined1 *)(param_1 + 0x44) = 0;
  iVar2 = FUN_00709e90(param_1,(longlong)*(short *)(param_2 + 0x10),
                       (longlong)*(short *)(param_2 + 0x12));
  iVar1 = *(int *)(param_1 + 0x40);
  if (iVar2 != iVar1) {
    *(int *)(param_1 + 0x40) = iVar2;
    FUN_00709ae0(param_1,iVar1,iVar2);
  }
  return;
}

