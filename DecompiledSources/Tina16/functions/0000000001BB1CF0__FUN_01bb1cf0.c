/* Ghidra address: 01bb1cf0 */
/* Ghidra symbol: FUN_01bb1cf0 */


void FUN_01bb1cf0(longlong *param_1,char param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  undefined8 local_400;
  undefined8 local_3f8;
  undefined8 local_3f0;
  undefined8 local_3e8;
  undefined8 local_3e0;
  undefined8 local_3d8;
  undefined8 local_3d0;
  undefined1 local_3c8;
  undefined1 local_3c7 [255];
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined4 local_2b8 [6];
  undefined8 local_2a0;
  
  local_400 = 0;
  local_3f0 = 0;
  local_3f8 = 0;
  local_3e8 = 0;
  local_3e0 = 0;
  local_3d0 = 0;
  local_3d8 = 0;
  local_2c0 = 0;
  local_2c8 = 0;
  FUN_00417580(local_2b8,&DAT_00432b90);
  (**(code **)(*param_1 + 0x90))(param_1);
  FUN_00441920(&local_3d8,*(undefined8 *)(PTR_DAT_02004010 + 0xb1));
  FUN_004414c0(&local_3d0,local_3d8,0);
  FUN_0043e130(&local_2c0,local_3d0);
  FUN_00441640(&local_2c8,*(undefined8 *)(PTR_DAT_02004010 + 0xb1));
  FUN_00416ba0(&local_3e0,local_2c8,L"*.tpc");
  iVar1 = FUN_00441230(local_3e0,0x20,local_2b8);
  do {
    if (iVar1 != 0) {
      FUN_004412c0(local_2b8);
      iVar1 = (**(code **)(*param_1 + 0x28))();
      iVar5 = 0;
      if (-1 < iVar1 + -1) {
        do {
          uVar4 = (**(code **)(*param_1 + 0x30))(param_1,iVar5);
          FUN_00418590(uVar4,&DAT_00432b90);
          iVar5 = iVar5 + 1;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
      FUN_00414560(&local_400,7);
      FUN_00414560(&local_2c8,2);
      FUN_00417740(local_2b8,&DAT_00432b90);
      return;
    }
    iVar1 = FUN_004170c0(L"autosave",local_2a0,1);
    if (iVar1 == 0) {
      FUN_00416ba0(&local_3e8,local_2c8,local_2a0);
      plVar2 = (longlong *)FUN_004b9860(&PTR_FUN_0047c498,1,local_3e8,0x20);
      (**(code **)(*plVar2 + 0x18))(plVar2,&local_3c8,1);
      (**(code **)(*plVar2 + 0x18))(plVar2,local_3c7,local_3c8);
      dVar6 = (double)FUN_00442290(local_2b8[0]);
      FUN_004169a0(&local_3f8,&local_3c8);
      FUN_0043e130(&local_3f0,local_3f8);
      iVar1 = FUN_00416db0(local_2c0,local_3f0);
      if (iVar1 == 0 || param_2 != '\0') {
        iVar1 = (**(code **)(*param_1 + 0x28))(param_1);
        do {
          iVar5 = iVar1;
          iVar1 = iVar5 + -1;
          if (iVar1 < 0) break;
          puVar3 = (undefined4 *)(**(code **)(*param_1 + 0x30))(param_1,iVar1);
          dVar7 = (double)FUN_00442290(*puVar3);
        } while (dVar7 < dVar6);
        uVar4 = FUN_00418560(0x280,&DAT_00432b90);
        FUN_00417c40(uVar4,local_2b8,&DAT_00432b90);
        FUN_00441920(&local_400,local_2a0);
        (**(code **)(*param_1 + 0xd0))(param_1,iVar5,local_400,uVar4);
      }
      FUN_00410f20(plVar2);
    }
    iVar1 = FUN_00441290(local_2b8);
  } while( true );
}

