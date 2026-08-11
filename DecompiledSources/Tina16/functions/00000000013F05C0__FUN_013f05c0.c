/* Ghidra address: 013f05c0 */
/* Ghidra symbol: FUN_013f05c0 */


void FUN_013f05c0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_150 [256];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  longlong local_30 [2];
  
  local_168 = 0;
  local_158 = 0;
  local_160 = 0;
  local_50 = 0;
  local_40[0] = 0;
  local_48 = 0;
  if (*PTR_DAT_020039a8 != '\0') {
    FUN_00b0a960(*(undefined8 *)(param_1 + 0x6f8),param_2);
    if (*(int *)(*(longlong *)(param_1 + 0x6f8) + 0x638) == 1) {
      *(undefined4 *)(param_1 + 0x508) = 1;
    }
    goto code_r0x013f0878;
  }
  cVar3 = FUN_00b0a890(*(undefined8 *)(param_1 + 0x6f8));
  *(char *)(param_1 + 0x850) = cVar3;
  if (cVar3 != '\0') goto code_r0x013f0878;
  uVar5 = FUN_01cfd6a0(*(undefined8 *)(param_1 + 0x710));
  FUN_01cfd560(*(undefined8 *)(param_1 + 0x708),uVar5,*(undefined4 *)(param_1 + 0x718),
               *(undefined4 *)(param_1 + 0x718));
  (**(code **)(**(longlong **)(param_1 + 0x708) + 0x2d0))
            (*(longlong **)(param_1 + 0x708),*(undefined4 *)(param_1 + 0x718),local_30);
  FUN_004169a0(local_40,local_30[0]);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6d0) + 0x4a0);
  (**(code **)(*plVar1 + 0x18))(plVar1,&local_48,*(undefined2 *)(param_1 + 0x722));
  iVar4 = FUN_00416db0(local_40[0],local_48);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6d0) + 0x4a0);
  (**(code **)(*plVar1 + 0x18))(plVar1,&local_50,*(undefined2 *)(param_1 + 0x722));
  FUN_00416910(local_150,local_50,0xff);
  FUN_00415020(local_30[0],local_150,0x14);
  if (iVar4 == 0) {
    FUN_004169a0(&local_158,local_30[0] + 0x15);
    (**(code **)(**(longlong **)(param_1 + 0x738) + 0x18))
              (*(longlong **)(param_1 + 0x738),&local_160,*(undefined1 *)(param_1 + 0x720));
    iVar4 = FUN_00416db0(local_158,local_160);
    if (iVar4 != 0) goto LAB_013f07dd;
    bVar2 = false;
  }
  else {
LAB_013f07dd:
    bVar2 = true;
  }
  (**(code **)(**(longlong **)(param_1 + 0x738) + 0x18))
            (*(longlong **)(param_1 + 0x738),&local_168,*(undefined1 *)(param_1 + 0x720));
  FUN_00416910(local_150,local_168,0xff);
  FUN_00415020(local_30[0] + 0x15,local_150,0x10);
  *(undefined1 *)(local_30[0] + 0x2e) = *(undefined1 *)(*(longlong *)(param_1 + 0x6f8) + 0x66a);
  if (bVar2) {
    FUN_01d07850(*(undefined8 *)(param_1 + 0x708));
    uVar5 = FUN_019a4600();
    FUN_01d08870(*(undefined8 *)(param_1 + 0x708),uVar5,*(int *)(param_1 + 0x718) + 1);
  }
code_r0x013f0878:
  FUN_00414560(&local_168,3);
  FUN_00414560(&local_50,3);
  return;
}

