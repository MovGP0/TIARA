/* Ghidra address: 00ca4fc0 */
/* Ghidra symbol: FUN_00ca4fc0 */


undefined4
FUN_00ca4fc0(int *param_1,ushort *param_2,undefined2 *param_3,undefined2 *param_4,
            undefined2 *param_5,undefined2 *param_6,undefined2 *param_7,int *param_8,int *param_9)

{
  char cVar1;
  short sVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  longlong local_20;
  
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_20 = 0;
  local_28 = 0;
  if (0xb < *param_1) {
    FUN_004147f0(&local_28,*(undefined8 *)(param_1 + 2),*param_1,0);
    FUN_00416880(&local_20,local_28);
    cVar1 = FUN_008752e0(local_20,0xc,1);
    if (cVar1 != '\0') {
      FUN_00416dc0(&local_30,local_20,1,2);
      sVar2 = FUN_00877c50(local_30);
      *param_2 = sVar2 + 0x76c;
      FUN_00416dc0(&local_38,local_20,3,2);
      uVar3 = FUN_00877c50(local_38);
      *param_3 = uVar3;
      FUN_00416dc0(&local_40,local_20,5,2);
      uVar3 = FUN_00877c50(local_40);
      *param_4 = uVar3;
      FUN_00416dc0(&local_48,local_20,7,2);
      uVar3 = FUN_00877c50(local_48);
      *param_5 = uVar3;
      FUN_00416dc0(&local_50,local_20,9,2);
      uVar3 = FUN_00877c50(local_50);
      *param_6 = uVar3;
      FUN_00416dc0(&local_58,local_20,0xb,2);
      uVar3 = FUN_00877c50(local_58);
      *param_7 = uVar3;
      if (*param_2 < 0x79e) {
        *param_2 = *param_2 + 100;
      }
      *param_8 = 0;
      *param_9 = 0;
      cVar1 = FUN_008791b0(local_20,0xd,&LAB_00ca5348);
      if (cVar1 != '\0') {
        uVar4 = FUN_00879280(local_20,0xd,0x2d);
        iVar5 = FUN_00875200(uVar4,0xffffffff,1);
        iVar6 = 0xe;
        do {
          if (iVar6 != 0x10) {
            cVar1 = FUN_00875360(*(undefined2 *)(local_20 + -2 + (longlong)iVar6 * 2));
            if (cVar1 == '\0') goto LAB_00ca52c3;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 != 0x13);
        FUN_00416dc0(&local_60,local_20,0xe,0xf);
        iVar6 = FUN_00877c50(local_60);
        *param_8 = iVar6 * iVar5;
        FUN_00416dc0(&local_68,local_20,0x11,0x12);
        iVar6 = FUN_00877c50(local_68);
        *param_9 = iVar6 * iVar5;
      }
    }
  }
LAB_00ca52c3:
  FUN_00414560(&local_68,8);
  FUN_004144d0(&local_28);
  FUN_00414480(&local_20);
  return 1;
}

