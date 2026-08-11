/* Ghidra address: 00a27100 */
/* Ghidra symbol: FUN_00a27100 */


void FUN_00a27100(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  char *pcVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  lVar1 = param_1[0x3e];
  pcVar7 = *(char **)param_1[5];
  lVar6 = ((undefined8 *)param_1[5])[1];
  uVar9 = *(uint *)(lVar1 + 0x18);
  iVar11 = *(int *)(lVar1 + 0x1c);
  uVar3 = *(undefined8 *)(lVar1 + 0x20);
  uVar4 = *(undefined8 *)(lVar1 + 0x28);
  if (iVar11 < 1) {
    uVar9 = 0;
    iVar11 = 0;
  }
  else {
    uVar12 = 0x7f << (0x11U - (char)iVar11 & 0x1f) | uVar9;
    iVar10 = iVar11 + 0xf;
    do {
      cVar8 = (char)(uVar12 >> 0x10);
      *pcVar7 = cVar8;
      pcVar7 = pcVar7 + 1;
      lVar6 = lVar6 + -1;
      if (lVar6 == 0) {
        puVar2 = (undefined8 *)param_1[5];
        iVar5 = (*(code *)puVar2[3])(param_1);
        if (iVar5 != 0) {
          pcVar7 = (char *)*puVar2;
          lVar6 = puVar2[1];
          goto LAB_00a27197;
        }
LAB_00a271ef:
        puVar2 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar2 + 5) = 0x18;
        (*(code *)*puVar2)(param_1);
        lVar6 = 0;
        goto LAB_00a27209;
      }
LAB_00a27197:
      if (cVar8 == -1) {
        *pcVar7 = '\0';
        pcVar7 = pcVar7 + 1;
        lVar6 = lVar6 + -1;
        if (lVar6 == 0) {
          puVar2 = (undefined8 *)param_1[5];
          iVar5 = (*(code *)puVar2[3])(param_1);
          if (iVar5 == 0) goto LAB_00a271ef;
          pcVar7 = (char *)*puVar2;
          lVar6 = puVar2[1];
        }
      }
      uVar12 = uVar12 << 8;
      iVar10 = iVar10 + -8;
    } while (0xf < iVar10);
    uVar9 = 0;
    iVar11 = 0;
  }
LAB_00a27209:
  puVar2 = (undefined8 *)param_1[5];
  *puVar2 = pcVar7;
  puVar2[1] = lVar6;
  *(uint *)(lVar1 + 0x18) = uVar9;
  *(int *)(lVar1 + 0x1c) = iVar11;
  *(undefined8 *)(lVar1 + 0x20) = uVar3;
  *(undefined8 *)(lVar1 + 0x28) = uVar4;
  return;
}

