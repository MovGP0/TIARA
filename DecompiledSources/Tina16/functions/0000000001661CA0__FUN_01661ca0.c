/* Ghidra address: 01661ca0 */
/* Ghidra symbol: FUN_01661ca0 */


void FUN_01661ca0(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined1 local_310 [760];
  
  FUN_0040cf10(local_310,L"c:\\mxda.txt",0);
  FUN_00409900();
  FUN_0040ca00(local_310);
  FUN_00409900();
  iVar3 = *(int *)(param_1 + 0x1e0);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar1 = FUN_0040ef30(local_310,iVar2);
      uVar1 = FUN_0040f3d0(uVar1,0x20);
      uVar1 = FUN_0040f570(uVar1,*(undefined8 *)(DAT_0210f870 + (longlong)iVar2 * 8));
      FUN_0040f590(uVar1);
      FUN_00409900();
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_0040d150(local_310);
  FUN_00409900();
  return;
}

