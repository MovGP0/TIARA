/* Ghidra address: 00bd3a70 */
/* Ghidra symbol: FUN_00bd3a70 */


longlong FUN_00bd3a70(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  longlong local_38;
  longlong local_30;
  
  local_40 = auStack_68;
  lVar1 = FUN_004095c0(0x1f0);
  local_30 = lVar1;
  FUN_0040d200(lVar1,0x1f0,0);
  local_38 = lVar1;
  plVar2 = (longlong *)FUN_005fc570(&PTR_FUN_005f2d40,1);
  *(longlong **)(local_38 + 8) = plVar2;
  (**(code **)(*plVar2 + 0x10))(plVar2,param_2);
  puVar3 = param_3;
  puVar4 = (undefined8 *)(local_38 + 0x10);
  for (lVar1 = 0xb; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = *(undefined4 *)puVar3;
  *(bool *)(local_38 + 0x6c) = (*(byte *)((longlong)param_3 + 0x1b) & 4) != 0;
  return local_30;
}

