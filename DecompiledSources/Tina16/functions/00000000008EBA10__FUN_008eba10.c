/* Ghidra address: 008eba10 */
/* Ghidra symbol: FUN_008eba10 */


void FUN_008eba10(longlong param_1,ushort *param_2,int param_3,ushort *param_4,int param_5,
                 undefined4 *param_6,int *param_7)

{
  byte bVar1;
  ushort uVar2;
  ulonglong uVar3;
  ushort *puVar4;
  int iVar5;
  uint local_60 [2];
  undefined1 local_58;
  wchar_t *local_50;
  undefined1 local_48;
  undefined8 local_40 [2];
  
  local_40[0] = 0;
  uVar3 = (longlong)param_5 % 2 & 0xffffffff;
  if ((((param_2 == (ushort *)0x0) || (param_3 < 1)) || (param_4 == (ushort *)0x0)) ||
     (param_5 / 2 < 1)) {
    *param_6 = 0;
    *param_7 = 0;
  }
  else {
    iVar5 = 0;
    puVar4 = param_2;
    if (0 < param_3) {
      do {
        uVar2 = *puVar4;
        if ((uVar2 < 0xd800) || (0xdfff < uVar2)) {
          if (param_5 / 2 <= iVar5) break;
          *param_4 = uVar2;
          puVar4 = puVar4 + 1;
          param_4 = param_4 + 1;
          iVar5 = iVar5 + 1;
        }
        else {
          bVar1 = *(byte *)(param_1 + 8);
          if (bVar1 < 3) {
            if (bVar1 == 2) {
              *param_4 = uVar2;
              puVar4 = puVar4 + 1;
              param_4 = param_4 + 1;
              iVar5 = iVar5 + 1;
            }
            else if (bVar1 == 0) {
              FUN_0041ddd0(local_40,PTR_PTR_02004e20);
              local_60[0] = (uint)*puVar4;
              local_58 = 0;
              local_50 = L"UCS-2";
              local_48 = 0x11;
              FUN_008e6700(local_40[0],local_60,1,
                           ((longlong)puVar4 - (longlong)param_2) / 2 & 0xffffffff);
            }
            else if (bVar1 == 1) break;
          }
          else if (bVar1 == 3) {
            puVar4 = puVar4 + 1;
          }
          else if (bVar1 == 4) {
            *param_4 = *(ushort *)(param_1 + 10);
            puVar4 = puVar4 + 1;
            param_4 = param_4 + 1;
            iVar5 = iVar5 + 1;
          }
        }
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
    *param_7 = iVar5;
    uVar3 = ((longlong)puVar4 - (longlong)param_2) % 2;
    *param_6 = (int)(((longlong)puVar4 - (longlong)param_2) / 2);
  }
  FUN_00414480(local_40,uVar3);
  return;
}

