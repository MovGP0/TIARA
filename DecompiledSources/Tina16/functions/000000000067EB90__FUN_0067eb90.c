/* Ghidra address: 0067eb90 */
/* Ghidra symbol: FUN_0067eb90 */


longlong FUN_0067eb90(longlong param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  char cVar2;
  longlong *plVar3;
  longlong local_res8;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_res8 = param_1;
  puVar1 = auStack_48;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  FUN_0065f0e0(local_res8,0,param_3);
  *(uint *)(local_res8 + 0xa0) = *(uint *)(local_res8 + 0xa0) | 0x800;
  FUN_0064cbf0(local_res8,0x41);
  FUN_0064cc50(local_res8,0x11);
  *(undefined1 *)(local_res8 + 0x321) = 1;
  *(undefined1 *)(local_res8 + 0x33e) = 1;
  plVar3 = (longlong *)FUN_00777cd0();
  cVar2 = (**(code **)(*plVar3 + 0x98))(plVar3);
  if (cVar2 == '\0') {
    *(uint *)(local_res8 + 0xa0) = *(uint *)(local_res8 + 0xa0) | 0x40;
  }
  else {
    *(uint *)(local_res8 + 0xa0) = *(uint *)(local_res8 + 0xa0) & 0xffffffbf;
  }
  FUN_00680130(local_res8);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

