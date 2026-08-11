/* Ghidra address: 0060d9b0 */
/* Ghidra symbol: FUN_0060d9b0 */


void FUN_0060d9b0(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  FUN_00411a80(param_1,param_2);
  if (*(longlong *)(param_1 + 0x50) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x50) = 0;
    FUN_00410f20(uVar1);
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 0x58));
  iVar2 = (**(code **)(*DAT_02011f90 + 0x10))(DAT_02011f90);
  if (iVar2 == 0) {
    DAT_02011f90 = (longlong *)0x0;
  }
  FUN_004b1010(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

