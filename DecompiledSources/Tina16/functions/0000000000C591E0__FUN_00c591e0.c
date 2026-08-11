/* Ghidra address: 00c591e0 */
/* Ghidra symbol: FUN_00c591e0 */


longlong FUN_00c591e0(longlong param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
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
  FUN_00652880(local_res8,0,param_3);
  *(uint *)(local_res8 + 0xa0) = *(uint *)(local_res8 + 0xa0) & 0xffffffde | 0x50;
  plVar3 = (longlong *)FUN_00781840();
  cVar2 = (**(code **)(*plVar3 + 0x98))(plVar3);
  if (cVar2 != '\0') {
    *(uint *)(local_res8 + 0xa0) = *(uint *)(local_res8 + 0xa0) & 0xffffffef;
  }
  uVar4 = FUN_00c59360(local_res8,0);
  *(undefined8 *)(local_res8 + 0x490) = uVar4;
  uVar4 = FUN_00c59360(local_res8,1);
  *(undefined8 *)(local_res8 + 0x498) = uVar4;
  FUN_00c59ad0(local_res8,0);
  FUN_00c59bc0(local_res8,0);
  FUN_0064cbf0(local_res8,0x14);
  FUN_0064cc50(local_res8,0x19);
  *(undefined8 *)(local_res8 + 0x4a0) = *(undefined8 *)(local_res8 + 0x490);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

