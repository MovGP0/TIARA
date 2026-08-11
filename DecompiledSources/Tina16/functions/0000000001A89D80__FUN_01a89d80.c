/* Ghidra address: 01a89d80 */
/* Ghidra symbol: FUN_01a89d80 */


void FUN_01a89d80(longlong param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  
  if (*(longlong *)(param_1 + 0x798) != 0) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x798) + 0xd8);
    iVar2 = (**(code **)(*plVar1 + 0x28))(plVar1);
    if (0 < iVar2) {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x798) + 0xd8);
      uVar3 = (**(code **)(*plVar1 + 0x30))(plVar1,0);
      lVar4 = FUN_004113f0(uVar3,&DAT_01cdd500);
      uVar3 = (**(code **)(**(longlong **)(lVar4 + 0x70) + 0x30))(*(longlong **)(lVar4 + 0x70),0);
      lVar5 = FUN_004113f0(uVar3,&DAT_01ccbf00);
      dVar6 = *(double *)(lVar5 + 0xc0) - *(double *)(lVar5 + 0xb8);
      *(double *)(lVar5 + 0xb8) = *(double *)(lVar5 + 200) + ((double)*param_4 * dVar6) / 10.0;
      *(double *)(lVar5 + 0xc0) = *(double *)(lVar5 + 0xb8) + dVar6;
      FUN_01ce4cd0(lVar4,*(undefined8 *)(param_1 + 0x780),param_1);
      FUN_01ce0100(lVar4,*(undefined8 *)(param_1 + 0x780),1);
    }
  }
  return;
}

