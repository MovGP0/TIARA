/* Ghidra address: 009e1e60 */
/* Ghidra symbol: FUN_009e1e60 */


longlong * FUN_009e1e60(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 local_7e8 [2008];
  
  thunk_FUN_0418dd92(1000,local_7e8);
  FUN_00416830(param_1,local_7e8,1000);
  iVar3 = 0;
  lVar1 = *param_1;
  if (lVar1 != 0) {
    iVar3 = *(int *)(lVar1 + -4);
  }
  if (*(short *)(*param_1 + -2 + (longlong)iVar3 * 2) == 0x5c) {
    uVar4 = 0;
    if (lVar1 != 0) {
      uVar4 = *(undefined4 *)(lVar1 + -4);
    }
    FUN_00416e20(param_1,uVar4,1);
  }
  cVar2 = FUN_00440b00(*param_1,1);
  if (cVar2 == '\0') {
    FUN_00409a30(*param_1);
    FUN_00409900();
  }
  iVar3 = 0;
  if (*param_1 != 0) {
    iVar3 = *(int *)(*param_1 + -4);
  }
  if (*(short *)(*param_1 + -2 + (longlong)iVar3 * 2) != 0x5c) {
    FUN_00416ad0(param_1,&LAB_009e1f24);
  }
  return param_1;
}

