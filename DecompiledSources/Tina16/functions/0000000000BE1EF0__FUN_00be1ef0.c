/* Ghidra address: 00be1ef0 */
/* Ghidra symbol: FUN_00be1ef0 */


undefined8 FUN_00be1ef0(undefined8 param_1,longlong *param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((-1 < param_3) && (iVar1 = (**(code **)(*param_2 + 0x28))(param_2), param_3 < iVar1)) {
    uVar2 = FUN_00bcfb80(param_2,param_3);
    return uVar2;
  }
  return 0;
}

