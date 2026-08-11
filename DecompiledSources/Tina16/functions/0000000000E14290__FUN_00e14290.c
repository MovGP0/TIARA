/* Ghidra address: 00e14290 */
/* Ghidra symbol: FUN_00e14290 */


byte FUN_00e14290(longlong param_1,int param_2,longlong *param_3,undefined4 *param_4,
                 undefined1 param_5,longlong param_6)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  longlong lVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  bool bVar8;
  byte local_31;
  int local_30;
  
  iVar7 = *(int *)(param_1 + 0x10);
  *param_3 = 0;
  *param_4 = 0xffffffff;
  bVar5 = 0;
  bVar6 = 0;
  local_30 = 0;
  if (-1 < iVar7 + -1) {
    do {
      lVar4 = FUN_01d347d0(param_1,local_30);
      iVar1 = *(int *)(lVar4 + 0x18);
      if ((param_6 == 0) || (*(longlong *)(lVar4 + 0x10) != param_6)) {
        if (*(char *)(lVar4 + 8) == '\0') {
          cVar2 = FUN_01d3f3e0(iVar1,param_5);
          if (((cVar2 == '\0') || (cVar2 = FUN_01d3fc30(iVar1), cVar2 != '\0')) && (iVar1 != 0x86))
          {
            bVar8 = false;
          }
          else {
            bVar8 = true;
          }
        }
        else {
          cVar2 = FUN_01d3f4b0(*(undefined8 *)(lVar4 + 0x10),param_5);
          if (((cVar2 == '\0') || (cVar2 = FUN_01d3fc30(iVar1), cVar2 != '\0')) && (iVar1 != 0x86))
          {
            bVar8 = false;
          }
          else {
            bVar8 = true;
          }
        }
        bVar3 = FUN_01d3f510(lVar4,param_5);
        if (bVar3 == 0) {
          if ((!bVar8) && ((iVar1 == 0x3fe || (iVar1 == 0x4b1)))) {
            bVar3 = *(byte *)(*(longlong *)(lVar4 + 0x10) + 0x3d2);
            bVar8 = bVar3 == 0;
            if (bVar3 != 0) {
              *param_3 = *(longlong *)(lVar4 + 0x10);
              *param_4 = *(undefined4 *)(lVar4 + 0x24);
            }
          }
        }
        else {
          *param_3 = *(longlong *)(lVar4 + 0x10);
          *param_4 = *(undefined4 *)(lVar4 + 0x24);
        }
        if (param_2 == 1) {
          bVar5 = bVar5 | bVar8;
        }
        else if (param_2 == 2) {
          bVar6 = bVar6 | bVar3;
        }
        else if (param_2 == 3) {
          bVar5 = bVar5 | bVar8;
          bVar6 = bVar6 | bVar3;
        }
      }
      local_30 = local_30 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  bVar3 = bVar5;
  if (((param_2 != 1) && (bVar3 = bVar6, param_2 != 2)) && (bVar3 = local_31, param_2 == 3)) {
    if ((bVar5 == 0) || (bVar6 != 0)) {
      bVar3 = 0;
    }
    else {
      bVar3 = 1;
    }
  }
  local_31 = bVar3;
  return local_31;
}

