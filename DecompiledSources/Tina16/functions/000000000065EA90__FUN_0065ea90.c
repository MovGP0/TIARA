/* Ghidra address: 0065ea90 */
/* Ghidra symbol: FUN_0065ea90 */


void FUN_0065ea90(longlong param_1,longlong param_2)

{
  longlong lVar1;
  byte bVar2;
  uint *puVar3;
  uint uVar4;
  ulonglong in_R10;
  bool bVar5;
  tagPOINT local_20;
  
  local_20.y._0_2_ = *(undefined2 *)(param_2 + 0x12);
  local_20.x = (uint)*(ushort *)(param_2 + 0x10);
  local_20.y._2_2_ = 0;
  PhysicalToLogicalPoint(*(HWND *)(param_1 + 0x468),&local_20);
  local_20 = (tagPOINT)FUN_0064d3a0(param_1,&local_20);
  lVar1 = FUN_00656230(param_1,&local_20,1,0,0);
  if (lVar1 == 0) {
    lVar1 = param_1;
  }
  *(undefined8 *)(param_2 + 0x18) = 0x198319;
  bVar2 = 0;
  puVar3 = &DAT_01df7444;
  do {
    if (bVar2 < 0x10) {
      uVar4 = (int)CONCAT62((int6)(in_R10 >> 0x10),1) << (bVar2 & 0x1f);
      in_R10 = (ulonglong)uVar4;
      bVar5 = ((ushort)uVar4 & *(ushort *)(*(longlong *)(lVar1 + 0x130) + 0x39)) != 0;
    }
    else {
      bVar5 = false;
    }
    if (bVar5) {
      *(ulonglong *)(param_2 + 0x18) = *(ulonglong *)(param_2 + 0x18) & (ulonglong)~*puVar3;
    }
    bVar2 = bVar2 + 1;
    puVar3 = puVar3 + 1;
  } while (bVar2 != 9);
  return;
}

