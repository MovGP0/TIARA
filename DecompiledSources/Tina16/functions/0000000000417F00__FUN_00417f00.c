/* Ghidra address: 00417f00 */
/* Ghidra symbol: FUN_00417f00 */


void FUN_00417f00(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  byte bVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint local_2c;
  
  param_3 = param_3 + (ulonglong)*(byte *)(param_3 + 1);
  uVar9 = 0;
  uVar5 = *(uint *)(param_3 + 6);
  if (uVar5 != 0) {
    uVar6 = uVar5 - 1;
    do {
      if (*(longlong *)(param_3 + 10 + (ulonglong)uVar6 * 0x10) == 0) {
        uVar5 = uVar5 - 1;
        uVar8 = uVar6 + 1;
        break;
      }
      uVar6 = uVar6 - 1;
      uVar8 = uVar5;
    } while (uVar6 != 0xffffffff);
    local_2c = 0;
    do {
      if ((*(longlong *)(param_3 + 10 + (ulonglong)local_2c * 0x10) == 0) ||
         ((uVar8 != *(uint *)(param_3 + 6) &&
          (*(uint *)(param_3 + 0x12 + (ulonglong)uVar8 * 0x10) <=
           *(uint *)(param_3 + 0x12 + (ulonglong)local_2c * 0x10))))) {
        uVar6 = uVar8 + 1;
        uVar7 = uVar8;
      }
      else {
        uVar6 = uVar8;
        uVar7 = local_2c;
        local_2c = local_2c + 1;
      }
      uVar8 = uVar6;
      uVar10 = (ulonglong)uVar7;
      if (uVar9 < *(uint *)(param_3 + 0x12 + uVar10 * 0x10)) {
        FUN_00409a70(param_2 + uVar9,param_1 + uVar9,
                     *(uint *)(param_3 + 0x12 + uVar10 * 0x10) - uVar9);
      }
      uVar9 = (ulonglong)*(uint *)(param_3 + 0x12 + uVar10 * 0x10);
      pbVar4 = (byte *)**(undefined8 **)(param_3 + 10 + uVar10 * 0x10);
      lVar1 = param_1 + uVar9;
      puVar2 = (undefined8 *)(param_2 + uVar9);
      bVar3 = *pbVar4;
      if (bVar3 < 0xf) {
        if (bVar3 == 0xe) {
LAB_0041816f:
          bVar3 = pbVar4[1];
          FUN_00417f00(lVar1,puVar2,pbVar4);
          uVar9 = uVar9 + *(uint *)(pbVar4 + (ulonglong)bVar3 + 2);
        }
        else if (bVar3 == 10) {
          FUN_00414bf0(lVar1,*puVar2);
          FUN_004144d0(puVar2);
          uVar9 = uVar9 + 8;
        }
        else if (bVar3 == 0xb) {
          FUN_00414b90(lVar1,*puVar2);
          FUN_00414520(puVar2);
          uVar9 = uVar9 + 8;
        }
        else if (bVar3 == 0xc) {
          FUN_00417c10(lVar1,puVar2);
          FUN_00417810(puVar2);
          uVar9 = uVar9 + 0x18;
        }
        else {
          if (bVar3 != 0xd) goto LAB_004181ed;
          bVar3 = pbVar4[1];
          FUN_00418410(lVar1,puVar2,**(undefined8 **)(pbVar4 + (ulonglong)bVar3 + 10),
                       *(undefined4 *)(pbVar4 + (ulonglong)bVar3 + 6));
          uVar9 = uVar9 + *(uint *)(pbVar4 + (ulonglong)bVar3 + 2);
        }
      }
      else if (bVar3 == 0xf) {
        if (local_2c < uVar7) {
          FUN_0041d4c0(lVar1,*puVar2);
          FUN_0041d480(puVar2);
        }
        else {
          FUN_0041b840(lVar1,*puVar2);
          FUN_0041b800(puVar2);
        }
        uVar9 = uVar9 + 8;
      }
      else if (bVar3 == 0x11) {
        FUN_004194b0(lVar1,*puVar2,pbVar4);
        FUN_00419430(puVar2,pbVar4);
        uVar9 = uVar9 + 8;
      }
      else if (bVar3 == 0x12) {
        FUN_00414ad0(lVar1,*puVar2);
        FUN_00414480(puVar2);
        uVar9 = uVar9 + 8;
      }
      else {
        if (bVar3 == 0x16) goto LAB_0041816f;
LAB_004181ed:
        FUN_004098e0(CONCAT71((int7)((ulonglong)puVar2 >> 8),2));
      }
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  if (uVar9 < *(uint *)(param_3 + 2)) {
    FUN_00409a70(param_2 + uVar9,param_1 + uVar9,*(uint *)(param_3 + 2) - uVar9);
  }
  return;
}

