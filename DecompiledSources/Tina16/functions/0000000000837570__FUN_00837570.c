/* Ghidra address: 00837570 */
/* Ghidra symbol: FUN_00837570 */


ulonglong FUN_00837570(longlong param_1,undefined8 param_2,int param_3,int param_4)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 unaff_RBX;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  if (param_4 != 0) {
    iVar6 = param_3 + 1;
    param_4 = iVar6 + param_4;
    uVar2 = FUN_00832450(*(undefined8 *)(param_1 + 0x4d8),param_3);
    if (-1 < (int)uVar2) {
      iVar7 = 0;
      if (*(longlong *)(param_1 + 0x4d8) != 0) {
        iVar7 = *(int *)(*(longlong *)(param_1 + 0x4d8) + -4);
      }
      if ((int)uVar2 <= iVar7) {
        iVar7 = (iVar7 - uVar2) + 1;
        do {
          uVar5 = (ulonglong)uVar2;
          uVar3 = FUN_008317e0(*(undefined8 *)(param_1 + 0x4d8),uVar5);
          bVar1 = (byte)uVar3;
          if (bVar1 < 8) {
            bVar8 = ((int)CONCAT71((int7)(uVar5 >> 8),1) << (bVar1 & 0x1f) & 6U) != 0;
          }
          else {
            bVar8 = false;
          }
          if (bVar8) {
            iVar6 = iVar6 + 1;
          }
          else {
            if (bVar1 < 8) {
              bVar8 = ((int)CONCAT71((int7)((ulonglong)uVar3 >> 8),1) << (bVar1 & 0x1f) & 0x30U) !=
                      0;
            }
            else {
              bVar8 = false;
            }
            if (bVar8) {
              lVar4 = FUN_00414de0(param_2);
              *(undefined2 *)(lVar4 + -2 + (longlong)iVar6 * 2) = *(undefined2 *)(param_1 + 0x4e0);
              iVar6 = iVar6 + 1;
            }
          }
          if (param_4 <= iVar6) break;
          uVar2 = uVar2 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
    }
  }
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1) & 0xffffffff;
}

