/* Ghidra address: 00ece8b0 */
/* Ghidra symbol: FUN_00ece8b0 */


void FUN_00ece8b0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_40 = auStack_a8;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_20[0] = 0;
  local_28 = 0;
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x748) + 0x260))(*(longlong **)(param_1 + 0x748));
  if (iVar2 != -1) {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x750) + 0x260))(*(longlong **)(param_1 + 0x750))
    ;
    if (iVar2 != -1) {
      plVar1 = *(longlong **)(param_1 + 0x750);
      uVar3 = (**(code **)(*plVar1 + 0x260))(plVar1);
      (**(code **)(*(longlong *)plVar1[0x94] + 0x18))((longlong *)plVar1[0x94],&local_50,uVar3);
      iVar2 = FUN_00416db0(local_50,L"NOPCB");
      if ((iVar2 != 0) && (0 < *(int *)(param_1 + 0x90c))) {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x710) + 0x4a0);
        iVar2 = (**(code **)(*plVar1 + 0x28))(plVar1);
        if (iVar2 == 0) {
          *(undefined4 *)(param_1 + 0x508) = 0;
          uVar4 = FUN_00b89270();
          FUN_00b8e520(uVar4,&local_58,0x844);
          FUN_0072d440(local_58,1,4,0);
          goto code_r0x00ecec06;
        }
      }
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x750) + 0x4a0);
      iVar2 = (**(code **)(*plVar1 + 0x28))(plVar1);
      if (iVar2 < 2) {
        iVar2 = FUN_00416db0(*(undefined8 *)(param_1 + 0x8e0),L"TINA");
        if (iVar2 != 0) goto LAB_00ecea9b;
      }
      else {
LAB_00ecea9b:
        FUN_0043e130(&local_60,*(undefined8 *)(param_1 + 0x8b8));
        local_88 = 0;
        (**(code **)(**(longlong **)(param_1 + 0x888) + 0x10))
                  (*(longlong **)(param_1 + 0x888),local_20,*(undefined8 *)(param_1 + 0x8d0),
                   local_60);
        FUN_00ea99b0(&local_28,local_20);
        iVar2 = FUN_00416db0(local_28,*(undefined8 *)(param_1 + 0x8a8));
        if (iVar2 == 0) {
          iVar2 = FUN_00416db0(*(undefined8 *)(param_1 + 0x8e0),L"TINA");
          if (iVar2 == 0) goto code_r0x00ecebdc;
        }
        iVar2 = FUN_00416db0(*(undefined8 *)(param_1 + 0x8e0),L"TINA");
        if (iVar2 == 0) {
          FUN_00414480(local_20);
        }
        else {
          FUN_00ea9ca0(&local_68,*(undefined8 *)(param_1 + 0x8e0));
          FUN_00416ba0(local_20,local_68,&LAB_00ececb4);
        }
        FUN_00416ba0(&local_70,local_20[0],*(undefined8 *)(param_1 + 0x8a8));
        FUN_00eaec40(*(undefined8 *)(param_1 + 0x8d0),*(undefined8 *)(param_1 + 0x8b8),local_70);
      }
code_r0x00ecebdc:
      FUN_00eae940(*(undefined8 *)(*(longlong *)(param_1 + 0x858) + 0x4f0));
      FUN_00eaecd0();
      goto code_r0x00ecec06;
    }
  }
  *(undefined4 *)(param_1 + 0x508) = 0;
  uVar4 = FUN_00b89270();
  FUN_00b8e520(uVar4,&local_48,0x843);
  FUN_0072d440(local_48,1,4,0);
code_r0x00ecec06:
  FUN_00414560(&local_70,6);
  FUN_00414560(&local_28,2);
  return;
}

