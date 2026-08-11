/* Ghidra address: 00c8f240 */
/* Ghidra symbol: FUN_00c8f240 */


void FUN_00c8f240(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 local_40;
  undefined8 local_38;
  uint local_30 [2];
  undefined1 local_28;
  uint local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  local_40 = 0;
  local_38 = 0;
  local_10 = 0;
  if (*(char *)(param_1 + 0x62) == '\x01') {
    uVar2 = (undefined4)CONCAT71((int7)((ulonglong)param_1 >> 8),1);
  }
  else {
    uVar2 = 0;
  }
  uVar2 = FUN_00875200(uVar2,*(undefined4 *)PTR_DAT_02001210,*(undefined4 *)PTR_DAT_02003f40);
  FUN_00c8f050(param_1,0xffff,4,uVar2);
  if (((*(short *)(param_1 + 0x40) == 0) && (*(short *)(param_1 + 0x18) != 0)) &&
     (*(short *)(param_1 + 0x1a) != 0)) {
    if (*(ushort *)(param_1 + 0x1a) < *(ushort *)(param_1 + 0x18)) {
      FUN_0041ddd0(&local_10,PTR_PTR_02004150);
      local_30[0] = (uint)*(ushort *)(param_1 + 0x18);
      local_28 = 0;
      local_20 = (uint)*(ushort *)(param_1 + 0x1a);
      local_18 = 0;
      uVar3 = FUN_0044d530(&PTR_FUN_0086dde0,1,local_10,local_30,1);
      FUN_004134c0(uVar3);
    }
    else {
      cVar1 = FUN_00c8fc70(param_1);
      if (cVar1 == '\0') {
        FUN_0041ddd0(&local_38,PTR_PTR_02004618);
        local_30[0] = (uint)*(ushort *)(param_1 + 0x18);
        local_28 = 0;
        local_20 = (uint)*(ushort *)(param_1 + 0x1a);
        local_18 = 0;
        uVar3 = FUN_0044d530(&PTR_FUN_0086dc98,1,local_38,local_30,1);
        FUN_004134c0(uVar3);
      }
    }
  }
  else {
    cVar1 = FUN_00c8fbe0(param_1,*(short *)(param_1 + 0x40));
    if (cVar1 == '\0') {
      FUN_0041ddd0(&local_40,PTR_PTR_02003320);
      uVar3 = FUN_0086dfd0(&PTR_FUN_0086db50,1,local_40);
      FUN_004134c0(uVar3);
    }
  }
  FUN_00414560(&local_40,2);
  FUN_00414480(&local_10);
  return;
}

