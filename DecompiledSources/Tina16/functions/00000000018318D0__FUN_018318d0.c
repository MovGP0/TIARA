/* Ghidra address: 018318d0 */
/* Ghidra symbol: FUN_018318d0 */


longlong * FUN_018318d0(longlong *param_1,char param_2,ushort *param_3)

{
  ushort uVar1;
  undefined1 *puVar2;
  ushort *puVar3;
  bool bVar4;
  longlong *local_res8;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 *local_30;
  undefined1 local_19;
  
  local_30 = auStack_68;
  local_res8 = param_1;
  puVar2 = auStack_68;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_004119e0(param_1,param_2);
    puVar2 = local_30;
  }
  local_30 = puVar2;
  local_48 = 0;
  FUN_01847460(local_res8,0,0,10);
  puVar3 = param_3;
  (**(code **)(*local_res8 + 8))(local_res8,param_3);
  local_19 = 0;
  uVar1 = *param_3;
  if (uVar1 == 0xb) {
    local_19 = 1;
  }
  else {
    if (uVar1 < 8) {
      bVar4 = ((int)CONCAT71((int7)((ulonglong)puVar3 >> 8),1) << ((byte)uVar1 & 0x1f) & 0x70U) != 0
      ;
    }
    else {
      bVar4 = false;
    }
    if (bVar4) {
      local_19 = 2;
    }
    else if (uVar1 == 0x14) {
      local_19 = 10;
    }
    else {
      uVar1 = *param_3;
      if (((uVar1 == 8) || (uVar1 == 0x100)) || (uVar1 == 0x102)) {
        local_19 = 4;
      }
    }
  }
  *(undefined1 *)(local_res8 + 9) = local_19;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

