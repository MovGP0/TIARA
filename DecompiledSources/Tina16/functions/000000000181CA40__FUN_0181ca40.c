/* Ghidra address: 0181ca40 */
/* Ghidra symbol: FUN_0181ca40 */


void FUN_0181ca40(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  iVar3 = FUN_00808040(*(undefined8 *)PTR_DAT_02005950);
  if (1 < iVar3) {
    *(undefined1 *)(param_1 + 0x4d8) = 0;
    uVar4 = FUN_00808020(*(undefined8 *)PTR_DAT_02005950,0);
    FUN_00800470(param_1,0);
    if (*(longlong *)(param_1 + 0x6f8) == 0) {
      lVar1 = *(longlong *)(*(longlong *)PTR_DAT_02004030 + 0xa8);
      if ((lVar1 == 0) || (*(char *)(lVar1 + 0xa9) == '\0')) {
        iVar3 = FUN_00808040();
        iVar6 = 0;
        if (-1 < iVar3 + -1) {
          do {
            uVar5 = FUN_00808020(*(undefined8 *)PTR_DAT_02005950,iVar6);
            cVar2 = FUN_00807890(uVar5);
            if (cVar2 != '\0') {
              uVar4 = FUN_00808020(*(undefined8 *)PTR_DAT_02005950,iVar6);
              break;
            }
            iVar6 = iVar6 + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
      }
      else {
        uVar5 = FUN_0065b870(lVar1);
        uVar5 = FUN_00809ba0(*(undefined8 *)PTR_DAT_02005950,uVar5,0);
        FUN_00807850(uVar5,&local_38);
      }
      FUN_00807850(uVar4,&local_38);
    }
    else {
      FUN_0064d000(*(longlong *)(param_1 + 0x6f8),&local_38);
    }
    FUN_00806af0(param_1,local_38 + ((local_30 - local_38) - *(int *)(param_1 + 0x98)) / 2);
    FUN_00806b40(param_1,local_34 + ((local_2c - local_34) - *(int *)(param_1 + 0x9c)) / 2);
  }
  return;
}

