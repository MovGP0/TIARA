/* Ghidra address: 01832f90 */
/* Ghidra symbol: FUN_01832f90 */


undefined8 FUN_01832f90(longlong param_1,undefined8 param_2,longlong param_3)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  char cVar6;
  undefined **ppuVar7;
  bool bVar8;
  
  FUN_00414ad0(param_2,&DAT_0183327c);
  cVar6 = FUN_004113d0(param_3,&PTR_FUN_01846bd8);
  if (cVar6 != '\0') {
    ppuVar7 = &PTR_FUN_0182d838;
    cVar6 = FUN_004113d0(*(undefined8 *)(param_1 + 0x90),&PTR_FUN_0182d838);
    if (cVar6 != '\0') {
      bVar1 = *(byte *)(*(longlong *)(param_1 + 0x90) + 0xa0);
      if (bVar1 < 0x10) {
        bVar8 = ((int)CONCAT62((int6)((ulonglong)ppuVar7 >> 0x10),1) << (bVar1 & 0x1f) & 0x1980U) !=
                0;
      }
      else {
        bVar8 = false;
      }
      if (bVar8) {
        lVar3 = *(longlong *)(param_1 + 0x90);
        lVar4 = *(longlong *)(lVar3 + 0x88);
        cVar6 = FUN_004113d0(lVar4,&PTR_FUN_0182da68);
        if (((cVar6 != '\0') &&
            (cVar6 = FUN_004113d0(*(undefined8 *)(lVar4 + 0xa0),&PTR_FUN_01846bd8), cVar6 != '\0'))
           && (*(longlong *)(*(longlong *)(lVar4 + 0xa0) + 0x30) == *(longlong *)(param_3 + 0x30)))
        {
          uVar5 = *(undefined8 *)(lVar3 + 0x90);
          *(undefined8 *)(param_1 + 0x88) = uVar5;
          FUN_018318a0(*(undefined8 *)(param_1 + 0x90),uVar5);
          FUN_00410f20(*(undefined8 *)(param_1 + 0x90));
          *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0x88);
          if (bVar1 == 7) {
            FUN_00414ad0(param_2,&DAT_01833290);
            return param_2;
          }
          if (bVar1 == 8) {
            FUN_00414ad0(param_2,&DAT_018332a0);
            return param_2;
          }
          if (bVar1 == 0xc) {
            FUN_00414ad0(param_2,&DAT_018332b0);
            return param_2;
          }
          if (bVar1 != 0xb) {
            return param_2;
          }
          FUN_00414ad0(param_2,&DAT_018332c0);
          return param_2;
        }
        lVar3 = *(longlong *)(param_1 + 0x90);
        lVar4 = *(longlong *)(lVar3 + 0x90);
        cVar6 = FUN_004113d0(lVar4,&PTR_FUN_0182da68);
        if (cVar6 != '\0') {
          ppuVar7 = &PTR_FUN_01846bd8;
          cVar6 = FUN_004113d0(*(undefined8 *)(lVar4 + 0xa0),&PTR_FUN_01846bd8);
          if ((cVar6 != '\0') &&
             (*(longlong *)(*(longlong *)(lVar4 + 0xa0) + 0x30) == *(longlong *)(param_3 + 0x30))) {
            if (bVar1 < 0x10) {
              bVar8 = ((int)CONCAT62((int6)((ulonglong)ppuVar7 >> 0x10),1) << (bVar1 & 0x1f) &
                      0x880U) != 0;
            }
            else {
              bVar8 = false;
            }
            if (bVar8) {
              bVar2 = *(byte *)(*(longlong *)(param_3 + 0x30) + 0x48);
              if (bVar2 < 8) {
                bVar8 = ((int)CONCAT71((int7)((ulonglong)*(longlong *)(param_3 + 0x30) >> 8),1) <<
                         (bVar2 & 0x1f) & 0x90U) != 0;
              }
              else {
                bVar8 = false;
              }
              if (!bVar8) {
                uVar5 = *(undefined8 *)(lVar3 + 0x88);
                *(undefined8 *)(param_1 + 0x88) = uVar5;
                FUN_018318a0(*(undefined8 *)(param_1 + 0x90),uVar5);
                FUN_00410f20(*(undefined8 *)(param_1 + 0x90));
                *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0x88);
                if (bVar1 == 7) {
                  FUN_00414ad0(param_2,&DAT_01833290);
                }
                else if (bVar1 == 0xb) {
                  FUN_00414ad0(param_2,&DAT_018332c0);
                }
              }
            }
          }
        }
      }
    }
  }
  return param_2;
}

