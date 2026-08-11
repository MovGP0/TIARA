/* Ghidra address: 00ec3110 */
/* Ghidra symbol: FUN_00ec3110 */


void FUN_00ec3110(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  undefined8 local_30;
  undefined8 local_28 [3];
  
  local_40 = auStack_98;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_28[0] = 0;
  local_30 = 0;
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x6c0) + 0x260))(*(longlong **)(param_1 + 0x6c0));
  if (iVar2 != -1) {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x6c8) + 0x260))(*(longlong **)(param_1 + 0x6c8))
    ;
    if (iVar2 != -1) {
      plVar1 = *(longlong **)(param_1 + 0x6c8);
      uVar3 = (**(code **)(*plVar1 + 0x260))(plVar1);
      (**(code **)(*(longlong *)plVar1[0x94] + 0x18))((longlong *)plVar1[0x94],&local_50,uVar3);
      iVar2 = FUN_00416db0(local_50,L"NOPCB");
      if (iVar2 != 0) {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x7a8) + 0x4a0);
        iVar2 = (**(code **)(*plVar1 + 0x28))(plVar1);
        if (iVar2 == 0) {
          *(undefined4 *)(param_1 + 0x508) = 0;
          uVar4 = FUN_00b89270();
          FUN_00b8e520(uVar4,&local_58,0x844);
          FUN_0072d440(local_58,1,4,0);
          goto code_r0x00ec3410;
        }
      }
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6c8) + 0x4a0);
      iVar2 = (**(code **)(*plVar1 + 0x28))(plVar1);
      if (iVar2 < 2) {
        iVar2 = FUN_00416db0(*(undefined8 *)(param_1 + 0x898),L"TINA");
        if (iVar2 != 0) goto LAB_00ec32dd;
      }
      else {
LAB_00ec32dd:
        FUN_0043e130(&local_60,*(undefined8 *)(param_1 + 0x870));
        local_78 = 0;
        (**(code **)(**(longlong **)(param_1 + 0x850) + 0x10))
                  (*(longlong **)(param_1 + 0x850),local_28,L"DigitalICs",local_60);
        FUN_00ea99b0(&local_30,local_28);
        iVar2 = FUN_00416db0(local_30,*(undefined8 *)(param_1 + 0x860));
        if (iVar2 == 0) {
          iVar2 = FUN_00416db0(*(undefined8 *)(param_1 + 0x898),L"TINA");
          if (iVar2 == 0) goto code_r0x00ec33e6;
        }
        iVar2 = FUN_00416db0(*(undefined8 *)(param_1 + 0x898),L"TINA");
        if (iVar2 == 0) {
          FUN_00414480(local_28);
        }
        else {
          FUN_00ea9ca0(&local_68,*(undefined8 *)(param_1 + 0x898));
          FUN_00416ba0(local_28,local_68,&LAB_00ec34e4);
        }
        FUN_00eaec40(L"DigitalICs",*(undefined8 *)(param_1 + 0x870),*(undefined8 *)(param_1 + 0x860)
                    );
      }
code_r0x00ec33e6:
      FUN_00eae940(*(undefined8 *)(*(longlong *)(param_1 + 0x818) + 0x4f0));
      FUN_00eaecd0();
      goto code_r0x00ec3410;
    }
  }
  *(undefined4 *)(param_1 + 0x508) = 0;
  uVar4 = FUN_00b89270();
  FUN_00b8e520(uVar4,&local_48,0x843);
  FUN_0072d440(local_48,1,4,0);
code_r0x00ec3410:
  FUN_00414560(&local_68,5);
  FUN_00414560(&local_30,2);
  return;
}

