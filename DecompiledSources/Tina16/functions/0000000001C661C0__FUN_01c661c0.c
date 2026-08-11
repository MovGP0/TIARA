/* Ghidra address: 01c661c0 */
/* Ghidra symbol: FUN_01c661c0 */


void FUN_01c661c0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_348 [40];
  undefined1 local_320 [768];
  
  if (*(longlong *)(param_1 + 0x27a8) != 0) {
    FUN_0040cf10(local_320,L"C:\\Lbl_list.txt",0);
    FUN_00409900();
    FUN_0040ca00(local_320);
    FUN_00409900();
    lVar1 = *(longlong *)(param_1 + 0x27a8);
    iVar4 = *(int *)(lVar1 + 0x10);
    iVar3 = 0;
    if (-1 < iVar4 + -1) {
      do {
        uVar2 = FUN_00b94e60(lVar1,iVar3);
        FUN_01c660b0(auStack_348,uVar2);
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    FUN_0040d150(local_320);
    FUN_00409900();
  }
  return;
}

