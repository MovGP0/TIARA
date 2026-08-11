/* Ghidra address: 015f7500 */
/* Ghidra symbol: FUN_015f7500 */


void FUN_015f7500(ushort *param_1,int param_2,ushort param_3,undefined4 param_4,uint param_5)

{
  int iVar1;
  ushort *puVar2;
  bool bVar3;
  ushort local_48;
  ushort *local_40;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  bVar3 = (param_5 & 1) == 0;
  iVar1 = FUN_015f7400(param_4);
  puVar2 = param_1;
  if (bVar3) {
    puVar2 = (ushort *)0x0;
    local_40 = param_1;
  }
  if (iVar1 == 0xbb9) {
    if (!bVar3) {
      local_40 = (ushort *)FUN_015f7450(puVar2,0,param_5);
    }
    *local_40 = param_3;
  }
  else {
    if ((param_2 == 0) || (param_2 == 1)) {
      if (!bVar3) {
        local_40 = (ushort *)FUN_015f7450(puVar2,0,param_5);
      }
    }
    else if (((param_2 == 2) || (param_2 == 3)) && (!bVar3)) {
      local_40 = (ushort *)FUN_015f7450(puVar2,1,param_5);
    }
    if ((param_2 == 0) || (param_2 == 2)) {
      local_48 = param_3 << 8;
      *local_40 = *local_40 & 0xff;
    }
    else {
      local_48 = param_3;
      if ((param_2 == 1) || (param_2 == 3)) {
        *local_40 = *local_40 & 0xff00;
      }
    }
    *local_40 = *local_40 | local_48;
  }
  FUN_00414560(&local_30,3);
  return;
}

