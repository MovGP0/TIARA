/* Ghidra address: 0180d700 */
/* Ghidra symbol: FUN_0180d700 */


undefined8 FUN_0180d700(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  iVar1 = (**(code **)*param_2)(param_2);
  FUN_004169f0(param_1,iVar1 * 2);
  uVar2 = FUN_004095c0((longlong)iVar1);
  FUN_004b6dc0(param_2,0);
  (**(code **)(*param_2 + 0x18))(param_2,uVar2,iVar1);
  uVar3 = FUN_00414de0(param_1);
  FUN_004c8670(uVar2,uVar3,iVar1);
  FUN_004095f0(uVar2,(longlong)iVar1);
  return param_1;
}

