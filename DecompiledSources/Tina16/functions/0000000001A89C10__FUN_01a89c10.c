/* Ghidra address: 01a89c10 */
/* Ghidra symbol: FUN_01a89c10 */


void FUN_01a89c10(longlong param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  double dVar7;
  
  if (*(longlong *)(param_1 + 0x798) == 0) goto LAB_01a89d53;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x798) + 0xd8);
  iVar3 = (**(code **)(*plVar1 + 0x28))(plVar1);
  if (iVar3 < 1) goto LAB_01a89d53;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x798) + 0xd8);
  uVar4 = (**(code **)(*plVar1 + 0x30))(plVar1,0);
  lVar5 = FUN_004113f0(uVar4,&DAT_01cdd500);
  if (*(char *)(lVar5 + 0x58) == '\x01') {
LAB_01a89c89:
    *(int *)(lVar5 + 0x94) = *param_4;
    FUN_01ce4cd0(lVar5,*(undefined8 *)(param_1 + 0x780),param_1);
    FUN_01ce0100(lVar5,*(undefined8 *)(param_1 + 0x780),1);
  }
  else {
    if (*(char *)(lVar5 + 0x58) == '\0') {
      cVar2 = FUN_01ce33d0(lVar5);
      if (cVar2 == '\x01') goto LAB_01a89c89;
    }
    (**(code **)(**(longlong **)(lVar5 + 0x78) + 0x30))(*(longlong **)(lVar5 + 0x78),0);
    uVar4 = (**(code **)(**(longlong **)(lVar5 + 0x78) + 0x30))(*(longlong **)(lVar5 + 0x78),0);
    lVar6 = FUN_004113f0(uVar4,&DAT_01ccbf00);
    dVar7 = *(double *)(lVar6 + 0xc0) - *(double *)(lVar6 + 0xb8);
    *(double *)(lVar6 + 0xc0) = *(double *)(lVar6 + 0xd0) - ((double)*param_4 * dVar7) / 10.0;
    *(double *)(lVar6 + 0xb8) = *(double *)(lVar6 + 0xc0) - dVar7;
    FUN_01ce4cd0(lVar5,*(undefined8 *)(param_1 + 0x780),param_1);
    FUN_01ce0100(lVar5,*(undefined8 *)(param_1 + 0x780),1);
  }
LAB_01a89d53:
  FUN_01aceb90(*(undefined8 *)(param_1 + 0x798),0);
  return;
}

