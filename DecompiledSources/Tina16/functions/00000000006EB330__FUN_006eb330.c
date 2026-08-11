/* Ghidra address: 006eb330 */
/* Ghidra symbol: FUN_006eb330 */


void FUN_006eb330(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  short local_20 [2];
  ushort local_1c;
  
  FUN_006587d0(param_1,param_2);
  if (*(longlong *)(param_2 + 0x18) == 0) {
    *(undefined8 *)(param_2 + 0x18) = 1;
    thunk_FUN_03cc0d62(local_20);
    iVar1 = FUN_0064fca0(param_1,0x84,0,(int)local_20[0] | (uint)local_1c << 0x10);
    if (iVar1 == 1) {
      uVar2 = FUN_00808880(*(undefined8 *)PTR_DAT_02005950,0xfffffffc);
      thunk_FUN_04176eb1(uVar2);
    }
    else if (iVar1 - 6U < 2) {
      uVar2 = FUN_00808880(*(undefined8 *)PTR_DAT_02005950,0xfffffffe);
      thunk_FUN_04176eb1(uVar2);
    }
  }
  return;
}

