/* Ghidra address: 0058a5d0 */
/* Ghidra symbol: FUN_0058a5d0 */


longlong * FUN_0058a5d0(undefined8 param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *local_40;
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
      local_40 = *(longlong **)(local_20 + uVar4 * 8);
      lVar3 = (**(code **)(*local_40 + 0x60))(local_40);
      cVar1 = *(char *)(lVar3 + 0x2a);
      if ((cVar1 == *(char *)(param_3 + 0x2a)) &&
         (cVar1 = FUN_0043e2c0((char *)(lVar3 + 0x2a),(char *)(param_3 + 0x2a),cVar1), cVar1 != '\0'
         )) goto LAB_0058a6b1;
      uVar4 = uVar4 + 1;
    }
    FUN_00419430(&local_20,&DAT_0052f6f8);
    lVar3 = (**(code **)(*(longlong *)*param_2 + 0x38))((longlong *)*param_2);
    *param_2 = lVar3;
  }
  local_40 = (longlong *)0x0;
LAB_0058a6b1:
  FUN_00419430(&local_20,&DAT_0052f6f8);
  return local_40;
}

