/* Ghidra address: 0081a8c0 */
/* Ghidra symbol: FUN_0081a8c0 */


undefined8 FUN_0081a8c0(longlong *param_1,longlong param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (param_2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_0060cbe0(&PTR_FUN_005fa0c8,1);
    bVar1 = false;
    lVar5 = FUN_0060ce20(*(undefined8 *)(param_2 + 0x4f0));
    if (lVar5 == 0) {
      lVar5 = FUN_0060ce20(*(undefined8 *)(DAT_02012668 + 0x140));
      if (lVar5 == 0) {
        uVar6 = thunk_FUN_03ccce41(0,0x7f00);
        bVar1 = true;
      }
      else {
        uVar6 = FUN_0060ce20(*(undefined8 *)(DAT_02012668 + 0x140));
      }
    }
    else {
      uVar6 = FUN_0060ce20(*(undefined8 *)(param_1[2] + 0x4f0));
      bVar1 = false;
    }
    iVar2 = (**(code **)(*param_1 + 0x48))(param_1,0x31);
    if (iVar2 == 0) {
      iVar2 = (**(code **)(*param_1 + 0x48))(param_1,0x1e);
    }
    iVar3 = (**(code **)(*param_1 + 0x48))(param_1,0x32);
    if (iVar3 == 0) {
      iVar3 = (**(code **)(*param_1 + 0x48))(param_1,0x1f);
    }
    uVar7 = thunk_FUN_04148cfb(uVar6,1,iVar2,iVar3,0x4000);
    FUN_0060d3b0(uVar4,uVar7);
    if (bVar1) {
      thunk_FUN_041dba40(uVar6);
    }
  }
  return uVar4;
}

