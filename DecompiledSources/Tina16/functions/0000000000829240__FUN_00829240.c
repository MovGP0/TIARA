/* Ghidra address: 00829240 */
/* Ghidra symbol: FUN_00829240 */


char FUN_00829240(longlong param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong local_28;
  longlong local_20;
  char local_11;
  longlong *local_10;
  
  local_30 = auStack_58;
  local_28 = *(longlong *)(param_1 + 0x18);
  local_20 = *(longlong *)(*(longlong *)(local_28 + 0xc0) + 0xd0);
  puVar1 = auStack_58;
  if (local_20 != 0) {
    lVar3 = FUN_0082a4a0(*(undefined8 *)(param_1 + 0x28));
    puVar1 = local_30;
    if (lVar3 != 0) {
      plVar4 = (longlong *)FUN_0082a4a0(*(undefined8 *)(param_1 + 0x28));
      iVar2 = (**(code **)(*plVar4 + 0x60))(plVar4);
      puVar1 = local_30;
      if (iVar2 == *(int *)(local_20 + 0x94)) {
        plVar4 = (longlong *)FUN_0082a4a0(*(undefined8 *)(param_1 + 0x28));
        iVar2 = (**(code **)(*plVar4 + 0x48))(plVar4);
        puVar1 = local_30;
        if (iVar2 == *(int *)(local_20 + 0x90)) {
          local_11 = '\x01';
          goto LAB_008292d8;
        }
      }
    }
  }
  local_30 = puVar1;
  local_11 = '\0';
LAB_008292d8:
  if (local_11 != '\0') {
    local_10 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
    FUN_0082a590(*(undefined8 *)(param_1 + 0x28),local_10,local_20,param_2);
    uVar5 = FUN_0082a4a0(*(undefined8 *)(param_1 + 0x28));
    local_11 = (**(code **)(*local_10 + -0x70))(local_10,uVar5);
    FUN_00410f20(local_10);
  }
  return local_11;
}

