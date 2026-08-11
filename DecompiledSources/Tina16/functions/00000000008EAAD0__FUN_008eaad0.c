/* Ghidra address: 008eaad0 */
/* Ghidra symbol: FUN_008eaad0 */


void FUN_008eaad0(longlong param_1,byte *param_2,int param_3,byte *param_4,int param_5,int *param_6,
                 int *param_7)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined8 local_68;
  uint local_60 [2];
  undefined1 local_58;
  wchar_t *local_50;
  undefined1 local_48;
  undefined8 local_40 [2];
  
  local_68 = 0;
  local_40[0] = 0;
  param_5 = param_5 / 2;
  if ((((param_2 == (byte *)0x0) || (param_3 < 1)) || (param_4 == (byte *)0x0)) || (param_5 < 1)) {
    *param_6 = 0;
    *param_7 = 0;
  }
  else {
    iVar6 = 0;
    pbVar1 = param_2 + (longlong)param_3 + -4;
    iVar3 = (int)param_2;
    do {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              iVar5 = (int)param_2;
              if (pbVar1 < param_2) goto code_r0x008eada2;
              uVar4 = (uint)param_2[2] * 0x1000000 + (uint)param_2[3] * 0x10000 +
                      (uint)*param_2 * 0x100 + (uint)param_2[1];
              if (((0xd7ff < uVar4) && (uVar4 < 0xe000)) || (0x10ffff < uVar4)) break;
              if (uVar4 < 0x10000) {
                if (param_5 <= iVar6) goto code_r0x008eada2;
                *param_4 = param_2[1];
                param_4[1] = *param_2;
                param_4 = param_4 + 2;
                param_2 = param_2 + 4;
                iVar6 = iVar6 + 1;
              }
              else {
                if (param_5 <= iVar6 + 1) goto code_r0x008eada2;
                *param_4 = param_2[3] * '@' + (*param_2 >> 2);
                param_4[1] = (param_2[3] >> 2) - 0x28;
                param_4[2] = param_2[1];
                param_4[3] = (*param_2 & 3) - 0x24;
                param_4 = param_4 + 4;
                param_2 = param_2 + 4;
                iVar6 = iVar6 + 2;
              }
            }
            bVar2 = *(byte *)(param_1 + 8);
            if (bVar2 < 3) break;
            if (bVar2 == 3) {
              param_2 = param_2 + 4;
            }
            else if (bVar2 == 4) {
              if (param_5 <= iVar6) goto code_r0x008eada2;
              *param_4 = *(byte *)(param_1 + 10);
              param_4[1] = (byte)((ushort)*(undefined2 *)(param_1 + 10) >> 8);
              param_4 = param_4 + 2;
              param_2 = param_2 + 4;
              iVar6 = iVar6 + 1;
            }
          }
          if (bVar2 != 2) break;
          if (param_5 <= iVar6 + 1) goto code_r0x008eada2;
          *param_4 = param_2[1];
          param_4[1] = *param_2;
          param_4[2] = param_2[3];
          param_4[3] = param_2[2];
          param_4 = param_4 + 4;
          param_2 = param_2 + 4;
          iVar6 = iVar6 + 2;
        }
        if (bVar2 != 0) break;
        if (uVar4 < 0x110000) {
          FUN_0041ddd0(&local_68,PTR_PTR_02004e20);
          local_58 = 0;
          local_50 = L"UCS-4";
          local_48 = 0x11;
          local_60[0] = uVar4;
          FUN_008e6700(local_68,local_60,1,iVar5 - iVar3);
        }
        else {
          FUN_0041ddd0(local_40,PTR_DAT_02005a00);
          local_58 = 0;
          local_50 = L"UTF-16";
          local_48 = 0x11;
          local_60[0] = uVar4;
          FUN_008e6700(local_40[0],local_60,1,iVar5 - iVar3);
        }
      }
    } while (bVar2 != 1);
code_r0x008eada2:
    *param_7 = iVar6;
    *param_6 = iVar5 - iVar3;
  }
  FUN_00414480(&local_68);
  FUN_00414480(local_40);
  return;
}

