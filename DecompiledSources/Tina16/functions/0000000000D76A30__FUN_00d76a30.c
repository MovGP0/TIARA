/* Ghidra address: 00d76a30 */
/* Ghidra symbol: FUN_00d76a30 */


void FUN_00d76a30(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  
  FUN_00d77cb0(param_1,local_48);
  iVar1 = FUN_004230c0(local_48);
  if (iVar1 < (int)param_1[0x1d] + *(int *)((longlong)param_1 + 0xec)) {
    FUN_00d77cb0(param_1,local_38);
    plVar4 = (longlong *)FUN_00d58750(&PTR_FUN_00d55dd8,1);
    FUN_00d77cb0(param_1,local_58);
    uVar2 = FUN_004230a0(local_58);
    (**(code **)(*plVar4 + 0xe0))
              (plVar4,uVar2,(int)param_1[0x1d] + *(int *)((longlong)param_1 + 0xec));
    FUN_00d58660(plVar4,0);
    uVar2 = (**(code **)(*plVar4 + 0x60))(plVar4);
    uVar3 = (**(code **)(*plVar4 + 0x48))(plVar4);
    FUN_00423010(local_88,0,0,uVar2,uVar3);
    FUN_00d77b90(param_1,local_88);
    uVar5 = FUN_00609e10(plVar4);
    (**(code **)(*param_1 + 0xa8))(param_1,uVar5,&DAT_01ecf394);
    *(undefined1 *)(plVar4 + 0xf) = 1;
    uVar2 = (**(code **)(*plVar4 + 0x60))(plVar4);
    uVar3 = (**(code **)(*plVar4 + 0x48))(plVar4);
    FUN_00423010(local_88,0,0,uVar2,uVar3);
    FUN_00d589a0(plVar4,param_2,local_38,local_88);
    FUN_00d77b90(param_1,local_38);
    FUN_00410f20(plVar4);
  }
  else {
    FUN_00d77cb0(param_1,local_68);
    iVar1 = FUN_004230a0(local_68);
    if (iVar1 < *(int *)((longlong)param_1 + 0xe4) + (int)param_1[0x1e]) {
      FUN_00d77cb0(param_1,local_38);
      plVar4 = (longlong *)FUN_00d58750(&PTR_FUN_00d55dd8,1);
      FUN_00d77cb0(param_1,local_78);
      uVar2 = FUN_004230c0(local_78);
      (**(code **)(*plVar4 + 0xe0))
                (plVar4,*(int *)((longlong)param_1 + 0xe4) + (int)param_1[0x1e],uVar2);
      FUN_00d58660(plVar4,0);
      uVar2 = (**(code **)(*plVar4 + 0x60))(plVar4);
      uVar3 = (**(code **)(*plVar4 + 0x48))(plVar4);
      FUN_00423010(local_88,0,0,uVar2,uVar3);
      FUN_00d77b90(param_1,local_88);
      uVar5 = FUN_00609e10(plVar4);
      (**(code **)(*param_1 + 0xa8))(param_1,uVar5,&DAT_01ecf394);
      *(undefined1 *)(plVar4 + 0xf) = 1;
      uVar2 = (**(code **)(*plVar4 + 0x60))(plVar4);
      uVar3 = (**(code **)(*plVar4 + 0x48))(plVar4);
      FUN_00423010(local_88,0,0,uVar2,uVar3);
      FUN_00d589a0(plVar4,param_2,local_38,local_88);
      FUN_00d77b90(param_1,local_38);
      FUN_00410f20(plVar4);
    }
    else {
      (**(code **)(*param_1 + 0xa8))(param_1,param_2,param_3);
    }
  }
  return;
}

