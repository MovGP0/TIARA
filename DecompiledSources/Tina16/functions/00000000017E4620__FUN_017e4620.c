/* Ghidra address: 017e4620 */
/* Ghidra symbol: FUN_017e4620 */


undefined8 FUN_017e4620(longlong param_1)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  uint local_60 [2];
  undefined1 local_58;
  uint local_50;
  undefined1 local_48;
  undefined8 local_40 [2];
  undefined8 local_30 [2];
  
  local_40[0] = 0;
  local_30[0] = 0;
  if (*(char *)(*(longlong *)(param_1 + 0xee0) + 0x744) == '\0') {
    FUN_004169a0(local_30,*(longlong *)(param_1 + 0xee0) + 0x6f5);
  }
  else {
    FUN_004169a0(local_30,*(longlong *)(param_1 + 0xee0) + 0x744);
  }
  lVar3 = FUN_017e4560(param_1,local_30[0]);
  if (lVar3 == 0) {
    lVar3 = FUN_01cbf670(&DAT_01cbf520,1,local_30[0],
                         *(undefined1 *)(*(longlong *)(param_1 + 0xee0) + 0x650));
    FUN_004ae7e0(*(undefined8 *)(*(longlong *)(param_1 + 0xee0) + 0x8d8),lVar3);
    lVar4 = FUN_01cc3870(&PTR_FUN_01cb5bc0,1,0xb,0,
                         *(undefined8 *)(*(longlong *)(param_1 + 0xee0) + 0x390));
    *(longlong *)(lVar3 + 8) = lVar4;
    puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0xee0) + 0x650);
    puVar8 = (undefined8 *)(lVar4 + 0x68);
    for (lVar6 = 0x48; lVar6 != 0; lVar6 = lVar6 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
  }
  else {
    bVar1 = *(byte *)(*(longlong *)(lVar3 + 8) + 0x68);
    bVar2 = *(byte *)(*(longlong *)(param_1 + 0xee0) + 0x650);
    if (bVar1 != bVar2) {
      local_60[0] = (uint)bVar1;
      local_58 = 0;
      local_50 = (uint)bVar2;
      local_48 = 0;
      FUN_00442f70(local_40,L"Curve type mismatch: old page type: %d, new page type: %d",local_60,1)
      ;
      uVar5 = FUN_0044d490(&PTR_FUN_004334c0,1,local_40[0]);
      FUN_004134c0(uVar5);
    }
  }
  uVar5 = *(undefined8 *)(lVar3 + 8);
  FUN_00414480(local_40);
  FUN_00414480(local_30);
  return uVar5;
}

