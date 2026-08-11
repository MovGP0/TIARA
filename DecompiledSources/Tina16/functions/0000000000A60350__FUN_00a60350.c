/* Ghidra address: 00a60350 */
/* Ghidra symbol: FUN_00a60350 */


undefined1 FUN_00a60350(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  char cVar6;
  int *piVar7;
  double dVar8;
  undefined8 local_res10 [3];
  undefined1 local_b9;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60 [2];
  int local_50;
  int local_4c;
  int local_48 [2];
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_30 [8];
  
  local_b8 = 0;
  local_b0 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_90 = 0;
  local_98 = 0;
  local_80 = 0;
  local_88 = 0;
  local_70 = 0;
  local_78 = 0;
  local_60[0] = 0;
  local_68 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00417600(&local_40,&DAT_00401390,3);
  iVar2 = FUN_004170c0(&DAT_00a607e4,local_res10[0],1);
  iVar3 = FUN_004170c0(&DAT_00a607f4,local_res10[0],1);
  if ((iVar2 < 1) || (iVar3 < 1)) {
    local_b9 = 0;
  }
  else {
    FUN_00416dc0(local_res10,local_res10[0],1,iVar3 + -1);
    FUN_00416dc0(&local_68,local_res10[0],iVar2 + 1,0xff);
    FUN_0043ea00(local_60,local_68);
    FUN_00414b50(local_res10,local_60[0]);
    cVar6 = '\x02';
    puVar5 = &local_40;
    do {
      iVar2 = FUN_004170c0(&DAT_00a60804,local_res10[0],1);
      FUN_00416dc0(&local_78,local_res10[0],1,iVar2 + -1);
      FUN_0043ea00(&local_70,local_78);
      FUN_00414ad0(puVar5,local_70);
      FUN_00416dc0(&local_88,local_res10[0],iVar2 + 1,0xff);
      FUN_0043ea00(&local_80,local_88);
      FUN_00414b50(local_res10,local_80);
      puVar5 = puVar5 + 1;
      cVar6 = cVar6 + -1;
    } while (cVar6 != '\0');
    iVar2 = FUN_004170c0(&DAT_00a60804,local_res10[0],1);
    if (iVar2 < 1) {
      FUN_00414b50(local_30,local_res10[0]);
      **(undefined1 **)(param_1 + 0xb8) = 0xff;
    }
    else {
      FUN_00416dc0(&local_98,local_res10[0],1,iVar2 + -1);
      FUN_0043ea00(&local_90,local_98);
      FUN_00414b50(local_30,local_90);
      FUN_00416dc0(&local_a8,local_res10[0],iVar2 + 1,0xff);
      FUN_0043ea00(&local_a0,local_a8);
      FUN_00414b50(local_res10,local_a0);
      dVar8 = (double)FUN_00410100(local_res10[0],&local_50);
      if (local_50 == 0) {
        uVar1 = FUN_0040c840(dVar8 * 255.0);
      }
      else {
        uVar1 = 0xff;
      }
      **(undefined1 **)(param_1 + 0xb8) = uVar1;
    }
    FUN_009ec440(&local_b0,local_40);
    for (local_4c = FUN_0043fc50(local_b0,0); 0x167 < local_4c; local_4c = local_4c + -0x168) {
    }
    for (; local_4c < 0; local_4c = local_4c + 0x168) {
    }
    cVar6 = '\x02';
    puVar5 = &local_38;
    piVar7 = local_48;
    do {
      iVar2 = FUN_004170c0(&LAB_00a60814,*puVar5,1);
      if (0 < iVar2) {
        FUN_00416e20(puVar5,iVar2,1);
      }
      FUN_009ec440(&local_b8,*puVar5);
      iVar2 = FUN_0043fc50(local_b8,0);
      *piVar7 = iVar2;
      if (100 < iVar2) {
        *piVar7 = 100;
      }
      if (*piVar7 < 0) {
        *piVar7 = 0;
      }
      piVar7 = piVar7 + 1;
      puVar5 = puVar5 + 1;
      cVar6 = cVar6 + -1;
    } while (cVar6 != '\0');
    uVar4 = FUN_00a4ebf0((double)local_4c,(double)local_48[0],(double)local_48[1]);
    **(undefined4 **)(param_1 + 0xb0) = uVar4;
    local_b9 = 1;
  }
  FUN_00414560(&local_b8,0xc);
  FUN_00417840(&local_40,&DAT_00401390,3);
  FUN_00414480(local_res10);
  return local_b9;
}

