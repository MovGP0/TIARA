/* Ghidra address: 01774900 */
/* Ghidra symbol: FUN_01774900 */


longlong * FUN_01774900(longlong param_1,int param_2,undefined8 param_3,int *param_4,char param_5)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  ulonglong unaff_R13;
  int iVar7;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80 [2];
  uint local_70 [8];
  undefined8 local_50;
  undefined1 local_44 [4];
  int local_40;
  int local_3c [3];
  
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80[0] = 0;
  local_50 = 0;
  *param_4 = 0;
  FUN_00414480(param_3);
  FUN_0040d200(local_70,0x20,0);
  if (param_5 == '\0') {
    plVar2 = (longlong *)0x0;
  }
  else {
    plVar2 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  }
  uVar1 = *(undefined8 *)(param_1 + 0xf8);
  FUN_004b6dc0(uVar1,0x80);
  FUN_004b84c0(uVar1,local_3c,4);
  FUN_004b84c0(uVar1,local_44,4);
  if (2 < local_3c[0]) {
    unaff_R13 = 8;
    puVar5 = local_70;
    do {
      FUN_004b84c0(uVar1,puVar5,4);
      puVar5 = puVar5 + 1;
      uVar6 = (int)unaff_R13 - 1;
      unaff_R13 = (ulonglong)uVar6;
    } while (uVar6 != 0);
  }
  if ((2 < local_3c[0]) && ((local_70[0] & 2) != 0)) {
    FUN_004b84c0(uVar1,param_4,4);
    iVar7 = *param_4;
    if (-1 < iVar7 + -1) {
      do {
        FUN_01b20f00(local_80,uVar1);
        FUN_004168b0(&local_50,local_80[0]);
        FUN_01b20f00(&local_88,uVar1);
        FUN_004168b0(param_3,local_88);
        if (param_2 == -1) {
          (**(code **)(*plVar2 + 0x90))(plVar2);
        }
        FUN_01b23340(*(undefined8 *)(param_1 + 0xf8),plVar2,
                     CONCAT71((int7)(unaff_R13 >> 8),param_2 == -1) & 0xffffffff);
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
  }
  FUN_004b84c0(uVar1,&local_40,4);
  if ((1 < local_3c[0]) && (0 < local_40)) {
    lVar3 = FUN_004b6da0(uVar1);
    FUN_004b6dc0(uVar1,lVar3 + local_40);
    FUN_004b84c0(uVar1,param_4,4);
    iVar7 = *param_4;
    iVar4 = 0;
    if (-1 < iVar7 + -1) {
      do {
        FUN_01b20f00(&local_90,uVar1);
        FUN_004168b0(&local_50,local_90);
        FUN_01b20f00(&local_98,uVar1);
        FUN_004168b0(param_3,local_98);
        if (param_5 != '\0') {
          (**(code **)(*plVar2 + 0x90))(plVar2);
        }
        FUN_01b23340(*(undefined8 *)(param_1 + 0xf8),plVar2,param_5);
        if (iVar4 == param_2) break;
        iVar4 = iVar4 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
  }
  FUN_004b6dc0(uVar1,0);
  FUN_004145c0(&local_98,4);
  FUN_00414480(&local_50);
  return plVar2;
}

