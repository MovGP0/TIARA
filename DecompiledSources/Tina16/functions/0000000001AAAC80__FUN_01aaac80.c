/* Ghidra address: 01aaac80 */
/* Ghidra symbol: FUN_01aaac80 */


void FUN_01aaac80(longlong param_1)

{
  longlong lVar1;
  char *pcVar2;
  undefined2 *puVar3;
  bool bVar4;
  bool bVar5;
  ushort uVar6;
  longlong lVar7;
  ushort *puVar8;
  undefined8 uVar9;
  byte bVar10;
  char cVar11;
  short sVar12;
  undefined8 *puVar13;
  undefined1 auStack_78 [39];
  char local_51;
  undefined8 local_50 [2];
  undefined1 local_3b;
  undefined2 local_3a;
  longlong local_38;
  undefined4 local_30;
  
  local_50[0] = 0;
  local_38 = FUN_004095c0(0x2711);
  lVar7 = FUN_004095c0(0x2711);
  local_30 = *(undefined4 *)(param_1 + 0x19c1c);
  *(undefined1 *)(param_1 + 0x13a2a) = 0;
  *(undefined2 *)(param_1 + 0x13b30) = 0;
  local_51 = '\0';
  do {
    uVar6 = 1;
    for (sVar12 = *(short *)(param_1 + 2); sVar12 != 0; sVar12 = sVar12 + -1) {
      *(undefined1 *)(local_38 + (ulonglong)uVar6) = 0;
      uVar6 = uVar6 + 1;
    }
    cVar11 = *(char *)(param_1 + 0x13898);
    if (cVar11 != '\0') {
      puVar8 = (ushort *)(param_1 + 0x1389a);
      do {
        *(undefined1 *)(local_38 + (ulonglong)*puVar8) = 1;
        puVar8 = puVar8 + 1;
        cVar11 = cVar11 + -1;
      } while (cVar11 != '\0');
    }
    sVar12 = *(short *)(param_1 + 0x13b30);
    if (sVar12 != 0) {
      puVar13 = (undefined8 *)(param_1 + 0x13b38);
      do {
        puVar8 = (ushort *)*puVar13;
        *(undefined1 *)
         (local_38 +
         (ulonglong)
         *(ushort *)
          (*(longlong *)(param_1 + 0x10 + (ulonglong)*puVar8 * 8) + 0x4236 +
          (ulonglong)(byte)puVar8[1] * 2)) = 1;
        lVar1 = *(longlong *)(param_1 + 0x10 + (ulonglong)*puVar8 * 8);
        bVar10 = 1;
        for (cVar11 = *(char *)(lVar1 + 1); cVar11 != '\0'; cVar11 = cVar11 + -1) {
          *(undefined1 *)(local_38 + (ulonglong)*(ushort *)(lVar1 + 0x4236 + (ulonglong)bVar10 * 2))
               = 1;
          bVar10 = bVar10 + 1;
        }
        puVar13 = puVar13 + 1;
        sVar12 = sVar12 + -1;
      } while (sVar12 != 0);
    }
    uVar6 = 1;
    for (sVar12 = *(short *)(param_1 + 0x10); sVar12 != 0; sVar12 = sVar12 + -1) {
      *(undefined1 *)(lVar7 + (ulonglong)uVar6) = 0;
      uVar6 = uVar6 + 1;
    }
    do {
      bVar5 = true;
      sVar12 = *(short *)(param_1 + 0x10);
      uVar6 = 1;
      if (sVar12 != 0) {
        puVar13 = (undefined8 *)(param_1 + 0x18);
        bVar5 = true;
        do {
          pcVar2 = (char *)*puVar13;
          if (*(char *)(lVar7 + (ulonglong)uVar6) == '\0') {
            bVar4 = true;
            bVar10 = 1;
            for (cVar11 = *pcVar2; cVar11 != '\0'; cVar11 = cVar11 + -1) {
              if (*(char *)(local_38 +
                           (ulonglong)*(ushort *)(pcVar2 + (ulonglong)bVar10 * 2 + 0x41f6)) == '\0')
              {
                bVar4 = false;
                break;
              }
              bVar10 = bVar10 + 1;
            }
            if ((bVar4) && (pcVar2[2] != '\0')) {
              bVar10 = 1;
              for (cVar11 = pcVar2[1]; cVar11 != '\0'; cVar11 = cVar11 + -1) {
                if (*(char *)(local_38 +
                             (ulonglong)*(ushort *)(pcVar2 + (ulonglong)bVar10 * 2 + 0x4236)) ==
                    '\0') {
                  *(undefined1 *)
                   (local_38 + (ulonglong)*(ushort *)(pcVar2 + (ulonglong)bVar10 * 2 + 0x4236)) = 1;
                  bVar5 = false;
                }
                bVar10 = bVar10 + 1;
              }
              *(undefined1 *)(lVar7 + (ulonglong)uVar6) = 1;
            }
          }
          uVar6 = uVar6 + 1;
          puVar13 = puVar13 + 1;
          sVar12 = sVar12 + -1;
        } while (sVar12 != 0);
      }
    } while (!bVar5);
    cVar11 = FUN_01aaabb0(auStack_78,&local_3a,&local_3b);
    if (cVar11 == '\0') {
      local_51 = '\x01';
    }
    else {
      if (499 < *(ushort *)(param_1 + 0x13b30)) {
        uVar9 = FUN_00b89270();
        FUN_00b8e520(uVar9,local_50,0x507);
        FUN_00414ad0(DAT_02110a68,local_50[0]);
        FUN_01aa37d0(1,&DAT_02110a68);
        goto LAB_01aab05b;
      }
      *(short *)(param_1 + 0x13b30) = *(short *)(param_1 + 0x13b30) + 1;
      uVar9 = FUN_004095c0(4);
      *(undefined8 *)(param_1 + 0x13b30 + (ulonglong)*(ushort *)(param_1 + 0x13b30) * 8) = uVar9;
      puVar3 = *(undefined2 **)(param_1 + 0x13b30 + (ulonglong)*(ushort *)(param_1 + 0x13b30) * 8);
      *puVar3 = local_3a;
      *(undefined1 *)(puVar3 + 1) = local_3b;
    }
  } while (local_51 == '\0');
  *(undefined1 *)(param_1 + 0x13a2a) = 1;
  FUN_004095f0(local_38);
  FUN_004095f0(lVar7);
LAB_01aab05b:
  FUN_00414480(local_50);
  return;
}

