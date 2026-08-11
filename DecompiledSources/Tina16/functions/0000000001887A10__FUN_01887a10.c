/* Ghidra address: 01887a10 */
/* Ghidra symbol: FUN_01887a10 */


int FUN_01887a10(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  iVar1 = 0;
  if (param_2 != (longlong *)0x0) {
    iVar1 = (**(code **)(*param_2 + 0x60))(param_2);
    if ((iVar1 == 0) && (iVar1 = (**(code **)(*param_2 + 0x48))(param_2), iVar1 == 0)) {
      return 0;
    }
    iVar2 = FUN_01888a70(*(undefined8 *)(param_1 + 8));
    iVar1 = iVar2 + 1;
    FUN_018873e0(param_1);
    puVar4 = (undefined4 *)FUN_01888b80(*(undefined8 *)(param_1 + 8),iVar2);
    uVar5 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x10),*puVar4);
    (**(code **)(*param_2 + 200))(param_2,uVar5);
    uVar3 = (**(code **)(*param_2 + 0x60))(param_2);
    lVar6 = FUN_01888b80(*(undefined8 *)(param_1 + 8),iVar2);
    *(undefined4 *)(lVar6 + 0xc) = uVar3;
    uVar3 = (**(code **)(*param_2 + 0x48))(param_2);
    lVar6 = FUN_01888b80(*(undefined8 *)(param_1 + 8),iVar2);
    *(undefined4 *)(lVar6 + 0x10) = uVar3;
    lVar6 = FUN_01888b80(*(undefined8 *)(param_1 + 8),iVar2);
    FUN_00427a10(lVar6 + 8,0);
  }
  return iVar1;
}

