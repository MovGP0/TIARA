/* Ghidra address: 0044d280 */
/* Ghidra symbol: FUN_0044d280 */


void FUN_0044d280(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 local_8a4 [4];
  undefined8 local_8a0;
  undefined1 local_898 [2048];
  undefined1 local_98 [128];
  
  local_8a0 = 0;
  uVar1 = FUN_0044d040(param_1,param_2,local_898,0x400);
  if (*PTR_DAT_02004750 == '\0') {
    uVar3 = FUN_00419c40(PTR_IMAGE_DOS_HEADER_0200c280);
    thunk_FUN_039b3fd2(uVar3,*(undefined4 *)(PTR_PTR_020021e0 + 8),local_98,0x40);
    thunk_FUN_041604c6(0,local_898,local_98,0x2010);
  }
  else {
    FUN_0040d040(PTR_DAT_02002680);
    FUN_00409900();
    iVar2 = thunk_FUN_041c7398(1,0,local_898,uVar1,0,0,0,0);
    FUN_00419260(&local_8a0,&DAT_0044d248,1,(longlong)iVar2);
    thunk_FUN_041c7398(1,0,local_898,uVar1,local_8a0,iVar2,0,0);
    uVar3 = thunk_FUN_0415ef6d(0xfffffff4);
    thunk_FUN_041ac39f(uVar3,local_8a0,iVar2,local_8a4,0);
    uVar3 = thunk_FUN_0415ef6d(0xfffffff4);
    thunk_FUN_041ac39f(uVar3,&DAT_0044d43c,2,local_8a4,0);
  }
  FUN_00419430(&local_8a0,&DAT_0044d248);
  return;
}

