/* Ghidra address: 004c3140 */
/* Ghidra symbol: FUN_004c3140 */


undefined2 * FUN_004c3140(longlong param_1,undefined2 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [40];
  undefined1 *local_60;
  longlong *local_50;
  undefined8 local_48;
  longlong local_40;
  int local_34;
  longlong local_30;
  longlong local_28;
  undefined8 local_20;
  
  local_60 = auStack_88;
  local_48 = 0;
  local_50 = (longlong *)0x0;
  FUN_004be030(*(undefined8 *)(param_1 + 0x70),10);
  local_28 = 0;
  local_30 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
  local_28 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
  FUN_004bea90(*(undefined8 *)(param_1 + 0x70),&local_34,4);
  FUN_004b6e40(local_30,(longlong)local_34);
  FUN_004bea90(*(undefined8 *)(param_1 + 0x70),*(undefined8 *)(local_30 + 8),(longlong)local_34);
  local_20 = FUN_004baeb0(&PTR_FUN_0047f878,1,local_30,0x400);
  FUN_004c1ed0(local_20,&local_48);
  FUN_004bea90(local_20,&local_34,4);
  FUN_004b6e40(local_28,(longlong)local_34);
  FUN_004bea90(local_20,*(undefined8 *)(local_28 + 8),(longlong)local_34);
  cVar1 = FUN_0046efd0(local_48,&local_40);
  if (cVar1 != '\0') {
    uVar2 = FUN_0041b800(&local_50);
    cVar1 = FUN_00452370(local_40,&DAT_004c3368,uVar2);
    if (cVar1 != '\0') goto LAB_004c3283;
  }
  FUN_004b6d70();
LAB_004c3283:
  *param_2 = *(undefined2 *)(local_40 + 8);
  (**(code **)(*local_50 + 0x18))(local_50,param_2,local_28);
  FUN_00410f20(local_20);
  FUN_00410f20(local_28);
  FUN_00410f20(local_30);
  FUN_0041b800(&local_50);
  FUN_00414480(&local_48);
  return param_2;
}

