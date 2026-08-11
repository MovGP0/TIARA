/* Ghidra address: 00634950 */
/* Ghidra symbol: FUN_00634950 */


uint FUN_00634950(uint param_1,longlong param_2,longlong param_3)

{
  uint *puVar1;
  uint uVar2;
  ulonglong uVar3;
  uint *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = ~param_1;
    if (param_3 != 0) {
      uVar3 = param_3 - 0x20;
      lVar6 = 0;
LAB_00634980:
      puVar4 = (uint *)(param_2 + lVar6);
      if (((ulonglong)puVar4 & 3) != 0) goto code_r0x0063498a;
      uVar5 = param_3 - lVar6;
      if (0x1f < uVar5) {
        do {
          param_1 = param_1 ^ *puVar4;
          uVar2 = *(uint *)(&DAT_01df3fd0 + (ulonglong)(param_1 >> 8 & 0xff) * 4) ^
                  *(uint *)(&DAT_01df43d0 + (ulonglong)(param_1 & 0xff) * 4) ^
                  *(uint *)(&DAT_01df3bd0 + (ulonglong)(param_1 >> 0x10 & 0xff) * 4) ^
                  *(uint *)(&DAT_01df37d0 + (ulonglong)(param_1 >> 0x18) * 4) ^ puVar4[1];
          uVar2 = *(uint *)(&DAT_01df3fd0 + (ulonglong)(uVar2 >> 8 & 0xff) * 4) ^
                  *(uint *)(&DAT_01df43d0 + (ulonglong)(uVar2 & 0xff) * 4) ^
                  *(uint *)(&DAT_01df3bd0 + (ulonglong)(uVar2 >> 0x10 & 0xff) * 4) ^
                  *(uint *)(&DAT_01df37d0 + (ulonglong)(uVar2 >> 0x18) * 4) ^ puVar4[2];
          uVar2 = *(uint *)(&DAT_01df3fd0 + (ulonglong)(uVar2 >> 8 & 0xff) * 4) ^
                  *(uint *)(&DAT_01df43d0 + (ulonglong)(uVar2 & 0xff) * 4) ^
                  *(uint *)(&DAT_01df3bd0 + (ulonglong)(uVar2 >> 0x10 & 0xff) * 4) ^
                  *(uint *)(&DAT_01df37d0 + (ulonglong)(uVar2 >> 0x18) * 4) ^ puVar4[3];
          uVar2 = *(uint *)(&DAT_01df3fd0 + (ulonglong)(uVar2 >> 8 & 0xff) * 4) ^
                  *(uint *)(&DAT_01df43d0 + (ulonglong)(uVar2 & 0xff) * 4) ^
                  *(uint *)(&DAT_01df3bd0 + (ulonglong)(uVar2 >> 0x10 & 0xff) * 4) ^
                  *(uint *)(&DAT_01df37d0 + (ulonglong)(uVar2 >> 0x18) * 4) ^ puVar4[4];
          uVar2 = *(uint *)(&DAT_01df3fd0 + (ulonglong)(uVar2 >> 8 & 0xff) * 4) ^
                  *(uint *)(&DAT_01df43d0 + (ulonglong)(uVar2 & 0xff) * 4) ^
                  *(uint *)(&DAT_01df3bd0 + (ulonglong)(uVar2 >> 0x10 & 0xff) * 4) ^
                  *(uint *)(&DAT_01df37d0 + (ulonglong)(uVar2 >> 0x18) * 4) ^ puVar4[5];
          uVar2 = *(uint *)(&DAT_01df3fd0 + (ulonglong)(uVar2 >> 8 & 0xff) * 4) ^
                  *(uint *)(&DAT_01df43d0 + (ulonglong)(uVar2 & 0xff) * 4) ^
                  *(uint *)(&DAT_01df3bd0 + (ulonglong)(uVar2 >> 0x10 & 0xff) * 4) ^
                  *(uint *)(&DAT_01df37d0 + (ulonglong)(uVar2 >> 0x18) * 4) ^ puVar4[6];
          uVar2 = *(uint *)(&DAT_01df3fd0 + (ulonglong)(uVar2 >> 8 & 0xff) * 4) ^
                  *(uint *)(&DAT_01df43d0 + (ulonglong)(uVar2 & 0xff) * 4) ^
                  *(uint *)(&DAT_01df3bd0 + (ulonglong)(uVar2 >> 0x10 & 0xff) * 4) ^
                  *(uint *)(&DAT_01df37d0 + (ulonglong)(uVar2 >> 0x18) * 4) ^ puVar4[7];
          param_1 = *(uint *)(&DAT_01df3fd0 + (ulonglong)(uVar2 >> 8 & 0xff) * 4) ^
                    *(uint *)(&DAT_01df43d0 + (ulonglong)(uVar2 & 0xff) * 4) ^
                    *(uint *)(&DAT_01df3bd0 + (ulonglong)(uVar2 >> 0x10 & 0xff) * 4) ^
                    *(uint *)(&DAT_01df37d0 + (ulonglong)(uVar2 >> 0x18) * 4);
          uVar5 = uVar5 - 0x20;
          puVar4 = puVar4 + 8;
        } while (0x1f < uVar5);
        puVar4 = (uint *)(lVar6 + 0x20 + param_2 + (uVar3 & 0xffffffffffffffe0));
        uVar5 = ((param_3 + -0x20) - (uVar3 & 0xffffffffffffffe0)) - lVar6;
      }
      if (3 < uVar5) {
        uVar3 = uVar5 - 4;
        puVar1 = puVar4;
        do {
          param_1 = param_1 ^ *puVar1;
          puVar1 = puVar1 + 1;
          param_1 = *(uint *)(&DAT_01df3fd0 + (ulonglong)(param_1 >> 8 & 0xff) * 4) ^
                    *(uint *)(&DAT_01df43d0 + (ulonglong)(param_1 & 0xff) * 4) ^
                    *(uint *)(&DAT_01df3bd0 + (ulonglong)(param_1 >> 0x10 & 0xff) * 4) ^
                    *(uint *)(&DAT_01df37d0 + (ulonglong)(param_1 >> 0x18) * 4);
          uVar5 = uVar5 - 4;
        } while (3 < uVar5);
        puVar4 = (uint *)((longlong)puVar4 + (uVar3 & 0xfffffffffffffffc) + 4);
        uVar5 = (ulonglong)((uint)uVar3 & 3);
      }
      if (uVar5 != 0) {
        uVar3 = uVar5;
        if ((uVar5 & 1) != 0) {
          uVar2 = *puVar4;
          puVar4 = (uint *)((longlong)puVar4 + 1);
          param_1 = param_1 >> 8 ^
                    *(uint *)(&DAT_01df37d0 + (ulonglong)(param_1 & 0xff ^ (uint)(byte)uVar2) * 4);
          uVar3 = uVar5 - 1;
        }
        if (uVar5 != 1) {
          do {
            uVar2 = param_1 >> 8 ^
                    *(uint *)(&DAT_01df37d0 + (ulonglong)(param_1 & 0xff ^ (uint)(byte)*puVar4) * 4)
            ;
            param_1 = uVar2 >> 8 ^
                      *(uint *)(&DAT_01df37d0 +
                               (ulonglong)(uVar2 & 0xff ^ (uint)*(byte *)((longlong)puVar4 + 1)) * 4
                               );
            puVar4 = (uint *)((longlong)puVar4 + 2);
            uVar3 = uVar3 - 2;
          } while (uVar3 != 0);
        }
      }
    }
LAB_00634c69:
    param_1 = ~param_1;
  }
  return param_1;
code_r0x0063498a:
  param_1 = param_1 >> 8 ^
            *(uint *)(&DAT_01df37d0 + (ulonglong)(param_1 & 0xff ^ (uint)(byte)*puVar4) * 4);
  lVar6 = lVar6 + 1;
  uVar3 = uVar3 - 1;
  if (param_3 == lVar6) goto LAB_00634c69;
  goto LAB_00634980;
}

