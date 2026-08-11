/* Ghidra address: 0068afd0 */
/* Ghidra symbol: FUN_0068afd0 */


void FUN_0068afd0(longlong *param_1,int param_2,int param_3)

{
  byte bVar1;
  longlong lVar2;
  undefined1 *puVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = auStack_58;
  local_28 = 0;
  bVar1 = *(byte *)(param_1[7] + 0x4cc);
  if (bVar1 < 8) {
    bVar5 = ((int)CONCAT71((int7)((ulonglong)param_1[7] >> 8),1) << (bVar1 & 0x1f) & 0x18U) != 0;
  }
  else {
    bVar5 = false;
  }
  puVar3 = auStack_58;
  if (!bVar5) {
    FUN_004b3260(param_1);
    *(undefined1 *)(param_1[7] + 0x54d) = 1;
    if (param_2 != param_3) {
      (**(code **)(*param_1 + 0x18))(param_1,&local_28,param_2);
      lVar2 = param_1[7];
      pcVar4 = (code *)FUN_00411550(lVar2,0xffac);
      local_20 = (*pcVar4)(lVar2,param_2);
      lVar2 = param_1[7];
      pcVar4 = (code *)FUN_00411550(lVar2,0xffab);
      (*pcVar4)(lVar2,param_2,0);
      (**(code **)(*param_1 + 0x98))(param_1,param_2);
      (**(code **)(*param_1 + 200))(param_1,param_3,local_28);
      lVar2 = param_1[7];
      pcVar4 = (code *)FUN_00411550(lVar2,0xffab);
      (*pcVar4)(lVar2,param_3,local_20);
    }
    *(undefined1 *)(param_1[7] + 0x54d) = 0;
    FUN_004b3390(param_1);
    puVar3 = local_30;
  }
  local_30 = puVar3;
  FUN_00414480(&local_28);
  return;
}

