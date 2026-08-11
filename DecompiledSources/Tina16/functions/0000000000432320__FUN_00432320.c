/* Ghidra address: 00432320 */
/* Ghidra symbol: FUN_00432320 */


ulonglong FUN_00432320(longlong param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined1 local_1c [4];
  
  iVar2 = 0;
  if (param_1 != 0) {
    iVar2 = *(int *)(param_1 + -4);
  }
  if ((iVar2 + -1 < param_2) || (param_2 < 0)) {
    FUN_00431e90(param_2,0,iVar2 + -1);
  }
  uVar1 = *(ushort *)(param_1 + (longlong)param_2 * 2);
  if (uVar1 < 0x100) {
    uVar4 = (ulonglong)(byte)PTR_DAT_0200c3f0[uVar1];
  }
  else {
    uVar3 = FUN_00431ef0(param_1,param_2,local_1c);
    uVar4 = FUN_00431e30(uVar3);
  }
  return uVar4;
}

