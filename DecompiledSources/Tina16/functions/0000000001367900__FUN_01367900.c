/* Ghidra address: 01367900 */
/* Ghidra symbol: FUN_01367900 */


longlong * FUN_01367900(longlong *param_1,char param_2,undefined8 param_3,undefined1 param_4)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong *local_res8;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_res8 = param_1;
  puVar1 = auStack_48;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  FUN_01364e80(local_res8,0,param_3);
  plVar3 = (longlong *)FUN_00410e60(&PTR_FUN_00472dd0,1);
  local_res8[5] = (longlong)plVar3;
  (**(code **)(*plVar3 + 0x10))(plVar3);
  *(undefined1 *)(local_res8 + 3) = 0;
  *(undefined1 *)((longlong)local_res8 + 0x3d) = 0;
  *(undefined1 *)((longlong)local_res8 + 0x3c) = 0;
  *(undefined1 *)((longlong)local_res8 + 0x3e) = 0;
  *(undefined1 *)((longlong)local_res8 + 0x3f) = 0;
  *(undefined1 *)((longlong)local_res8 + 0x1c) = 0;
  *(undefined2 *)((longlong)local_res8 + 0x1e) = 6;
  *(undefined4 *)((longlong)local_res8 + 0x44) = 0;
  *(undefined1 *)(local_res8 + 9) = 0;
  *(undefined1 *)(local_res8 + 4) = param_4;
  *(undefined1 *)((longlong)local_res8 + 0x21) = param_4;
  *(undefined1 *)((longlong)local_res8 + 0x19) = 1;
  uVar2 = (**(code **)(*local_res8 + 0x30))(local_res8);
  (**(code **)(*local_res8 + 0x38))(local_res8,uVar2);
  (**(code **)(*local_res8 + 0x60))(local_res8,0x3f4f,200);
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

