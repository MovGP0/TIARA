/* Ghidra address: 00b2a090 */
/* Ghidra symbol: FUN_00b2a090 */


undefined1 FUN_00b2a090(undefined8 param_1,longlong param_2,undefined2 *param_3)

{
  short *psVar1;
  short sVar2;
  short sVar3;
  undefined2 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined1 local_69;
  undefined8 local_68;
  undefined8 local_60 [2];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  short *local_30 [2];
  
  local_68 = 0;
  local_60[0] = 0;
  local_30[0] = (short *)0x0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_69 = 0;
  FUN_00414520(&local_48);
  FUN_00414520(&local_50);
  uVar5 = 0;
  if (param_2 != 0) {
    uVar5 = *(uint *)(param_2 + -4) >> 1;
  }
  if (uVar5 != 0) {
    FUN_00414be0(local_30,param_2);
    if (*local_30[0] == 0x27) {
      uVar5 = 0;
      if (local_30[0] != (short *)0x0) {
        uVar5 = *(uint *)(local_30[0] + -2) >> 1;
      }
      if (local_30[0][(longlong)(int)uVar5 + -1] == 0x27) {
        uVar5 = 0;
        if (local_30[0] != (short *)0x0) {
          uVar5 = *(uint *)(local_30[0] + -2) >> 1;
        }
        FUN_00416430(local_30,local_30[0],2,uVar5 - 2);
      }
    }
    psVar1 = local_30[0];
    uVar5 = 0;
    if (local_30[0] != (short *)0x0) {
      uVar5 = *(uint *)(local_30[0] + -2) >> 1;
    }
    if ((uVar5 != 0) && (iVar6 = FUN_00417170(&DAT_00b2a454,local_30[0],1), 0 < iVar6)) {
      FUN_00416430(&local_40,local_30[0],1,iVar6);
      uVar5 = 0;
      if (psVar1 != (short *)0x0) {
        uVar5 = *(uint *)(psVar1 + -2) >> 1;
      }
      FUN_00416430(&local_38,local_30[0],iVar6 + 1,uVar5 - iVar6);
      FUN_00b15430(local_60,local_40,&DAT_00b2a45c,0);
      FUN_00414be0(&local_40,local_60[0]);
      FUN_00b15430(&local_68,local_40,&DAT_00b2a454,0);
      FUN_00414be0(&local_40,local_68);
      uVar5 = FUN_00b2a910(param_1,local_40);
      iVar6 = FUN_00417170(&LAB_00b2a464,local_38,1);
      if (iVar6 < 1) {
        FUN_00414be0(&local_48,local_38);
      }
      else {
        FUN_00416430(&local_48,local_38,1,iVar6 + -1);
        uVar7 = 0;
        if (local_38 != 0) {
          uVar7 = *(uint *)(local_38 + -4) >> 1;
        }
        FUN_00416430(&local_50,local_38,iVar6 + 1,uVar7 - iVar6);
        iVar6 = FUN_00416420(local_48,0);
        if ((iVar6 == 0) || (iVar6 = FUN_00416420(local_50,0), iVar6 == 0)) goto LAB_00b2a3e9;
      }
      uVar8 = FUN_00b28dc0(param_1,(short)uVar5);
      sVar2 = FUN_00b288f0(uVar8,local_48);
      uVar7 = uVar5 & 0xffff;
      if (sVar2 == -1) {
        uVar8 = FUN_00b28dc0(param_1,uVar5 & 0xffff);
        FUN_00b28800(uVar8,local_48);
        uVar8 = FUN_00b28dc0(param_1,uVar7);
        sVar2 = FUN_00b286f0(uVar8);
        sVar2 = sVar2 + -1;
      }
      iVar6 = FUN_00416420(local_50,0);
      sVar3 = sVar2;
      if (iVar6 != 0) {
        uVar8 = FUN_00b28dc0(param_1,uVar7);
        sVar3 = FUN_00b288f0(uVar8,local_50);
        if (sVar3 == -1) {
          uVar8 = FUN_00b28dc0(param_1,uVar7);
          FUN_00b28800(uVar8,local_50);
          uVar8 = FUN_00b28dc0(param_1,uVar7);
          sVar3 = FUN_00b286f0(uVar8);
          sVar3 = sVar3 + -1;
        }
      }
      if ((sVar2 != -1) && (sVar3 != -1)) {
        uVar4 = FUN_00b29a30(param_1,uVar5,sVar2,sVar3,1);
        *param_3 = uVar4;
        local_69 = 1;
      }
    }
  }
LAB_00b2a3e9:
  FUN_004145c0(&local_68,2);
  FUN_004145c0(&local_50,5);
  return local_69;
}

