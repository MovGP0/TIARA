/* Ghidra address: 00c76330 */
/* Ghidra symbol: FUN_00c76330 */


undefined4 FUN_00c76330(undefined8 param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 local_b0 [37];
  undefined4 local_1c;
  
  cVar1 = FUN_00c762d0();
  if (((cVar1 == '\x01') && (*(char *)(*(longlong *)(DAT_02019d30 + 0x1d0) + 0x29) == '\x01')) &&
     (*(char *)(*(longlong *)(DAT_02019d30 + 0x1d0) + 8) == '\x01')) {
    FUN_00409a70(param_1,local_b0,0x98);
    local_1c = 0;
    local_b0[0] = 0x98;
    uVar2 = thunk_FUN_03e77af1(local_b0);
    FUN_00409a70(local_b0,param_1,0x98);
  }
  else {
    uVar2 = thunk_FUN_03e77af1(param_1);
  }
  return uVar2;
}

