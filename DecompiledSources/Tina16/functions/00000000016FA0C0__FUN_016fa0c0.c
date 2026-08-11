/* Ghidra address: 016fa0c0 */
/* Ghidra symbol: FUN_016fa0c0 */


int FUN_016fa0c0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  byte local_2c [4];
  
  iVar6 = 0;
  iVar1 = FUN_016f9fa0(param_1,param_2);
  lVar3 = (**(code **)*param_2)(param_2);
  if (4 < lVar3) {
    uVar2 = FUN_004b6da0(param_2);
    (**(code **)(*param_2 + 0x48))(param_2,-4 - iVar1,2);
    (**(code **)(*param_2 + 0x18))(param_2,local_2c,4);
    (**(code **)(*param_2 + 0x48))(param_2,uVar2,0);
    iVar5 = 4;
    pbVar4 = local_2c;
    do {
      iVar6 = iVar6 * 0x100 + (uint)*pbVar4;
      pbVar4 = pbVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    iVar6 = iVar6 + iVar1;
  }
  if (0x3400 < iVar6) {
    iVar6 = 0x3400;
  }
  return iVar6;
}

