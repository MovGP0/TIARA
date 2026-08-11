/* Ghidra address: 00868270 */
/* Ghidra symbol: FUN_00868270 */


undefined4 FUN_00868270(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined4 local_20;
  
  local_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  local_40 = (longlong *)0x0;
  *param_2 = 0;
  FUN_00868080(param_1,&local_40);
  uVar2 = FUN_00460ba0(&local_38);
  uVar1 = (**(code **)(*local_40 + 0x160))(local_40,uVar2);
  FUN_0041d630(uVar1);
  FUN_00467e90(param_2,&local_38);
  local_20 = 0;
  FUN_0041b800(&local_40);
  FUN_00460ba0(&local_38);
  return local_20;
}

