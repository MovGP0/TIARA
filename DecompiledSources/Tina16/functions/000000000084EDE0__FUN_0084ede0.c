/* Ghidra address: 0084ede0 */
/* Ghidra symbol: FUN_0084ede0 */


void FUN_0084ede0(longlong param_1,char param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  code *pcVar7;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  local_70 = 0;
  local_68 = 0;
  local_58 = 0;
  local_60 = 0;
  local_50[0] = 0;
  local_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  if ((*(char *)(param_1 + 0x538) != '\0') &&
     (*(longlong *)(param_1 + 0x528) == *(longlong *)(param_1 + 0x520))) {
    lVar4 = thunk_FUN_041d93e9();
    if (lVar4 != 0) {
      uVar5 = thunk_FUN_041d93e9();
      thunk_FUN_041b2403(uVar5,0x1f,0,0);
    }
    plVar6 = (longlong *)FUN_0084f210(param_1);
    iVar2 = (**(code **)(*plVar6 + 0x260))(plVar6);
    if (iVar2 != -1) {
      lVar4 = FUN_0084f210(param_1);
      plVar6 = (longlong *)FUN_0084f210(param_1);
      uVar3 = (**(code **)(*plVar6 + 0x260))(plVar6);
      (**(code **)(**(longlong **)(lVar4 + 0x4a0) + 0x18))
                (*(longlong **)(lVar4 + 0x4a0),local_50,uVar3);
      FUN_00468a10(&local_40,local_50[0]);
    }
    uVar5 = FUN_0065b870(*(undefined8 *)(param_1 + 0x528));
    thunk_FUN_041cc6e2(uVar5,0,0,0,0,0,0x97);
    *(undefined1 *)(param_1 + 0x538) = 0;
    FUN_0083e5c0();
    if (param_2 != '\0') {
      cVar1 = FUN_0046c3b0(&local_40);
      if (cVar1 != '\0') {
        cVar1 = FUN_0046c3d0(&local_40);
        if (cVar1 == '\0') goto code_r0x0084eff8;
      }
      FUN_0046c3f0(&local_58,&local_40);
      FUN_00835150(param_1,&local_60);
      iVar2 = FUN_00416db0(local_58,local_60);
      if (iVar2 != 0) {
        FUN_00467e90(&local_68,&local_40);
        FUN_0064fca0(param_1,0xc,0,local_68);
        FUN_006806a0(param_1,1);
        lVar4 = *(longlong *)(param_1 + 0x508);
        FUN_0046c3f0(&local_70,&local_40);
        pcVar7 = (code *)FUN_00411550(lVar4,0xffa6);
        (*pcVar7)(lVar4,*(undefined4 *)(lVar4 + 0x4a8),*(undefined4 *)(lVar4 + 0x4ac),local_70);
      }
    }
  }
code_r0x0084eff8:
  FUN_00414560(&local_70,2);
  FUN_00414480(&local_60);
  FUN_00414560(&local_58,2);
  FUN_00460ba0(&local_40);
  return;
}

