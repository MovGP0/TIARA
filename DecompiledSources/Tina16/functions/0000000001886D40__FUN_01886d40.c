/* Ghidra address: 01886d40 */
/* Ghidra symbol: FUN_01886d40 */


undefined8 FUN_01886d40(undefined8 param_1,longlong *param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_004169f0(param_1,param_3 * 2);
  uVar1 = FUN_004095c0((longlong)param_3);
  (**(code **)(*param_2 + 0x18))(param_2,uVar1,param_3);
  uVar2 = FUN_00414de0(param_1);
  FUN_004c8670(uVar1,uVar2,param_3);
  FUN_004095f0(uVar1,(longlong)param_3);
  return param_1;
}

