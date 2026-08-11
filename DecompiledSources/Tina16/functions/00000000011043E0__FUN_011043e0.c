/* Ghidra address: 011043e0 */
/* Ghidra symbol: FUN_011043e0 */


void FUN_011043e0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  int extraout_var;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38 [2];
  
  if (*(char *)(param_1 + 0x60) != '\0') {
    FUN_00498350(local_38,0,0,0,0);
    iVar4 = thunk_FUN_03b7fa88(param_1 + 0x14,local_38);
    if (iVar4 == 0) {
      local_40 = FUN_00498310(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      cVar3 = FUN_01a8e4c0(param_1 + 0x14,&local_40);
      if (cVar3 == '\0') {
        return;
      }
    }
    plVar7 = (longlong *)FUN_005fd7d0(&PTR_FUN_005f35d8,1);
    plVar8 = (longlong *)FUN_005fd250(&PTR_FUN_005f3290,1);
    (**(code **)(*plVar7 + 0x10))(plVar7,param_2[0x10]);
    (**(code **)(*plVar8 + 0x10))(plVar8,param_2[0xf]);
    piVar1 = (int *)(param_1 + 0x14);
    iVar4 = FUN_004230d0(piVar1);
    uVar5 = FUN_0040c770(((double)(*(int *)(param_1 + 0x1c) - *piVar1) / 400.0) * (double)iVar4);
    FUN_004230d0(piVar1);
    uVar6 = FUN_0040c770(((double)(*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x18)) / 250.0) *
                         (double)extraout_var);
    uVar5 = FUN_00b905e0(uVar5,uVar6);
    FUN_00b905e0(uVar5,2);
    iVar4 = FUN_00b905e0(*(undefined4 *)(param_1 + 0x5c),2);
    uVar5 = FUN_005fd4d0(*(undefined8 *)(param_1 + 0x48));
    FUN_005fdab0(param_2[0x10],uVar5);
    if (*(char *)(param_1 + 0x62) == '\0') {
      FUN_005fdcb0(param_2[0x10],1);
    }
    else {
      FUN_005fdcb0(param_2[0x10],0);
    }
    (**(code **)(*(longlong *)param_2[0xf] + 0x10))
              ((longlong *)param_2[0xf],*(undefined8 *)(param_1 + 0x48));
    FUN_005fd640(param_2[0xf],0xf);
    bVar2 = *(byte *)(param_1 + 0x60);
    if (bVar2 < 5) {
      if (bVar2 == 4) {
        (**(code **)(*param_2 + 200))
                  (param_2,*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) - iVar4 / 2);
        (**(code **)(*param_2 + 0xc0))
                  (param_2,*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + iVar4 / 2);
      }
      else if (bVar2 == 1) {
        iVar4 = iVar4 / 2;
        (**(code **)(*param_2 + 0xa0))
                  (param_2,*(int *)(param_1 + 0x54) - iVar4,*(int *)(param_1 + 0x58) - iVar4,
                   *(int *)(param_1 + 0x54) + iVar4,*(int *)(param_1 + 0x58) + iVar4);
      }
      else if (bVar2 == 2) {
        cVar3 = *(char *)(param_1 + 0x61);
        if (cVar3 == '\0') {
          iVar4 = iVar4 / 2;
          local_58 = FUN_00498310(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) - iVar4);
          local_50 = FUN_00498310(*(int *)(param_1 + 0x54) + iVar4,*(int *)(param_1 + 0x58) + iVar4)
          ;
          local_48 = FUN_00498310(*(int *)(param_1 + 0x54) - iVar4,*(int *)(param_1 + 0x58) + iVar4)
          ;
          (**(code **)(*param_2 + 0xd8))(param_2,&local_58,2);
        }
        else if (cVar3 == '\x01') {
          iVar4 = iVar4 / 2;
          local_58 = FUN_00498310(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + iVar4);
          local_50 = FUN_00498310(*(int *)(param_1 + 0x54) + iVar4,*(int *)(param_1 + 0x58) - iVar4)
          ;
          local_48 = FUN_00498310(*(int *)(param_1 + 0x54) - iVar4,*(int *)(param_1 + 0x58) - iVar4)
          ;
          (**(code **)(*param_2 + 0xd8))(param_2,&local_58,2);
        }
        else if (cVar3 == '\x02') {
          iVar4 = iVar4 / 2;
          local_58 = FUN_00498310(*(int *)(param_1 + 0x54) + iVar4,*(int *)(param_1 + 0x58) + iVar4)
          ;
          local_50 = FUN_00498310(*(int *)(param_1 + 0x54) - iVar4,*(undefined4 *)(param_1 + 0x58));
          local_48 = FUN_00498310(*(int *)(param_1 + 0x54) + iVar4,*(int *)(param_1 + 0x58) - iVar4)
          ;
          (**(code **)(*param_2 + 0xd8))(param_2,&local_58,2);
        }
        else if (cVar3 == '\x03') {
          iVar4 = iVar4 / 2;
          local_58 = FUN_00498310(*(int *)(param_1 + 0x54) - iVar4,*(int *)(param_1 + 0x58) + iVar4)
          ;
          local_50 = FUN_00498310(*(int *)(param_1 + 0x54) + iVar4,*(undefined4 *)(param_1 + 0x58));
          local_48 = FUN_00498310(*(int *)(param_1 + 0x54) - iVar4,*(int *)(param_1 + 0x58) - iVar4)
          ;
          (**(code **)(*param_2 + 0xd8))(param_2,&local_58,2);
        }
      }
      else if (bVar2 == 3) {
        iVar4 = iVar4 / 2;
        (**(code **)(*param_2 + 0xf8))
                  (param_2,*(int *)(param_1 + 0x54) - iVar4,*(int *)(param_1 + 0x58) - iVar4,
                   *(int *)(param_1 + 0x54) + iVar4,*(int *)(param_1 + 0x58) + iVar4);
      }
    }
    else if (bVar2 == 5) {
      iVar4 = iVar4 / 2;
      (**(code **)(*param_2 + 200))
                (param_2,*(int *)(param_1 + 0x54) - iVar4,*(int *)(param_1 + 0x58) - iVar4);
      (**(code **)(*param_2 + 0xc0))
                (param_2,*(int *)(param_1 + 0x54) + iVar4,*(int *)(param_1 + 0x58) + iVar4);
      (**(code **)(*param_2 + 200))
                (param_2,*(int *)(param_1 + 0x54) + iVar4,*(int *)(param_1 + 0x58) - iVar4);
      (**(code **)(*param_2 + 0xc0))
                (param_2,*(int *)(param_1 + 0x54) - iVar4,*(int *)(param_1 + 0x58) + iVar4);
    }
    else if (bVar2 == 6) {
      iVar4 = iVar4 / 2;
      (**(code **)(*param_2 + 200))
                (param_2,*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) - iVar4);
      (**(code **)(*param_2 + 0xc0))
                (param_2,*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + iVar4);
      (**(code **)(*param_2 + 200))
                (param_2,*(int *)(param_1 + 0x54) - iVar4,*(undefined4 *)(param_1 + 0x58));
      (**(code **)(*param_2 + 0xc0))
                (param_2,*(int *)(param_1 + 0x54) + iVar4,*(undefined4 *)(param_1 + 0x58));
    }
    (**(code **)(*(longlong *)param_2[0x10] + 0x10))((longlong *)param_2[0x10],plVar7);
    FUN_00410f20(plVar7);
    (**(code **)(*(longlong *)param_2[0xf] + 0x10))((longlong *)param_2[0xf],plVar8);
    FUN_00410f20(plVar8);
  }
  return;
}

