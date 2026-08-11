/* Ghidra address: 016140b0 */
/* Ghidra symbol: FUN_016140b0 */


/* WARNING: Removing unreachable block (ram,0x016141a0) */

void FUN_016140b0(longlong *param_1,undefined8 param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  undefined8 uVar7;
  double dVar8;
  byte *local_50 [6];
  
  uVar7 = FUN_01613a40(param_2,0);
  dVar8 = (double)FUN_01613a40(param_2,1);
  uVar3 = (**(code **)(*param_1 + 0x2d0))(param_1,1,local_50);
  if (*local_50[0] < 8) {
    bVar6 = ((int)CONCAT71((int7)((ulonglong)uVar3 >> 8),1) << (*local_50[0] & 0x1f) & 0xfeU) != 0;
  }
  else {
    bVar6 = false;
  }
  if (bVar6) {
    FUN_004095f0(*(undefined8 *)(local_50[0] + 1));
    if (*(longlong *)(local_50[0] + 9) != 0) {
      uVar5 = (uint)(byte)PTR_DAT_02001408[(ulonglong)*local_50[0] - 1];
      iVar4 = 0;
      if (-1 < (int)(uVar5 - 1)) {
        do {
          FUN_004095f0(*(undefined8 *)(*(longlong *)(local_50[0] + 9) + (longlong)iVar4 * 8));
          iVar4 = iVar4 + 1;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
    }
    FUN_004095f0(*(undefined8 *)(local_50[0] + 9));
  }
  *local_50[0] = 4;
  bVar1 = PTR_DAT_02001408[3];
  *(ushort *)(local_50[0] + 0x11) = (ushort)bVar1 * 8;
  uVar3 = FUN_00409570((ushort)bVar1 * 8);
  *(undefined8 *)(local_50[0] + 1) = uVar3;
  uVar3 = FUN_00409570((ulonglong)(byte)PTR_DAT_02001408[(ulonglong)*local_50[0] - 1] << 3);
  *(undefined8 *)(local_50[0] + 9) = uVar3;
  puVar2 = *(undefined8 **)(local_50[0] + 1);
  *puVar2 = uVar7;
  puVar2[1] = 0x4049000000000000;
  puVar2[2] = dVar8 * 57.29577951308232 - 90.0;
  return;
}

