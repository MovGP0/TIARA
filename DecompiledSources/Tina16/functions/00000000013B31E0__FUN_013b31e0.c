/* Ghidra address: 013b31e0 */
/* Ghidra symbol: FUN_013b31e0 */


void FUN_013b31e0(longlong *param_1,byte *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  undefined1 local_408;
  undefined1 local_407 [263];
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 local_1e0 [13];
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 local_158 [6];
  byte local_128 [264];
  
  lVar2 = (ulonglong)*param_2 + 1;
  pbVar4 = local_128;
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pbVar4 = *param_2;
    param_2 = param_2 + 1;
    pbVar4 = pbVar4 + 1;
  }
  puVar3 = local_158;
  for (lVar2 = 6; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *param_3;
    param_3 = param_3 + 1;
    puVar3 = puVar3 + 1;
  }
  local_178 = *param_4;
  uStack_170 = param_4[1];
  uStack_168 = param_4[2];
  uStack_160 = param_4[3];
  FUN_00414ff0(local_407,local_128);
  puVar3 = local_158;
  puVar5 = local_1e0;
  for (lVar2 = 6; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  local_408 = 7;
  local_300 = local_178;
  uStack_2f8 = uStack_170;
  uStack_2f0 = uStack_168;
  uStack_2e8 = uStack_160;
  uVar1 = FUN_013b26e0(0,&PTR_FUN_013b25b8,&local_408);
  (**(code **)(*param_1 + 0x20))(param_1,uVar1);
  return;
}

