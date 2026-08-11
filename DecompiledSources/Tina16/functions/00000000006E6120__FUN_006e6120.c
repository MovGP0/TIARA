/* Ghidra address: 006e6120 */
/* Ghidra symbol: FUN_006e6120 */


longlong * FUN_006e6120(longlong *param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined4 uVar3;
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
  uVar2 = FUN_006d3e20(0x20);
  *(undefined1 *)(local_res8 + 0x92) = uVar2;
  FUN_00652880(local_res8,0,param_3);
  FUN_0064cbf0(local_res8,0x96);
  uVar3 = (**(code **)(*local_res8 + 0x1a0))(local_res8,0x14);
  FUN_0064cc50(local_res8,uVar3);
  *(undefined4 *)((longlong)local_res8 + 0x494) = 0;
  *(undefined4 *)(local_res8 + 0x93) = 100;
  *(undefined4 *)((longlong)local_res8 + 0x4a4) = 10;
  *(undefined1 *)(local_res8 + 0x95) = 0;
  *(undefined4 *)((longlong)local_res8 + 0x4b4) = 0x20000000;
  *(undefined4 *)(local_res8 + 0x97) = 0x20000000;
  *(undefined4 *)((longlong)local_res8 + 0x4ac) = 10;
  *(undefined1 *)((longlong)local_res8 + 0x4aa) = 0;
  *(undefined1 *)((longlong)local_res8 + 0x4bc) = 0;
  *(undefined1 *)(local_res8 + 0x96) = 0;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

