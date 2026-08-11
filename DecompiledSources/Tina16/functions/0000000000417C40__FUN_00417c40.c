/* Ghidra address: 00417c40 */
/* Ghidra symbol: FUN_00417c40 */


void FUN_00417c40(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  byte bVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint local_2c;
  
  param_3 = param_3 + (ulonglong)*(byte *)(param_3 + 1);
  uVar10 = 0;
  uVar6 = *(uint *)(param_3 + 6);
  if (uVar6 != 0) {
    local_2c = uVar6 - 1;
    do {
      if (*(longlong *)(param_3 + 10 + (ulonglong)local_2c * 0x10) == 0) {
        uVar6 = uVar6 - 1;
        uVar9 = local_2c + 1;
        break;
      }
      local_2c = local_2c - 1;
      uVar9 = uVar6;
    } while (local_2c != 0xffffffff);
    uVar8 = 0;
    do {
      local_2c = (uint)uVar8;
      if ((*(longlong *)(param_3 + 10 + uVar8 * 0x10) == 0) ||
         ((uVar9 != *(uint *)(param_3 + 6) &&
          (*(uint *)(param_3 + 0x12 + (ulonglong)uVar9 * 0x10) <=
           *(uint *)(param_3 + 0x12 + uVar8 * 0x10))))) {
        uVar5 = uVar9 + 1;
        local_2c = uVar9;
      }
      else {
        uVar8 = (ulonglong)(local_2c + 1);
        uVar5 = uVar9;
      }
      uVar9 = uVar5;
      uVar7 = (ulonglong)local_2c;
      if (uVar10 < *(uint *)(param_3 + 0x12 + uVar7 * 0x10)) {
        FUN_00409a70(param_2 + uVar10,param_1 + uVar10,
                     *(uint *)(param_3 + 0x12 + uVar7 * 0x10) - uVar10);
      }
      uVar10 = (ulonglong)*(uint *)(param_3 + 0x12 + uVar7 * 0x10);
      pbVar4 = (byte *)**(undefined8 **)(param_3 + 10 + uVar7 * 0x10);
      lVar1 = param_1 + uVar10;
      puVar2 = (undefined8 *)(param_2 + uVar10);
      bVar3 = *pbVar4;
      if (bVar3 < 0xf) {
        if (bVar3 == 0xe) {
          bVar3 = pbVar4[1];
          FUN_00417c40(lVar1,puVar2,pbVar4);
          uVar10 = uVar10 + *(uint *)(pbVar4 + (ulonglong)bVar3 + 2);
        }
        else if (bVar3 == 10) {
          FUN_00414bf0(lVar1,*puVar2);
          uVar10 = uVar10 + 8;
        }
        else if (bVar3 == 0xb) {
          FUN_00414b90(lVar1,*puVar2);
          uVar10 = uVar10 + 8;
        }
        else if (bVar3 == 0xc) {
          FUN_00417c10();
          uVar10 = uVar10 + 0x18;
        }
        else {
          if (bVar3 != 0xd) goto LAB_00417ea9;
          bVar3 = pbVar4[1];
          FUN_00418240(lVar1,puVar2,**(undefined8 **)(pbVar4 + (ulonglong)bVar3 + 10),
                       *(undefined4 *)(pbVar4 + (ulonglong)bVar3 + 6));
          uVar10 = uVar10 + *(uint *)(pbVar4 + (ulonglong)bVar3 + 2);
        }
      }
      else if (bVar3 == 0xf) {
        if ((uint)uVar8 < local_2c) {
          FUN_0041d4c0(lVar1,*puVar2);
        }
        else {
          FUN_0041b840(lVar1,*puVar2);
        }
        uVar10 = uVar10 + 8;
      }
      else if (bVar3 == 0x11) {
        FUN_004194b0(lVar1,*puVar2,pbVar4);
        uVar10 = uVar10 + 8;
      }
      else if (bVar3 == 0x12) {
        FUN_00414ad0(lVar1,*puVar2);
        uVar10 = uVar10 + 8;
      }
      else {
LAB_00417ea9:
        FUN_004098e0(CONCAT71((int7)((ulonglong)lVar1 >> 8),2));
      }
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  if (uVar10 < *(uint *)(param_3 + 2)) {
    FUN_00409a70(param_2 + uVar10,param_1 + uVar10,*(uint *)(param_3 + 2) - uVar10);
  }
  return;
}

