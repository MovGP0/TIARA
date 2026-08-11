/* Ghidra address: 00868940 */
/* Ghidra symbol: FUN_00868940 */


undefined4
FUN_00868940(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  longlong *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  local_28 = 0;
  local_30 = 0;
  local_38 = (longlong *)0x0;
  local_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  local_60 = 0;
  *param_4 = 0;
  FUN_008687d0(param_1,&local_38);
  FUN_004685b0(&local_50,2,1);
  FUN_004168e0(&local_58,param_3);
  FUN_004168e0(&local_60,param_2);
  uVar2 = FUN_0041b800(&local_30);
  uVar1 = (**(code **)(*local_38 + 0x1c0))(local_38,&local_50,local_58,local_60,uVar2);
  FUN_0041d630(uVar1);
  FUN_00862f00(&local_28,local_30);
  FUN_0041b890(param_4,local_28,&DAT_00868ad4);
  local_20 = 0;
  FUN_004145c0(&local_60,2);
  FUN_00460ba0(&local_50);
  FUN_0041b800(&local_38);
  FUN_0041b800(&local_30);
  FUN_0041b800(&local_28);
  return local_20;
}

