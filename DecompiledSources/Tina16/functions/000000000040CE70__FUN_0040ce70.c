/* Ghidra address: 0040ce70 */
/* Ghidra symbol: FUN_0040ce70 */


undefined8 FUN_0040ce70(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  FUN_0040d200(param_1,0x268,0);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined2 *)(param_1 + 8) = 0xd7b0;
  *(ushort *)(param_1 + 10) = (ushort)DAT_01db9055;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(code **)(param_1 + 0x20) = FUN_0040cb70;
  iVar1 = FUN_00414d00(param_2);
  if (0x103 < iVar1) {
    FUN_00409930(3);
    iVar1 = 0x103;
  }
  FUN_00409a70(param_2,param_1 + 0x60,(longlong)(iVar1 * 2));
  *(undefined2 *)(param_1 + 0x60 + (longlong)iVar1 * 2) = 0;
  return 0;
}

