/* Ghidra address: 009d7ea0 */
/* Ghidra symbol: FUN_009d7ea0 */


undefined4 FUN_009d7ea0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 local_18;
  undefined4 local_10;
  
  local_18 = 0;
  *param_2 = 0;
  plVar1 = (longlong *)FUN_009d7dd0(param_1);
  uVar2 = (**(code **)(*plVar1 + 0x2d0))(plVar1);
  FUN_009d3370(&local_18,uVar2,*(undefined8 *)(param_1 + 0x20),0);
  FUN_0041b890(param_2,local_18,&DAT_009d7f5c);
  local_10 = 0;
  FUN_0041b800(&local_18);
  return local_10;
}

