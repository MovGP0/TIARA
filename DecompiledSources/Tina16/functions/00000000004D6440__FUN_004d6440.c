/* Ghidra address: 004d6440 */
/* Ghidra symbol: FUN_004d6440 */


undefined8 FUN_004d6440(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_60 [8];
  code *local_58;
  
  PTR_IMAGE_DOS_HEADER_01dcc698 = PTR_IMAGE_DOS_HEADER_0200c280;
  iVar1 = thunk_FUN_03975e2d(PTR_IMAGE_DOS_HEADER_0200c280,PTR_u_TPUtilWindow_01dcc6c0,local_60);
  if ((iVar1 == 0) || (local_58 != thunk_FUN_03e425c0)) {
    if (iVar1 != 0) {
      thunk_FUN_041c8eb3(PTR_u_TPUtilWindow_01dcc6c0,PTR_IMAGE_DOS_HEADER_0200c280);
    }
    thunk_FUN_03e7f392(&DAT_01dcc680);
  }
  uVar2 = thunk_FUN_0411ba23(0x80,PTR_u_TPUtilWindow_01dcc6c0,&LAB_004d6544,0x80000000,0,0,0,0,0,0,
                             PTR_IMAGE_DOS_HEADER_0200c280,0);
  if (*param_1 != 0) {
    uVar3 = FUN_004d6210(param_1);
    thunk_FUN_03c9d277(uVar2,0xfffffffc,uVar3);
  }
  return uVar2;
}

