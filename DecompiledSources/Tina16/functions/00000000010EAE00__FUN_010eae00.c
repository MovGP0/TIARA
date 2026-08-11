/* Ghidra address: 010eae00 */
/* Ghidra symbol: FUN_010eae00 */


void FUN_010eae00(longlong param_1,double param_2,char param_3,char param_4,char param_5)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  int iVar6;
  undefined8 uVar7;
  
  if ((*(char *)(param_1 + 0x88) == '\x02') && (param_2 <= 0.0)) {
    param_2 = 1e-12;
  }
  if (param_3 == '\0') {
    if (*(double *)(param_1 + 0x80) <= param_2 && param_2 != *(double *)(param_1 + 0x80)) {
      uVar7 = FUN_010bfa60(param_1 + 0x80,0x3d719799812dea11,0);
      *(undefined8 *)(param_1 + 0x80) = uVar7;
    }
    *(double *)(param_1 + 0x78) = param_2;
  }
  else if (param_3 == '\x01') {
    if (param_2 < *(double *)(param_1 + 0x78)) {
      uVar7 = FUN_010bfbe0(param_1 + 0x78,0x3d719799812dea11,0);
      *(undefined8 *)(param_1 + 0x78) = uVar7;
    }
    *(double *)(param_1 + 0x80) = param_2;
  }
  lVar1 = *(longlong *)(param_1 + 0x50);
  iVar2 = (**(code **)(**(longlong **)(lVar1 + 0xd8) + 0x28))(*(longlong **)(lVar1 + 0xd8));
  if (0 < iVar2) {
    iVar2 = (**(code **)(**(longlong **)(lVar1 + 0xd8) + 0x28))();
    iVar6 = 0;
    if (-1 < iVar2 + -1) {
      do {
        lVar5 = (**(code **)(**(longlong **)(lVar1 + 0xd8) + 0x30))
                          (*(longlong **)(lVar1 + 0xd8),iVar6);
        uVar7 = (**(code **)(**(longlong **)(lVar5 + 0x70) + 0x30))(*(longlong **)(lVar5 + 0x70),0);
        lVar5 = FUN_004113f0(uVar7,&DAT_01ccbf00);
        uVar7 = FUN_00b90620(*(undefined8 *)(param_1 + 0x80),*(undefined8 *)(lVar5 + 0xd0));
        *(undefined8 *)(lVar5 + 0xd0) = uVar7;
        *(undefined8 *)(lVar5 + 0xc0) = *(undefined8 *)(param_1 + 0x80);
        uVar7 = FUN_00b90650(*(undefined8 *)(param_1 + 0x78),*(undefined8 *)(lVar5 + 200));
        *(undefined8 *)(lVar5 + 200) = uVar7;
        *(undefined8 *)(lVar5 + 0xb8) = *(undefined8 *)(param_1 + 0x78);
        if (param_5 != '\0') {
          uVar3 = FUN_01ccddc0(lVar5);
          uVar4 = FUN_01ccddd0(lVar5);
          FUN_01cd5460(lVar5,uVar3,uVar4);
          *(undefined8 *)(lVar5 + 200) = *(undefined8 *)(lVar5 + 0xb8);
          *(undefined8 *)(lVar5 + 0xd0) = *(undefined8 *)(lVar5 + 0xc0);
          *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(lVar5 + 0xc0);
          *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(lVar5 + 0xb8);
        }
        iVar6 = iVar6 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    if (param_4 != '\0') {
      FUN_01acfa60(lVar1);
      FUN_01aceb90(lVar1,1);
    }
  }
  return;
}

