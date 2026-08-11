/* Ghidra address: 004c5a70 */
/* Ghidra symbol: FUN_004c5a70 */


longlong * FUN_004c5a70(longlong param_1,longlong *param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *local_30;
  longlong local_20;
  
  local_20 = 0;
  while (*param_2 != 0) {
    (**(code **)(*(longlong *)*param_2 + 0x90))((longlong *)*param_2,&local_20);
    uVar4 = 0;
    while( true ) {
      uVar2 = 0;
      if (local_20 != 0) {
        uVar2 = *(ulonglong *)(local_20 + -8);
      }
      if (uVar2 <= uVar4) break;
      local_30 = *(longlong **)(local_20 + uVar4 * 8);
      lVar3 = (**(code **)(*local_30 + 0x60))(local_30);
      iVar1 = FUN_00414f50(lVar3 + 0x2a,*(longlong *)(param_1 + 0xb8) + 0x2a,
                           (ulonglong)*(byte *)(lVar3 + 0x2a) + 1);
      if (iVar1 == 0) goto LAB_004c5b3f;
      uVar4 = uVar4 + 1;
    }
    FUN_00419430(&local_20,&DAT_0052f6f8);
    lVar3 = (**(code **)(*(longlong *)*param_2 + 0x38))((longlong *)*param_2);
    *param_2 = lVar3;
  }
  local_30 = (longlong *)0x0;
LAB_004c5b3f:
  FUN_00419430(&local_20,&DAT_0052f6f8);
  return local_30;
}

