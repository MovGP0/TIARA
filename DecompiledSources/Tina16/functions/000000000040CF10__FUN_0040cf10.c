/* Ghidra address: 0040cf10 */
/* Ghidra symbol: FUN_0040cf10 */


undefined8 FUN_0040cf10(longlong param_1,undefined8 param_2,short param_3)

{
  int iVar1;
  
  FUN_0040d200(param_1,0x2f2,0);
  *(longlong *)(param_1 + 0x18) = param_1 + 0x268;
  *(undefined2 *)(param_1 + 8) = 0xd7b0;
  *(ushort *)(param_1 + 10) = (ushort)DAT_01db9055;
  if (param_3 == 0) {
    *(undefined2 *)(param_1 + 0x2e8) = DAT_02006a28;
  }
  else {
    *(short *)(param_1 + 0x2e8) = param_3;
  }
  *(undefined4 *)(param_1 + 0xc) = 0x80;
  *(code **)(param_1 + 0x20) = FUN_0040cb70;
  iVar1 = FUN_00414d00(param_2);
  if (0x103 < iVar1) {
    FUN_00409930(3);
    iVar1 = 0x103;
  }
  FUN_00409a70(param_2,param_1 + 0x60,(longlong)(iVar1 * 2));
  *(undefined2 *)(param_1 + 0x60 + (longlong)iVar1 * 2) = 0;
  *(undefined1 *)(param_1 + 0x2ea) = 0;
  return 0;
}

