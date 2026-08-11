/* Ghidra address: 01d6f9e0 */
/* Ghidra symbol: FUN_01d6f9e0 */


void FUN_01d6f9e0(undefined8 param_1,longlong param_2,char param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined8 in_RAX;
  longlong lVar3;
  byte bVar4;
  char cVar5;
  undefined1 *puVar6;
  bool bVar7;
  undefined8 uVar8;
  undefined1 local_40 [16];
  undefined8 *local_30;
  
  if ((byte)(param_3 - 8U) < 8) {
    bVar7 = ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (param_3 - 8U & 0x1f) & 0x11U) != 0;
  }
  else {
    bVar7 = false;
  }
  if (!bVar7) {
    FUN_016ee260(param_1,&local_30,8,0);
    puVar1 = (undefined1 *)*local_30;
    if (((((*(byte *)(param_2 + 0x88) & 0x20) == 0) && (*(short *)(puVar1 + 0x50) != 0xa5)) &&
        (*(short *)(puVar1 + 0x50) != 0xad)) && (*(short *)(puVar1 + 0x50) != 0xa8)) {
      lVar3 = FUN_0041f930();
      *(undefined8 *)(lVar3 + 0x280) = 0x4014000000000000;
      bVar4 = 1;
      for (cVar5 = puVar1[0x10]; cVar5 != '\0'; cVar5 = cVar5 + -1) {
        lVar3 = *(longlong *)(*(longlong *)(puVar1 + 0x18) + -0x228 + (ulonglong)bVar4 * 0x228);
        (**(code **)(*(longlong *)(lVar3 + 8) + 0x10))(lVar3,param_1,param_2,param_3);
        bVar4 = bVar4 + 1;
      }
      bVar4 = 1;
      for (cVar5 = puVar1[0x10]; cVar5 != '\0'; cVar5 = cVar5 + -1) {
        uVar8 = FUN_016ee810(param_1,*(undefined8 *)(param_2 + 0x118),
                             *(undefined1 *)
                              (*(longlong *)
                                (*(longlong *)(puVar1 + 0x18) + -0x228 + (ulonglong)bVar4 * 0x228) +
                              2),puVar1[0x40],0);
        *(undefined8 *)(*(longlong *)(puVar1 + 0x20) + -8 + (ulonglong)bVar4 * 8) = uVar8;
        bVar4 = bVar4 + 1;
      }
      *(undefined4 *)(puVar1 + 0x58) = 0;
      cVar5 = puVar1[0x10];
      bVar4 = 1;
      if (cVar5 != '\0') {
        puVar6 = local_40;
        do {
          uVar2 = FUN_00dd56d0(*(undefined8 *)
                                (*(longlong *)(puVar1 + 0x20) + -8 + (ulonglong)bVar4 * 8),*puVar1);
          *puVar6 = uVar2;
          bVar4 = bVar4 + 1;
          puVar6 = puVar6 + 1;
          cVar5 = cVar5 + -1;
        } while (cVar5 != '\0');
      }
      FUN_01aa18d0(local_40,puVar1[0x10],puVar1 + 0x58);
      if (param_3 == '\x01') {
        **(undefined2 **)(puVar1 + 0x30) = *(undefined2 *)(puVar1 + 0x58);
        uVar8 = FUN_019a45d0();
        uVar8 = FUN_0198d430(uVar8);
        FUN_01d04aa0(*(undefined8 *)(puVar1 + 0x38),uVar8);
      }
    }
  }
  return;
}

