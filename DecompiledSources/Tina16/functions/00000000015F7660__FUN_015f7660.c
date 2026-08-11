/* Ghidra address: 015f7660 */
/* Ghidra symbol: FUN_015f7660 */


uint FUN_015f7660(ushort *param_1,int param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  ushort *puVar2;
  bool bVar3;
  uint local_48;
  uint local_44;
  ushort *local_40;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  bVar3 = (param_4 & 1) == 0;
  iVar1 = FUN_015f7400(param_3);
  puVar2 = param_1;
  if (bVar3) {
    puVar2 = (ushort *)0x0;
    local_40 = param_1;
  }
  if (iVar1 == 0xbb9) {
    if (!bVar3) {
      local_40 = (ushort *)FUN_015f7450(puVar2,0,param_4);
    }
    local_48 = (uint)(short)*local_40;
  }
  else {
    if ((param_2 == 0) || (param_2 == 1)) {
      if (!bVar3) {
        local_40 = (ushort *)FUN_015f7450(puVar2,0,param_4);
      }
    }
    else if (((param_2 == 2) || (param_2 == 3)) && (!bVar3)) {
      local_40 = (ushort *)FUN_015f7450(puVar2,1,param_4);
    }
    if ((param_2 == 0) || (param_2 == 2)) {
      local_44 = ((int)(short)*local_40 & 0xff00U) >> 8;
    }
    else if ((param_2 == 1) || (param_2 == 3)) {
      local_44 = (uint)(short)(*local_40 & 0xff);
    }
    local_48 = local_44;
  }
  FUN_00414560(&local_30,3);
  return local_48;
}

