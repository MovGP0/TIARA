/* Ghidra address: 0060d1a0 */
/* Ghidra symbol: FUN_0060d1a0 */


void FUN_0060d1a0(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  bool bVar5;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined1 local_26 [2];
  ushort local_24;
  longlong *local_20;
  
  local_30 = auStack_58;
  local_20 = (longlong *)FUN_00410e60(&PTR_FUN_0047cbc0,1);
  lVar1 = (**(code **)*param_2)(param_2);
  lVar2 = FUN_004b6da0(param_2);
  (**(code **)(*local_20 + 0x10))(local_20,lVar1 - lVar2);
  uVar3 = (**(code **)*local_20)(local_20);
  FUN_004b84c0(param_2,local_20[1],uVar3);
  puVar4 = local_26;
  FUN_004b84c0(local_20,puVar4,6);
  if (local_24 < 8) {
    bVar5 = ((int)CONCAT71((int7)((ulonglong)puVar4 >> 8),1) << ((byte)local_24 & 0x1f) & 3U) != 0;
  }
  else {
    bVar5 = false;
  }
  if (!bVar5) {
    FUN_005ffe70();
  }
  FUN_0060d2c0(param_1,0,local_20);
  (**(code **)(*param_1 + 0x20))(param_1,param_1);
  return;
}

