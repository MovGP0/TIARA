/* Ghidra address: 01b39770 */
/* Ghidra symbol: FUN_01b39770 */


void FUN_01b39770(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined8 local_58;
  longlong local_50 [2];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_58 = 0;
  local_50[0] = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  uVar3 = FUN_0040f200(param_2,L"{COMPONENT TINA.PCB");
  FUN_0040f590(uVar3);
  FUN_00409900();
  uVar3 = FUN_0040f200(param_2,L" {ENVIRONMENT LAYS.PCB}");
  FUN_0040f590(uVar3);
  FUN_00409900();
  uVar3 = FUN_0040f200(param_2,L" {DETAIL");
  FUN_0040f590(uVar3);
  FUN_00409900();
  uVar3 = FUN_0040f200(param_2,L"  {SUBCOMP ");
  FUN_0040f590(uVar3);
  FUN_00409900();
  iVar7 = *(int *)(param_1 + 0x10);
  iVar6 = 0;
  if (-1 < iVar7 + -1) {
    do {
      puVar4 = (undefined8 *)FUN_004aeac0(param_1,iVar6);
      if (puVar4[10] != 0) {
        FUN_01b388b0(puVar4);
        iVar1 = FUN_004170c0(&DAT_01b39bc0,*puVar4,1);
        if (iVar1 != 0) {
          FUN_00416dc0(puVar4,*puVar4,1,iVar1 + -1);
        }
        FUN_0043ea00(local_50,puVar4[3]);
        iVar1 = 0;
        if (local_50[0] != 0) {
          iVar1 = *(int *)(local_50[0] + -4);
        }
        if (iVar1 == 0) {
          FUN_00416ba0(&local_30,&DAT_01b39bd0,puVar4[1]);
        }
        else {
          FUN_00414b50(&local_40,puVar4[3]);
          FUN_01b387d0(&local_58,local_40);
          FUN_00ea9ef0(&local_30,local_58);
        }
        uVar3 = FUN_0040f200(param_2,&DAT_01b39be4);
        uVar3 = FUN_0040f200(uVar3,local_30);
        uVar3 = FUN_0040f200(uVar3,L".PRT ");
        uVar3 = FUN_0040f200(uVar3,*puVar4);
        FUN_0040f590(uVar3);
        FUN_00409900();
        puVar5 = (undefined4 *)puVar4[10];
        uVar3 = FUN_0040f200(param_2,&DAT_01b39c10);
        FUN_0040f590(uVar3);
        FUN_00409900();
        iVar1 = *(int *)((longlong)puVar4 + 0x34);
        if (0 < iVar1) {
          do {
            FUN_00416dc0(&local_38,*(undefined8 *)(puVar5 + 4),2,5);
            iVar2 = FUN_00416db0(*(undefined8 *)(puVar5 + 4),&PTR_DAT_01b39c24);
            if (iVar2 == 0) {
              uVar3 = FUN_0040eee0(param_2,*puVar5,5);
              uVar3 = FUN_0040f200(uVar3,&DAT_01b39c38);
              FUN_0040f590(uVar3);
              FUN_00409900();
            }
            else {
              uVar3 = FUN_0040eee0(param_2,*puVar5,5);
              uVar3 = FUN_0040f200(uVar3,L" NET");
              uVar3 = FUN_0040f200(uVar3,local_38);
              FUN_0040f590(uVar3);
              FUN_00409900();
            }
            puVar5 = *(undefined4 **)(puVar5 + 6);
            iVar1 = iVar1 + -1;
          } while (iVar1 != 0);
        }
        uVar3 = FUN_0040f3d0(param_2,0x7d);
        FUN_0040f590(uVar3);
        FUN_00409900();
        uVar3 = FUN_0040f3d0(param_2,0x7d);
        FUN_0040f590(uVar3);
        FUN_00409900();
      }
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  uVar3 = FUN_0040f3d0(param_2,0x7d);
  FUN_0040f590(uVar3);
  FUN_00409900();
  uVar3 = FUN_0040f3d0(param_2,0x7d);
  FUN_0040f590(uVar3);
  FUN_00409900();
  uVar3 = FUN_0040f3d0(param_2,0x7d);
  FUN_0040f590(uVar3);
  FUN_00409900();
  FUN_00414560(&local_58,2);
  FUN_00414560(&local_40,3);
  return;
}

