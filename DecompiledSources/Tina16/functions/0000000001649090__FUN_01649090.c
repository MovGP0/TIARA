/* Ghidra address: 01649090 */
/* Ghidra symbol: FUN_01649090 */


undefined8
FUN_01649090(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 *param_4,
            longlong param_5)

{
  undefined4 uVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  int local_5c;
  undefined1 local_58 [8];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  
  local_40[0] = 0;
  local_48 = 0;
  local_50 = 0;
  if (param_4 != (undefined8 *)0x0) {
    uVar3 = FUN_01612560(&DAT_01611548,1);
    FUN_00414480(&local_50);
    lVar4 = FUN_0161bc10(*(undefined4 *)(param_3 + 0x5bc),*(undefined8 *)(param_5 + 0x48));
    FUN_01648b90(*(undefined8 *)(lVar4 + 0x5f8),0x66);
    uVar8 = FUN_016290e0(param_5);
    *param_4 = uVar8;
    iVar6 = 1;
    uVar1 = *(undefined4 *)(lVar4 + 0x5d8);
    *(undefined4 *)(lVar4 + 0x5d8) = 0;
    iVar7 = *(int *)(*(longlong *)(lVar4 + 0x5f8) + 0x10);
    local_5c = 0;
    if (-1 < iVar7 + -1) {
      do {
        lVar5 = FUN_004aeac0(*(undefined8 *)(lVar4 + 0x5f8),local_5c);
        if (*(char *)(lVar5 + 0x28) == 'f') {
          FUN_01612770(uVar3,local_5c,0x66,0x77);
          uVar8 = FUN_0161be50(uVar3,*(undefined8 *)(param_3 + 0xb0),local_58,1);
          uVar8 = FUN_01614c70(uVar8);
          param_4[iVar6] = uVar8;
          iVar6 = iVar6 + 1;
        }
        local_5c = local_5c + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    *(undefined4 *)(lVar4 + 0x5d8) = uVar1;
    iVar7 = *(int *)(*(longlong *)(lVar4 + 0x600) + 0x10);
    local_5c = 0;
    if (-1 < iVar7 + -1) {
      do {
        FUN_01648bf0(lVar4,local_40,local_5c);
        cVar2 = FUN_01648ca0(lVar4,local_5c);
        if (cVar2 == '\0') {
          FUN_01612770(uVar3,local_5c,0x6f,0x78);
          uVar8 = FUN_0161be50(uVar3,*(undefined8 *)(param_3 + 0xb0),local_58,1);
          uVar8 = FUN_01614c70(uVar8);
          param_4[iVar6] = uVar8;
          iVar6 = iVar6 + 1;
        }
        local_5c = local_5c + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    FUN_00410f20(uVar3);
  }
  FUN_00414560(&local_50,3);
  return param_2;
}

