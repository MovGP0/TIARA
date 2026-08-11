/* Ghidra address: 00d0d1e0 */
/* Ghidra symbol: FUN_00d0d1e0 */


void FUN_00d0d1e0(longlong *param_1,uint param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  FUN_00411a80(param_1,param_2);
  uVar2 = (**(code **)(*param_1 + 0x58))(param_1);
  iVar1 = (**(code **)(*param_1 + 0x60))(*param_1);
  FUN_0040d200(uVar2,(longlong)iVar1,0);
  FUN_00cd6160(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

