/* Ghidra address: 00546440 */
/* Ghidra symbol: FUN_00546440 */


longlong * FUN_00546440(longlong *param_1,longlong param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  bool bVar4;
  longlong *local_48;
  longlong local_40 [2];
  longlong local_30 [2];
  
  local_40[0] = 0;
  local_30[0] = 0;
  (**(code **)(*param_1 + 0x48))(param_1,local_30);
  uVar3 = 0;
  while( true ) {
    uVar2 = 0;
    if (local_30[0] != 0) {
      uVar2 = *(ulonglong *)(local_30[0] + -8);
    }
    if (uVar2 <= uVar3) break;
    local_48 = *(longlong **)(local_30[0] + uVar3 * 8);
    (**(code **)(*local_48 + 0x10))(local_48,local_40);
    if (local_40[0] == param_2) {
      bVar4 = true;
    }
    else if ((local_40[0] == 0) || (param_2 == 0)) {
      bVar4 = false;
    }
    else {
      iVar1 = FUN_0043e420(local_40[0],param_2);
      bVar4 = iVar1 == 0;
    }
    if (bVar4) goto LAB_005464fb;
    uVar3 = uVar3 + 1;
  }
  FUN_00419430(local_30,&DAT_0052f6a0);
  local_48 = (longlong *)0x0;
LAB_005464fb:
  FUN_00414480(local_40);
  FUN_00419430(local_30,&DAT_0052f6a0);
  return local_48;
}

