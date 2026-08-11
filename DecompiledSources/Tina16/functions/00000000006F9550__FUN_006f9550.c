/* Ghidra address: 006f9550 */
/* Ghidra symbol: FUN_006f9550 */


longlong FUN_006f9550(longlong param_1,char param_2,undefined8 param_3)

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
  plVar3 = (longlong *)FUN_00777cd0();
  cVar2 = (**(code **)(*plVar3 + 0x90))(plVar3);
  if (cVar2 == '\0') {
    *(undefined4 *)(local_res8 + 0xa0) = 0x2a;
  }
  else {
    *(undefined4 *)(local_res8 + 0xa0) = 0x28;
  }
  FUN_0064cbf0(local_res8,0x17);
  FUN_0064cc50(local_res8,0x16);
  *(undefined4 *)(local_res8 + 0x31c) = 0xffffffff;
  *(undefined1 *)(local_res8 + 0x33a) = 0;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

