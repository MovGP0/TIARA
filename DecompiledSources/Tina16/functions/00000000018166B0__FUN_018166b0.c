/* Ghidra address: 018166b0 */
/* Ghidra symbol: FUN_018166b0 */


void FUN_018166b0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined8 local_40 [2];
  short *local_30 [2];
  
  local_40[0] = 0;
  local_30[0] = (short *)0x0;
  (**(code **)(*param_3 + 0x90))(param_3);
  iVar1 = FUN_004b2060();
  iVar4 = 0;
  if (-1 < iVar1 + -1) {
    do {
      if (param_2 == 0) {
LAB_01816743:
        if (param_2 != 0) {
          iVar4 = iVar4 + 1;
        }
        goto LAB_0181678f;
      }
      lVar3 = FUN_018163e0(param_1,iVar4);
      FUN_00416ba0(local_40,&LAB_01816804,param_2);
      iVar2 = FUN_0043e6d0(*(undefined8 *)(lVar3 + 0x20),local_40[0]);
      if (iVar2 == 0) goto LAB_01816743;
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
code_r0x018167af:
  FUN_00414480(local_40);
  FUN_00414480(local_30);
  return;
LAB_0181678f:
  iVar1 = FUN_004b2060(param_1);
  if (iVar1 <= iVar4) goto code_r0x018167af;
  lVar3 = FUN_018163e0(param_1,iVar4);
  FUN_00414b50(local_30,*(undefined8 *)(lVar3 + 0x20));
  iVar4 = iVar4 + 1;
  if ((local_30[0] == (short *)0x0) || (*local_30[0] == 0x20)) goto code_r0x018167af;
  (**(code **)(*param_3 + 0x78))(param_3,local_30[0]);
  goto LAB_0181678f;
}

