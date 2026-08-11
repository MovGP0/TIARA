/* Ghidra address: 00609160 */
/* Ghidra symbol: FUN_00609160 */


void FUN_00609160(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 local_90 [13];
  
  puVar1 = (undefined8 *)FUN_00410e60(&PTR_FUN_0047cbc0,1);
  (**(code **)(*param_1 + 200))(param_1,puVar1);
  uVar2 = (**(code **)*puVar1)(puVar1);
  FUN_004b6e40(puVar1,uVar2);
  puVar4 = (undefined8 *)(param_1[0xc] + 0x40);
  puVar5 = local_90;
  for (lVar3 = 0xd; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  local_90[3] = 0;
  FUN_0060a440(param_1);
  lVar3 = param_1[9];
  param_1[9] = 0;
  FUN_00410f20(lVar3);
  FUN_0060ab20(param_1,0,0,local_90,*(undefined1 *)(param_1[0xc] + 0x39),puVar1);
  return;
}

