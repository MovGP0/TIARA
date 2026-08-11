/* Ghidra address: 00468c40 */
/* Ghidra symbol: FUN_00468c40 */


void FUN_00468c40(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  char cVar2;
  ulonglong uVar3;
  undefined8 local_30 [2];
  longlong *local_20 [2];
  
  local_30[0] = 0;
  uVar1 = *param_2;
  if (uVar1 == 0x400c) {
    FUN_00468c40(param_1,*(undefined8 *)(param_2 + 4));
    goto code_r0x00468e65;
  }
  if ((*param_1 & 0xbfe8) != 0) {
    FUN_00460ac0(param_1);
  }
  uVar3 = (ulonglong)uVar1;
  if (uVar3 < 0x101) {
    if (uVar3 == 0x100) {
      FUN_00468ad0(param_1,*(undefined8 *)(param_2 + 4));
      goto code_r0x00468e65;
    }
    if (uVar3 - 0x10 < 3) {
      FUN_004620f0(param_1,param_2,3);
      goto code_r0x00468e65;
    }
    if (uVar3 == 0x13) {
      if ((*(uint *)(param_2 + 4) & 0x80000000) == 0) {
        FUN_004620f0(param_1,param_2,3);
      }
      else {
        FUN_004620f0(param_1,param_2,5);
      }
      goto code_r0x00468e65;
    }
    if (uVar3 == 0x14) {
      if ((*(longlong *)(param_2 + 4) < 0x80000000) && (-0x80000001 < *(longlong *)(param_2 + 4))) {
        FUN_004620f0(param_1,param_2,3);
      }
      else if (DAT_01dc437a == '\0') {
        FUN_004620f0(param_1,param_2,0x14);
      }
      else {
        FUN_004620f0(param_1,param_2,5);
      }
      goto code_r0x00468e65;
    }
  }
  else {
    if (uVar3 == 0x101) {
      FUN_00468bb0(param_1,param_2);
      goto code_r0x00468e65;
    }
    if (uVar3 == 0x102) {
      FUN_004168e0(local_30,*(undefined8 *)(param_2 + 4));
      FUN_004689d0(param_1,local_30[0]);
      goto code_r0x00468e65;
    }
  }
  if ((uVar1 & 0x2000) == 0) {
    if ((uVar1 & 0xfff) < 0x10f) {
      FUN_00461840(param_1,param_2);
    }
    else {
      cVar2 = FUN_0046eed0(uVar1,local_20);
      if (cVar2 == '\0') {
        FUN_004600a0();
      }
      else {
        (**(code **)(*local_20[0] + 0x40))(local_20[0],param_1,param_2);
      }
    }
  }
  else {
    FUN_00461520(param_1,param_2,FUN_00468c30);
  }
code_r0x00468e65:
  FUN_00414520(local_30);
  return;
}

