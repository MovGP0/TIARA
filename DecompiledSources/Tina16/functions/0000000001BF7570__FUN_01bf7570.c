/* Ghidra address: 01bf7570 */
/* Ghidra symbol: FUN_01bf7570 */


void FUN_01bf7570(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 local_20;
  
  local_30 = auStack_58;
  local_20 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
  *(undefined1 *)(param_1 + 0x150) = 1;
  if (*(longlong *)(param_1 + 0x120) != 0) {
    FUN_00410f20(*(longlong *)(param_1 + 0x120));
  }
  plVar1 = (longlong *)FUN_01bf6e30(param_1);
  *(longlong **)(param_1 + 0x120) = plVar1;
  (**(code **)(*plVar1 + 0x10))(plVar1,*(undefined8 *)(param_1 + 0xe0));
  FUN_004b9ef0(local_20,param_2);
  FUN_004b6dc0(local_20,0);
  FUN_004b8d00(local_20,param_1);
  FUN_004d3040(param_1);
  FUN_01bf7e10(param_1,*(undefined8 *)(param_1 + 0xe0));
  FUN_01bfb630(*(undefined8 *)(param_1 + 0xe0));
  *(undefined1 *)(param_1 + 0x150) = 0;
  FUN_00410f20(local_20);
  return;
}

