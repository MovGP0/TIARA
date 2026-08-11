/* Ghidra address: 010d75a0 */
/* Ghidra symbol: FUN_010d75a0 */


void FUN_010d75a0(undefined8 param_1,undefined1 param_2,longlong *param_3,longlong *param_4,
                 undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined8 local_390;
  undefined8 local_388;
  undefined8 local_380;
  undefined8 local_378 [95];
  undefined4 local_79;
  undefined2 uStack_75;
  undefined1 uStack_73;
  
  local_390 = 0;
  local_378[0] = 0;
  local_380 = 0;
  local_388 = 0;
  lVar5 = 0;
  FUN_00414480(param_5);
  uVar6 = 0;
  lVar3 = FUN_017e1bd0(&DAT_017df868,1,0,0,0,0,0);
  *param_4 = lVar3;
  FUN_01695da0(*param_4,*PTR_DAT_020052b0);
  if (*param_4 != 0) {
    FUN_01694110(*(undefined8 *)(*param_4 + 0x4e8),1,param_1,param_2);
  }
  FUN_01695540(*param_4,param_3);
  iVar2 = FUN_010d7540(param_3);
  if (iVar2 == 1) {
    (**(code **)(*param_3 + 0x38))(param_3,local_378);
    uVar4 = FUN_010d60d0(&DAT_010d5b88,1,param_1,local_378[0],*param_4,param_6);
    FUN_010d6700(uVar4);
    *(undefined1 *)(*param_4 + 0x530) = 1;
    *(undefined8 *)(*param_4 + 0x538) = uVar4;
    FUN_010d64a0(uVar4,&local_380,&local_388,0);
    goto LAB_010d788d;
  }
  lVar3 = FUN_010d3b00(&DAT_010d3988,1,*param_4);
  iVar2 = FUN_010d5050(lVar3);
  if (iVar2 != 0) {
    cVar1 = FUN_01695e60(*param_4);
    if (cVar1 == '\0') {
      cVar1 = FUN_01695ee0(*param_4);
      if (cVar1 == '\0') {
        FUN_017e2900(*param_4,0);
        goto LAB_010d776e;
      }
    }
    FUN_017e3010(*param_4,param_5);
  }
LAB_010d776e:
  if (iVar2 == 0) {
    FUN_01696180(*param_4);
    lVar5 = FUN_010c2660(&DAT_010c2500,1,*param_4);
    iVar2 = FUN_010c7360(lVar5);
    if (iVar2 == 0) {
      FUN_010d3560(*(undefined8 *)(*param_4 + 0x4f0));
      iVar2 = *(int *)(*(longlong *)(*param_4 + 0x4f0) + 0x10) + -1;
      *(short *)(*param_4 + 0x566) = (short)iVar2;
      FUN_010d3560(*(undefined8 *)(*param_4 + 0x4f0));
      local_79 = 0x67695306;
      uStack_75 = 0x616e;
      uStack_73 = 0x6c;
      uVar4 = FUN_013b2dc0(0,&PTR_FUN_013b25f8,1,1);
      FUN_013b3a80(uVar4,iVar2);
      FUN_004169a0(&local_390,&local_79);
      FUN_010d2370(*(undefined8 *)(*param_4 + 0x4f8),local_390,uVar4,
                   *(undefined8 *)(*param_4 + 0x4f0),CONCAT44(uVar6,1));
    }
  }
  if (lVar5 != 0) {
    FUN_00410f20(lVar5);
  }
  if (lVar3 != 0) {
    FUN_00410f20(lVar3);
  }
LAB_010d788d:
  FUN_00414560(&local_390,4);
  return;
}

