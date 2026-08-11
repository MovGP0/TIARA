/* Ghidra address: 013a3fe0 */
/* Ghidra symbol: FUN_013a3fe0 */


void FUN_013a3fe0(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  lVar1 = *(longlong *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8);
  iVar4 = *(int *)(lVar1 + 0x10);
  iVar3 = 0;
  local_40 = param_1;
  if (-1 < iVar4 + -1) {
    do {
      uVar2 = FUN_00b94e60(lVar1,iVar3);
      FUN_013a3fb0(auStack_68,uVar2);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00414b50(local_30,L"[Invalidate3DProcessed()]");
  FUN_013a40d0(local_40,local_30);
  FUN_00414480(local_30);
  return;
}

