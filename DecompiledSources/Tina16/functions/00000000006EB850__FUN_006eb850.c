/* Ghidra address: 006eb850 */
/* Ghidra symbol: FUN_006eb850 */


longlong * FUN_006eb850(longlong *param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
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
  FUN_00652880(local_res8,0,param_3);
  uVar2 = (**(code **)(*local_res8 + 0x1a0))(local_res8,2);
  FUN_0064cbf0(local_res8,uVar2);
  uVar2 = (**(code **)(*local_res8 + 0x1a0))(local_res8,0x14);
  FUN_0064cc50(local_res8,uVar2);
  FUN_0064cc50(local_res8,
               *(int *)((longlong)local_res8 + 0x9c) + *(int *)((longlong)local_res8 + 0x9c) / 2);
  *(undefined1 *)(local_res8 + 0x92) = 1;
  *(undefined1 *)((longlong)local_res8 + 0x4b9) = 0;
  *(undefined4 *)((longlong)local_res8 + 0x4b4) = 0;
  *(undefined4 *)(local_res8 + 0x94) = 0;
  *(undefined4 *)((longlong)local_res8 + 0x4a4) = 100;
  *(undefined4 *)(local_res8 + 0x95) = 1;
  *(undefined1 *)(local_res8 + 0x9a) = 1;
  *(undefined1 *)((longlong)local_res8 + 0x4d1) = 1;
  *(undefined1 *)(local_res8 + 0x97) = 1;
  *(uint *)(local_res8 + 0x14) = *(uint *)(local_res8 + 0x14) & 0xffdfff7f;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

