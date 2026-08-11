/* Ghidra address: 0072c160 */
/* Ghidra symbol: FUN_0072c160 */


longlong * FUN_0072c160(longlong *param_1,char param_2,undefined8 param_3,undefined4 param_4)

{
  longlong *plVar1;
  undefined1 *puVar2;
  longlong *local_res8;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined4 local_1c;
  
  local_30 = auStack_58;
  local_res8 = param_1;
  puVar2 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_004119e0(param_1,param_2);
    puVar2 = local_30;
  }
  local_30 = puVar2;
  FUN_007fc730(local_res8,0,param_3,param_4);
  (**(code **)(*(longlong *)local_res8[0x17] + 0x10))
            ((longlong *)local_res8[0x17],*(undefined8 *)(*(longlong *)PTR_DAT_02005950 + 0x118));
  local_1c = *(undefined4 *)(*(longlong *)PTR_DAT_02005950 + 0x98);
  plVar1 = *(longlong **)(*(longlong *)PTR_DAT_02005950 + 0xd8);
  if (plVar1 == (longlong *)0x0) {
    plVar1 = *(longlong **)(*(longlong *)PTR_DAT_02004030 + 0xa8);
    if (plVar1 != (longlong *)0x0) {
      local_1c = (**(code **)(*plVar1 + 0x98))(plVar1);
    }
  }
  else {
    local_1c = (**(code **)(*plVar1 + 0x98))(plVar1);
  }
  (**(code **)(*local_res8 + 0x170))(local_res8,local_1c);
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

