/* Ghidra address: 0058ada0 */
/* Ghidra symbol: FUN_0058ada0 */


ulonglong FUN_0058ada0(undefined8 param_1,undefined8 *param_2)

{
  byte bVar1;
  char *pcVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  
  uVar7 = 0;
  pcVar2 = *(char **)*param_2;
  if (*pcVar2 == '\a') {
    uVar7 = FUN_00590120(&DAT_0058b3f0,param_1,param_2);
  }
  else {
    bVar1 = pcVar2[(ulonglong)(byte)pcVar2[1] + 2];
    if (bVar1 < 4) {
      if (bVar1 == 3) {
        uVar7 = FUN_00590690(&DAT_0058bc78,param_1,param_2);
        uVar7 = uVar7 & 0xffff;
      }
      else if (bVar1 == 0) {
        cVar3 = FUN_00590270(&LAB_0058b610,param_1,param_2);
        uVar7 = (ulonglong)cVar3;
      }
      else if (bVar1 == 1) {
        uVar7 = FUN_005903d0(&DAT_0058b838,param_1,param_2);
        uVar7 = uVar7 & 0xff;
      }
      else if (bVar1 == 2) {
        sVar4 = FUN_00590530(&LAB_0058ba50,param_1,param_2);
        uVar7 = (ulonglong)sVar4;
      }
    }
    else if (bVar1 == 4) {
      iVar5 = FUN_005907f0(&DAT_0058be90,param_1,param_2);
      uVar7 = (ulonglong)iVar5;
    }
    else if (bVar1 == 5) {
      uVar6 = FUN_00590940(&LAB_0058c0b0,param_1,param_2);
      uVar7 = (ulonglong)uVar6;
    }
  }
  return uVar7;
}

