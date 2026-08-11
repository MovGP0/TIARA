/* Ghidra address: 01cc70b0 */
/* Ghidra symbol: FUN_01cc70b0 */


uint FUN_01cc70b0(longlong param_1,undefined8 param_2,int param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  double dVar7;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined8 local_30;
  
  uVar5 = *(uint *)(param_1 + 0x20);
  local_40 = param_1;
  do {
    uVar6 = (uint)(param_3 + param_4) >> 1;
    if (*(char *)(*(longlong *)(*(longlong *)(local_40 + 8) + 8) + 0x4474) == '\0') {
      (**(code **)(**(longlong **)(local_40 + 0x18) + 0x48))
                (*(longlong **)(local_40 + 0x18),(uVar6 - uVar5) * param_5,1);
      (**(code **)(**(longlong **)(local_40 + 0x18) + 0x18))
                (*(longlong **)(local_40 + 0x18),&local_30,8);
      (**(code **)(**(longlong **)(local_40 + 0x18) + 0x48))
                (*(longlong **)(local_40 + 0x18),0xfffffff8,1);
    }
    else {
      local_30 = *(undefined8 *)(**(longlong **)(local_40 + 0x70) + (longlong)(int)uVar6 * 8);
    }
    if (*(char *)(*(longlong *)(local_40 + 8) + 0x55) == '\0') {
      dVar7 = (double)FUN_01cc7090(auStack_68);
      if (dVar7 < 0.0) {
        param_4 = uVar6 - 1;
      }
      else {
        param_3 = uVar6 + 1;
      }
    }
    else {
      dVar7 = (double)FUN_01cc7090(auStack_68);
      if (0.0 <= dVar7) {
        param_4 = uVar6 - 1;
      }
      else {
        param_3 = uVar6 + 1;
      }
    }
    uVar5 = uVar6;
  } while (param_3 <= param_4);
  uVar1 = FUN_00b905e0(param_4,0);
  uVar2 = FUN_00b905e0(param_3,0);
  iVar3 = FUN_00b905f0(uVar1,*(int *)(local_40 + 0x28) + -2);
  iVar4 = FUN_00b905f0(uVar2,*(int *)(local_40 + 0x28) + -1);
  uVar5 = (uint)(iVar4 + iVar3) >> 1;
  if (*(char *)(*(longlong *)(*(longlong *)(local_40 + 8) + 8) + 0x4474) == '\0') {
    (**(code **)(**(longlong **)(local_40 + 0x18) + 0x48))
              (*(longlong **)(local_40 + 0x18),(uVar5 - uVar6) * param_5,1);
  }
  return uVar5;
}

