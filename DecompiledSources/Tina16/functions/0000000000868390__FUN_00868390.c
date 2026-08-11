/* Ghidra address: 00868390 */
/* Ghidra symbol: FUN_00868390 */


undefined4 FUN_00868390(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong *local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  local_18 = 0;
  local_20 = (longlong *)0x0;
  *param_2 = 0;
  FUN_00868350(param_1,&local_20);
  uVar2 = FUN_00414520(&local_18);
  uVar1 = (**(code **)(*local_20 + 0x160))(local_20,uVar2);
  FUN_0041d630(uVar1);
  FUN_004168b0(param_2,local_18);
  local_10 = 0;
  FUN_0041b800(&local_20);
  FUN_00414520(&local_18);
  return local_10;
}

