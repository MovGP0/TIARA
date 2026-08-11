/* Ghidra address: 00803360 */
/* Ghidra symbol: FUN_00803360 */


void FUN_00803360(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  undefined4 local_50 [2];
  undefined8 local_48;
  undefined1 local_40;
  
  if (((*(uint *)(param_1 + 0xa4) & 0x2000) != 0) && (*(longlong *)(param_1 + 0x638) != 0)) {
    uVar3 = FUN_00800410(param_1);
    iVar8 = *(int *)(*(longlong *)(param_1 + 0x638) + 0x10);
    iVar7 = 0;
    if (-1 < iVar8 + -1) {
      do {
        uVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x638),iVar7);
        cVar1 = FUN_0065be20(uVar4);
        if (cVar1 != '\0') {
          uVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x638),iVar7);
          iVar2 = FUN_004aeba0(uVar3,uVar4);
          if (iVar2 < 0) {
            uVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x638),iVar7);
            FUN_004ae7e0(uVar3,uVar4);
          }
        }
        iVar7 = iVar7 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
  }
  if (*(longlong *)(param_1 + 0x660) == 0) {
    if ((*(ushort *)(param_1 + 0x34) & 8) == 0) {
      pcVar5 = (code *)FUN_00411550(param_1,0xffa4);
      lVar6 = (*pcVar5)(param_1);
      if ((lVar6 != 0) && (lVar6 != *(longlong *)(DAT_02012668 + 0x2d0))) {
        local_50[0] = FUN_0080f230(DAT_02012668,param_1);
        local_48 = *(undefined8 *)(param_1 + 0x468);
        local_40 = *(longlong *)(param_1 + 0x668) != 0;
        thunk_FUN_041b2403(lVar6,0xb048,local_50,*(undefined8 *)(DAT_02012668 + 0x2e0));
      }
    }
    *(undefined8 *)(param_1 + 0x668) = 0;
  }
  else {
    uVar3 = FUN_00800410(*(undefined8 *)(param_1 + 0x660));
    iVar8 = FUN_004aeba0(uVar3,param_1);
    if (iVar8 < 0) {
      uVar3 = FUN_008003d0(*(undefined8 *)(param_1 + 0x660));
      iVar8 = FUN_004aeba0(uVar3,param_1);
      if (-1 < iVar8) {
        uVar3 = FUN_00800410(*(undefined8 *)(param_1 + 0x660));
        FUN_004ae7e0(uVar3,param_1);
      }
    }
  }
  if (*PTR_DAT_02003210 != '\0') {
    uVar3 = FUN_0065b870(param_1);
    thunk_FUN_041b2403(uVar3,0x80,1,0);
  }
  if ((*(longlong *)(param_1 + 0x500) != 0) && (*(char *)(param_1 + 0x4d6) != '\x01')) {
    uVar3 = FUN_0065b870(param_1);
    thunk_FUN_039aab05(uVar3,0);
    FUN_007e6950(*(undefined8 *)(param_1 + 0x500),0);
  }
  FUN_00659db0(param_1,param_2);
  return;
}

