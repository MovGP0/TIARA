/* Ghidra address: 01d6f5a0 */
/* Ghidra symbol: FUN_01d6f5a0 */


void FUN_01d6f5a0(undefined8 param_1,undefined8 param_2)

{
  short sVar1;
  longlong lVar2;
  undefined3 uVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  short *psVar9;
  byte bVar10;
  ulonglong uVar11;
  int iVar12;
  byte bVar13;
  char cVar14;
  char *pcVar15;
  undefined1 local_3b;
  char local_3a;
  undefined1 local_39;
  undefined1 *local_38;
  char local_2a;
  char local_29;
  
  uVar7 = FUN_016ebdc0(param_1);
  FUN_01d03160(uVar7);
  iVar6 = FUN_015f7420(uVar7);
  cVar4 = (char)iVar6;
  bVar5 = cVar4 + 8;
  puVar8 = (undefined1 *)FUN_01d6f0e0(0,&PTR_FUN_01d6f0d8,bVar5);
  *puVar8 = 1;
  *(int *)(puVar8 + 0x54) = iVar6;
  local_38 = puVar8;
  uVar7 = FUN_016ebdc0(param_1);
  *(undefined8 *)(puVar8 + 0x38) = uVar7;
  uVar7 = FUN_01cfde70(uVar7,2,1,&local_39,&local_3a,&local_3b);
  *(undefined8 *)(puVar8 + 0x30) = uVar7;
  pcVar15 = &local_3a;
  psVar9 = (short *)FUN_01cfde70(*(undefined8 *)(puVar8 + 0x38),1,2,&local_39,pcVar15,&local_3b);
  sVar1 = *psVar9;
  *(short *)(puVar8 + 0x6c) = sVar1;
  if (sVar1 == 2) {
    puVar8[0x6e] = 0;
  }
  else {
    puVar8[0x6e] = 1;
  }
  local_29 = '\x01';
  local_2a = cVar4 + '\t';
  uVar11 = CONCAT71((int7)((ulonglong)puVar8 >> 8),1) & 0xffffffff;
  bVar13 = bVar5;
  if ((byte)uVar11 <= bVar5) {
    do {
      pcVar15 = &local_2a;
      FUN_00dd5710(*(longlong *)(puVar8 + 0x18) + -0x228 + (uVar11 & 0xff) * 0x228,uVar11,0,
                   &local_29,pcVar15,1,1,1,0,0,0,0,0,0xc);
      uVar11 = CONCAT71((int7)(uVar11 >> 8),(char)uVar11 + '\x01');
      bVar13 = bVar13 - 1;
    } while (bVar13 != 0);
  }
  bVar10 = 1;
  for (bVar13 = bVar5; bVar13 != 0; bVar13 = bVar13 - 1) {
    *(undefined1 *)
     (*(longlong *)(*(longlong *)(puVar8 + 0x18) + -0x228 + (ulonglong)bVar10 * 0x228) + 6) =
         *puVar8;
    bVar10 = bVar10 + 1;
  }
  FUN_016e9e20(param_1,local_29 + cVar4 * bVar5 + -1);
  FUN_016e9cd0(param_1,(local_2a - bVar5) + -1);
  bVar10 = 1;
  for (bVar13 = bVar5; bVar13 != 0; bVar13 = bVar13 - 1) {
    lVar2 = *(longlong *)(*(longlong *)(puVar8 + 0x18) + -0x228 + (ulonglong)bVar10 * 0x228);
    (**(code **)(*(longlong *)(lVar2 + 8) + 8))(lVar2,param_1,param_2);
    bVar10 = bVar10 + 1;
  }
  iVar12 = 1;
  if (0 < iVar6) {
    do {
      uVar3 = (undefined3)((uint)iVar12 >> 8);
      FUN_016ebe60(param_1,local_29,*(undefined1 *)(**(longlong **)(puVar8 + 0x18) + 2),
                   CONCAT31(uVar3,(char)iVar12 + '\b'),(ulonglong)pcVar15 & 0xffffffffffffff00);
      pcVar15 = (char *)0x0;
      FUN_016ed320(param_1,local_29,0,0x3f1a36e2eb1c432d,0);
      local_38[1] = local_29;
      local_29 = local_29 + '\x01';
      bVar13 = 2;
      if (1 < bVar5) {
        cVar14 = cVar4 + '\a';
        do {
          FUN_016ebe60(param_1,local_29,
                       *(undefined1 *)
                        (*(longlong *)
                          (*(longlong *)(puVar8 + 0x18) + -0x228 + (ulonglong)bVar13 * 0x228) + 2),
                       CONCAT31(uVar3,(char)iVar12 + '\b'),1);
          pcVar15 = (char *)0x0;
          FUN_016ed320(param_1,local_29,0,0x3f1a36e2eb1c432d,0);
          local_29 = local_29 + '\x01';
          bVar13 = bVar13 + 1;
          cVar14 = cVar14 + -1;
        } while (cVar14 != '\0');
      }
      iVar12 = iVar12 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  FUN_016e9f40(param_1,FUN_01d6f330);
  FUN_016ea050(param_1,&local_38,8);
  FUN_016e9f50(param_1,FUN_01d6f580);
  FUN_016e9fe0(param_1,FUN_01d6f1c0);
  return;
}

