/* Ghidra address: 0060c3d0 */
/* Ghidra symbol: FUN_0060c3d0 */


void FUN_0060c3d0(longlong param_1,undefined2 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined1 *local_90;
  longlong local_88;
  undefined8 local_80 [4];
  undefined4 local_60;
  
  local_90 = auStack_c8;
  *param_2 = 2;
  FUN_0060a460(param_1);
  local_88 = *(longlong *)(param_1 + 0x60);
  puVar3 = (undefined8 *)(local_88 + 0x40);
  puVar4 = local_80;
  for (lVar2 = 0xd; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_60 = 0;
  local_80[3] = 0;
  local_a8 = *(undefined8 *)(param_1 + 0x48);
  uVar1 = FUN_00607e60(*(undefined8 *)(local_88 + 0x10),*(undefined8 *)(local_88 + 0x20),
                       *(undefined8 *)(local_88 + 0x20),local_80);
  *param_3 = uVar1;
  uVar1 = FUN_00608880(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x20));
  *param_4 = uVar1;
  return;
}

