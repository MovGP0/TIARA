/* Ghidra address: 01123250 */
/* Ghidra symbol: FUN_01123250 */


void FUN_01123250(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  bool bVar11;
  undefined8 local_48;
  undefined1 local_40 [16];
  undefined *local_30;
  undefined *puVar7;
  
  bVar4 = (byte)param_2;
  local_30 = (undefined *)0x0;
  uVar9 = *(uint *)(param_1 + 0xb48);
  if (uVar9 - 8 < 8) {
    uVar5 = (int)CONCAT71((int7)(param_2 >> 8),1) << ((byte)(uVar9 - 8) & 0x1f);
    param_2 = (ulonglong)uVar5;
    bVar11 = (uVar5 & 0xc) != 0;
  }
  else {
    bVar11 = false;
  }
  if (!bVar11) {
    if (uVar9 == 8) {
      lVar10 = *(longlong *)(param_1 + 0xde0);
      if (((bVar4 & lVar10 != 0) != 0) && (*(char *)(param_1 + 0xb70) == '\0')) {
        plVar1 = *(longlong **)(param_1 + 0x780);
        (**(code **)(*plVar1 + 0xe0))(plVar1,local_40);
        FUN_010d73c0(lVar10,plVar1[0x62],local_40,param_1 + 0xb70);
        if (*(char *)(param_1 + 0xb70) != '\0') {
          FUN_01126020(param_1,param_1 + 0xb68);
        }
      }
    }
    else {
      if (*(longlong *)PTR_DAT_02004e40 == 0) {
        local_48 = 0;
      }
      else {
        local_48 = *(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x2788);
      }
      if (uVar9 < 8) {
        bVar11 = ((int)CONCAT71((int7)(param_2 >> 8),1) << ((byte)uVar9 & 0x1f) & 0xfeU) != 0;
      }
      else {
        bVar11 = false;
      }
      if (bVar11) {
        uVar9 = (uint)(byte)PTR_DAT_02001408[(longlong)(int)uVar9 + -1];
        iVar8 = 0;
        puVar7 = PTR_DAT_02001408;
        if (-1 < (int)(uVar9 - 1)) {
          do {
            uVar5 = *(uint *)(param_1 + 0xb48);
            if (uVar5 < 8) {
              uVar6 = (int)CONCAT71((int7)((ulonglong)puVar7 >> 8),1) << ((byte)uVar5 & 0x1f);
              puVar7 = (undefined *)(ulonglong)uVar6;
              bVar11 = (uVar6 & 0x90) != 0;
            }
            else {
              bVar11 = false;
            }
            if ((!bVar11) || (iVar8 < 2)) {
              lVar10 = (longlong)iVar8;
              *(undefined8 *)
               (*(longlong *)(param_1 + 0x8e8 + (longlong)(int)uVar5 * 0x21) + lVar10 * 8) =
                   *(undefined8 *)
                    (*(longlong *)(param_1 + 0xad0 + (longlong)(int)uVar5 * 8) + lVar10 * 0x10);
              FUN_004095f0(*(undefined8 *)
                            (*(longlong *)
                              (param_1 + 0x8f0 + (longlong)*(int *)(param_1 + 0xb48) * 0x21) +
                            lVar10 * 8));
              iVar2 = FUN_00414ce0(*(undefined8 *)
                                    (*(longlong *)
                                      (param_1 + 0xad0 + (longlong)*(int *)(param_1 + 0xb48) * 8) +
                                     8 + lVar10 * 0x10));
              uVar3 = FUN_00409570((longlong)(iVar2 + 1));
              *(undefined8 *)
               (*(longlong *)(param_1 + 0x8f0 + (longlong)*(int *)(param_1 + 0xb48) * 0x21) +
               lVar10 * 8) = uVar3;
              iVar2 = *(int *)(param_1 + 0xb48);
              FUN_00415430(&local_30,
                           *(undefined8 *)
                            (*(longlong *)(param_1 + 0xad0 + (longlong)iVar2 * 8) + 8 +
                            lVar10 * 0x10),0);
              puVar7 = local_30;
              FUN_004425e0(*(undefined8 *)
                            (*(longlong *)(param_1 + 0x8f0 + (longlong)iVar2 * 0x21) + lVar10 * 8),
                           local_30);
            }
            iVar8 = iVar8 + 1;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
      }
      plVar1 = *(longlong **)(param_1 + 0x780);
      (**(code **)(*plVar1 + 0xe0))(plVar1,local_40);
      FUN_016d8e70(*(undefined1 *)(param_1 + 0xb48),
                   param_1 + 0x8e7 + (longlong)*(int *)(param_1 + 0xb48) * 0x21,local_48,
                   plVar1[0x62],local_40,1);
    }
  }
  FUN_004144d0(&local_30);
  return;
}

