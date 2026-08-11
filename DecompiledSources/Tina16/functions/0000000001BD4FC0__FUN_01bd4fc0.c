/* Ghidra address: 01bd4fc0 */
/* Ghidra symbol: FUN_01bd4fc0 */


longlong FUN_01bd4fc0(longlong param_1,char param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  longlong local_res8;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_res8 = param_1;
  puVar2 = auStack_48;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar2 = local_20;
  }
  local_20 = puVar2;
  FUN_01c03f70(local_res8,0,param_3);
  uVar3 = FUN_00704210(&PTR_FUN_01bd18b0,1,local_res8);
  *(undefined8 *)(local_res8 + 0x360) = uVar3;
  FUN_0065bce0(uVar3,0);
  FUN_0064cbf0(*(undefined8 *)(local_res8 + 0x360),100);
  plVar1 = *(longlong **)(local_res8 + 0x360);
  plVar1[0x40] = local_res8;
  plVar1[0x3f] = (longlong)FUN_01bd5240;
  plVar1[0xb7] = local_res8;
  if ((*(ushort *)((longlong)plVar1 + 0x34) & 0x10) != 0) {
    (**(code **)(*plVar1 + 0x120))(plVar1,0x1bd5201);
  }
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

