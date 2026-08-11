/* Ghidra address: 015b3b90 */
/* Ghidra symbol: FUN_015b3b90 */


void FUN_015b3b90(longlong *param_1,byte param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  FUN_00411a80(param_1,param_2);
  uVar2 = (**(code **)(*param_1 + 0x58))(param_1);
  iVar1 = (**(code **)(*param_1 + 0x60))(*param_1);
  FUN_0040d200(uVar2,(longlong)iVar1,0);
  FUN_015a9e30(param_1,param_2 & 0xfc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

