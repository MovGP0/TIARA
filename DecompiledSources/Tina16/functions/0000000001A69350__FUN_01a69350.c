/* Ghidra address: 01a69350 */
/* Ghidra symbol: FUN_01a69350 */


undefined8 FUN_01a69350(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint local_60 [2];
  undefined1 local_58;
  uint local_50;
  undefined1 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_40 = 0;
  local_30[0] = 0;
  local_38 = 0;
  FUN_00414480(&local_38);
  if (*(char *)(param_1 + 0xab4) == '\0') {
    FUN_004169a0(local_30,param_1 + 0xa65);
  }
  else {
    FUN_004169a0(local_30,param_1 + 0xab4);
  }
  lVar2 = FUN_01a692a0(param_1,local_30[0]);
  if (lVar2 == 0) {
    lVar2 = FUN_01cbf670(&DAT_01cbf520,1,local_30[0],*(undefined1 *)(param_1 + 0x9c0));
    FUN_004ae7e0(*(undefined8 *)(param_1 + 0x778),lVar2);
    lVar3 = FUN_01cc3870(&PTR_FUN_01cb5bc0,1,0xb,0,local_38);
    *(longlong *)(lVar2 + 8) = lVar3;
    puVar6 = (undefined8 *)(param_1 + 0x9c0);
    puVar7 = (undefined8 *)(lVar3 + 0x68);
    for (lVar5 = 0x48; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
  }
  else {
    bVar1 = *(byte *)(*(longlong *)(lVar2 + 8) + 0x68);
    if (bVar1 != *(byte *)(param_1 + 0x9c0)) {
      local_60[0] = (uint)bVar1;
      local_58 = 0;
      local_50 = (uint)*(byte *)(param_1 + 0x9c0);
      local_48 = 0;
      FUN_00442f70(&local_40,L"Curve type mismatch: old page type: %d, new page type: %d",local_60,1
                  );
      uVar4 = FUN_0044d490(&PTR_FUN_004334c0,1,local_40);
      FUN_004134c0(uVar4);
    }
  }
  uVar4 = *(undefined8 *)(lVar2 + 8);
  FUN_00414560(&local_40,3);
  return uVar4;
}

