/* Ghidra address: 0045ad50 */
/* Ghidra symbol: FUN_0045ad50 */


undefined8 * FUN_0045ad50(longlong *param_1,undefined8 *param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x10))(param_1,param_3,param_4 + 1);
  if ((0 < param_4 + 1) && (iVar1 == 0)) {
    uVar2 = FUN_0044d710(&PTR_FUN_0043a1a0,1,PTR_PTR_02002c90);
    FUN_004134c0(uVar2);
  }
  FUN_004169f0(param_2,iVar1);
  uVar2 = FUN_00416740(*param_2);
  (**(code **)(*param_1 + 0x18))(param_1,param_3,param_4 + 1,uVar2,iVar1);
  return param_2;
}

