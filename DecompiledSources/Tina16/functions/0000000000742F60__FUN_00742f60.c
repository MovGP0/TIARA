/* Ghidra address: 00742f60 */
/* Ghidra symbol: FUN_00742f60 */


longlong * FUN_00742f60(longlong *param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  char cVar2;
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
  FUN_00660290(local_res8,0,param_3);
  *(undefined4 *)(local_res8 + 0x14) = 0x2808eb;
  plVar3 = (longlong *)FUN_00777cd0();
  cVar2 = (**(code **)(*plVar3 + 0x98))(plVar3);
  if (cVar2 != '\0') {
    *(uint *)(local_res8 + 0x14) = *(uint *)(local_res8 + 0x14) & 0xffffffbf | 0x40000;
  }
  FUN_0064cbf0(local_res8,0xb9);
  FUN_0064cc50(local_res8,0x29);
  *(undefined1 *)(local_res8 + 0x93) = 2;
  *(undefined1 *)((longlong)local_res8 + 0x4a9) = 2;
  FUN_00743880(local_res8,2);
  FUN_007438b0(local_res8,1);
  *(undefined1 *)((longlong)local_res8 + 0x4a4) = 0;
  FUN_0064e030(local_res8,0xff00000f);
  *(undefined1 *)((longlong)local_res8 + 0x4a5) = 1;
  FUN_0065bd60(local_res8,1);
  (**(code **)(*local_res8 + 0x230))(local_res8,1);
  *(undefined1 *)(local_res8 + 0x95) = 1;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

