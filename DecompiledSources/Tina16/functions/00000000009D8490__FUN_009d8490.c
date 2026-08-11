/* Ghidra address: 009d8490 */
/* Ghidra symbol: FUN_009d8490 */


undefined4 FUN_009d8490(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  *param_4 = 0;
  plVar1 = (longlong *)FUN_009d81f0(param_1);
  FUN_004168e0(&local_30,param_2);
  FUN_004168e0(&local_38,param_3);
  uVar2 = (**(code **)(*plVar1 + 0x2d0))(plVar1,local_30,local_38);
  FUN_009d3370(&local_28,uVar2,*(undefined8 *)(param_1 + 0x20),0);
  FUN_0041b890(param_4,local_28,&DAT_009d85b0);
  local_20 = 0;
  FUN_004145c0(&local_38,2);
  FUN_0041b800(&local_28);
  return local_20;
}

