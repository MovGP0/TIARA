/* Ghidra address: 009d8390 */
/* Ghidra symbol: FUN_009d8390 */


undefined4 FUN_009d8390(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  local_28 = 0;
  local_30 = 0;
  *param_3 = 0;
  plVar1 = (longlong *)FUN_009d81f0(param_1);
  FUN_004168e0(&local_30,param_2);
  uVar2 = (**(code **)(*plVar1 + 0x2d0))(plVar1,0,local_30);
  FUN_009d3370(&local_28,uVar2,*(undefined8 *)(param_1 + 0x20),0);
  FUN_0041b890(param_3,local_28,&DAT_009d847c);
  local_20 = 0;
  FUN_00414520(&local_30);
  FUN_0041b800(&local_28);
  return local_20;
}

