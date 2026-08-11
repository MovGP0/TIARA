/* Ghidra address: 008eb530 */
/* Ghidra symbol: FUN_008eb530 */


undefined8 *
FUN_008eb530(longlong param_1,undefined8 *param_2,ushort *param_3,int param_4,int *param_5)

{
  byte bVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint local_60 [2];
  undefined1 local_58;
  wchar_t *local_50;
  undefined1 local_48;
  undefined8 local_40 [2];
  
  local_40[0] = 0;
  if ((param_3 == (ushort *)0x0) || (param_4 < 1)) {
    *param_5 = 0;
    FUN_004144d0(param_2);
  }
  else {
    FUN_00415d10(param_2,param_4 * 2,0);
    iVar4 = 0;
    iVar5 = 0;
    puVar3 = (undefined2 *)*param_2;
    iVar6 = param_4;
    if (0 < param_4) {
      do {
        if ((*param_3 < 0xd800) || (0xdfff < *param_3)) {
          uVar2 = FUN_008e5980();
          *puVar3 = uVar2;
          puVar3 = puVar3 + 1;
          param_3 = param_3 + 1;
          iVar4 = iVar4 + 1;
          iVar5 = iVar5 + 1;
        }
        else {
          bVar1 = *(byte *)(param_1 + 8);
          if (bVar1 < 3) {
            if (bVar1 == 2) {
              uVar2 = FUN_008e5980();
              *puVar3 = uVar2;
              puVar3 = puVar3 + 1;
              param_3 = param_3 + 1;
              iVar4 = iVar4 + 1;
              iVar5 = iVar5 + 1;
            }
            else if (bVar1 == 0) {
              FUN_0041ddd0(local_40,PTR_PTR_02004e20);
              local_60[0] = (uint)*param_3;
              local_58 = 0;
              local_50 = L"UCS-2";
              local_48 = 0x11;
              FUN_008e6700(local_40[0],local_60,1,iVar4 * 2);
            }
            else if (bVar1 == 1) break;
          }
          else if (bVar1 == 3) {
            param_3 = param_3 + 1;
            iVar4 = iVar4 + 1;
          }
          else if (bVar1 == 4) {
            uVar2 = FUN_008e5980(*(undefined2 *)(param_1 + 10));
            *puVar3 = uVar2;
            puVar3 = puVar3 + 1;
            param_3 = param_3 + 1;
            iVar4 = iVar4 + 1;
            iVar5 = iVar5 + 1;
          }
        }
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    if (param_4 != iVar5) {
      FUN_00415d10(param_2,iVar5 * 2,0);
    }
    *param_5 = iVar4;
  }
  FUN_00414480(local_40);
  return param_2;
}

