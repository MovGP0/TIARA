/* Ghidra address: 010eb220 */
/* Ghidra symbol: FUN_010eb220 */


void FUN_010eb220(longlong param_1,double param_2,char param_3,int param_4,char param_5,char param_6
                 )

{
  double *pdVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  
  lVar7 = (longlong)param_4;
  if ((*(char *)(param_1 + 0xa0 + lVar7 * 0x18) == '\x02') && (param_2 <= 0.0)) {
    param_2 = 1e-12;
  }
  if (param_3 == '\0') {
    pdVar1 = (double *)(param_1 + 0x98 + lVar7 * 0x18);
    if (*pdVar1 <= param_2 && param_2 != *pdVar1) {
      uVar8 = FUN_010bfa60(param_1 + 0x98 + lVar7 * 0x18,0x3d719799812dea11,0);
      *(undefined8 *)(param_1 + 0x98 + lVar7 * 0x18) = uVar8;
    }
    *(double *)(param_1 + 0x90 + lVar7 * 0x18) = param_2;
  }
  else if (param_3 == '\x01') {
    if (param_2 < *(double *)(param_1 + 0x90 + lVar7 * 0x18)) {
      uVar8 = FUN_010bfbe0(param_1 + 0x90 + lVar7 * 0x18,0x3d719799812dea11,0);
      *(undefined8 *)(param_1 + 0x90 + lVar7 * 0x18) = uVar8;
    }
    *(double *)(param_1 + 0x98 + lVar7 * 0x18) = param_2;
  }
  lVar2 = *(longlong *)(param_1 + 0x50);
  iVar3 = (**(code **)(**(longlong **)(lVar2 + 0xd8) + 0x28))(*(longlong **)(lVar2 + 0xd8));
  if (param_4 < iVar3) {
    lVar6 = (**(code **)(**(longlong **)(lVar2 + 0xd8) + 0x30))
                      (*(longlong **)(lVar2 + 0xd8),param_4);
    uVar8 = (**(code **)(**(longlong **)(lVar6 + 0x78) + 0x30))(*(longlong **)(lVar6 + 0x78),0);
    lVar6 = FUN_004113f0(uVar8,&DAT_01ccbf00);
    uVar8 = FUN_00b90620(*(undefined8 *)(param_1 + 0x98 + lVar7 * 0x18),
                         *(undefined8 *)(lVar6 + 0xd0));
    *(undefined8 *)(lVar6 + 0xd0) = uVar8;
    *(undefined8 *)(lVar6 + 0xc0) = *(undefined8 *)(param_1 + 0x98 + lVar7 * 0x18);
    uVar8 = FUN_00b90650(*(undefined8 *)(param_1 + 0x90 + lVar7 * 0x18),*(undefined8 *)(lVar6 + 200)
                        );
    *(undefined8 *)(lVar6 + 200) = uVar8;
    *(undefined8 *)(lVar6 + 0xb8) = *(undefined8 *)(param_1 + 0x90 + lVar7 * 0x18);
    if (param_6 != '\0') {
      uVar4 = FUN_01ccddc0(lVar6);
      uVar5 = FUN_01ccddd0(lVar6);
      FUN_01cd5460(lVar6,uVar4,uVar5);
      *(undefined8 *)(lVar6 + 200) = *(undefined8 *)(lVar6 + 0xb8);
      *(undefined8 *)(lVar6 + 0xd0) = *(undefined8 *)(lVar6 + 0xc0);
      *(undefined8 *)(param_1 + 0x98 + lVar7 * 0x18) = *(undefined8 *)(lVar6 + 0xc0);
      *(undefined8 *)(param_1 + 0x90 + lVar7 * 0x18) = *(undefined8 *)(lVar6 + 0xb8);
    }
    if (param_5 != '\0') {
      FUN_01acfa60(lVar2);
      FUN_01aceb90(lVar2,1);
    }
  }
  return;
}

