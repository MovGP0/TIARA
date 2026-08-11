/* Ghidra address: 0157f0a0 */
/* Ghidra symbol: FUN_0157f0a0 */


undefined1 FUN_0157f0a0(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined1 local_39;
  longlong local_30;
  
  local_30 = 0;
  lVar5 = (**(code **)**(undefined8 **)(param_1 + 0x10))(*(undefined8 **)(param_1 + 0x10));
  if (lVar5 < 0xffff) {
    uVar3 = (**(code **)**(undefined8 **)(param_1 + 0x10))(*(undefined8 **)(param_1 + 0x10));
  }
  else {
    uVar3 = 0xffff;
  }
  uVar10 = 4;
  FUN_00419260(&local_30,&DAT_00406578,1,0x403);
  if (4 < uVar3) {
    do {
      iVar8 = 0;
      if (local_30 != 0) {
        iVar8 = (int)*(undefined8 *)(local_30 + -8);
      }
      uVar2 = uVar3;
      if (uVar10 + iVar8 + -4 <= uVar3) {
        iVar8 = 0;
        if (local_30 != 0) {
          iVar8 = (int)*(undefined8 *)(local_30 + -8);
        }
        uVar2 = (uVar10 + iVar8) - 4;
      }
      uVar10 = uVar2;
      puVar1 = *(undefined8 **)(param_1 + 0x10);
      lVar5 = (**(code **)*puVar1)(puVar1);
      FUN_004b6dc0(puVar1,lVar5 - (ulonglong)uVar10);
      lVar5 = 0;
      if (local_30 != 0) {
        lVar5 = *(longlong *)(local_30 + -8);
      }
      lVar6 = (**(code **)**(undefined8 **)(param_1 + 0x10))(*(undefined8 **)(param_1 + 0x10));
      lVar7 = FUN_004b6da0(*(undefined8 *)(param_1 + 0x10));
      if (lVar5 < lVar6 - lVar7) {
        uVar9 = 0;
        if (local_30 != 0) {
          uVar9 = *(ulonglong *)(local_30 + -8);
        }
      }
      else {
        iVar8 = (**(code **)**(undefined8 **)(param_1 + 0x10))(*(undefined8 **)(param_1 + 0x10));
        iVar4 = FUN_004b6da0(*(undefined8 *)(param_1 + 0x10));
        uVar9 = (ulonglong)(uint)(iVar8 - iVar4);
      }
      FUN_0157c8d0(*(undefined8 *)(param_1 + 0x10),local_30,uVar9 & 0xffffffff);
      iVar8 = (int)uVar9 + -4;
      if (-1 < iVar8) {
        do {
          if (((((uint)*(byte *)(local_30 + iVar8) == (DAT_01f654d4 & 0xff)) &&
               ((uint)*(byte *)(local_30 + (iVar8 + 1)) == (DAT_01f654d4 >> 8 & 0xff))) &&
              ((uint)*(byte *)(local_30 + (iVar8 + 2)) == (DAT_01f654d4 >> 0x10 & 0xff))) &&
             ((uint)*(byte *)(local_30 + (iVar8 + 3)) == DAT_01f654d4 >> 0x18)) {
            FUN_00409a70(local_30 + (iVar8 + 4),param_2,0x12);
            if (*(short *)(param_2 + 0x10) == 0) {
              FUN_00419430(param_1 + 0x38,&DAT_00406578);
            }
            else {
              puVar1 = *(undefined8 **)(param_1 + 0x10);
              lVar5 = (**(code **)*puVar1)(puVar1);
              FUN_004b6dc0(puVar1,((lVar5 + 0x16) - (ulonglong)uVar10) + (longlong)iVar8);
              FUN_00419260(param_1 + 0x38,&DAT_00406578,1,*(undefined2 *)(param_2 + 0x10));
              FUN_004b72d0(*(undefined8 *)(param_1 + 0x10),param_1 + 0x38,
                           *(undefined2 *)(param_2 + 0x10));
            }
            local_39 = 1;
            goto LAB_0157f35b;
          }
          iVar8 = iVar8 + -1;
        } while (iVar8 != -1);
      }
    } while (uVar10 < uVar3);
  }
  local_39 = 0;
LAB_0157f35b:
  FUN_00419430(&local_30,&DAT_00406578);
  return local_39;
}

