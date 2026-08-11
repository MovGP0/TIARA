/* Ghidra address: 009e80c0 */
/* Ghidra symbol: FUN_009e80c0 */


longlong * FUN_009e80c0(longlong *param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong local_50;
  longlong local_48;
  longlong local_40 [2];
  
  local_50 = 0;
  local_40[0] = 0;
  local_48 = 0;
  iVar1 = (**(code **)(*param_1 + 0x28))(param_1);
  iVar5 = 0;
  FUN_009e94f0(param_1,&local_48);
  iVar4 = 0;
  iVar6 = iVar1;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(*param_1 + 0x18))(param_1,&local_50,iVar4);
      uVar3 = 0;
      if (local_50 != 0) {
        uVar3 = *(uint *)(local_50 + -4) >> 1;
      }
      uVar2 = 0;
      if (local_48 != 0) {
        uVar2 = *(uint *)(local_48 + -4) >> 1;
      }
      iVar5 = iVar5 + uVar3 + uVar2;
      iVar4 = iVar4 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  FUN_004147a0(param_2,0,iVar5);
  lVar7 = *param_2;
  iVar6 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(*param_1 + 0x18))(param_1,local_40,iVar6);
      uVar3 = 0;
      if (local_40[0] != 0) {
        uVar3 = *(uint *)(local_40[0] + -4) >> 1;
      }
      if (uVar3 != 0) {
        FUN_00409a70(local_40[0],lVar7,(longlong)(int)(uVar3 * 2));
        lVar7 = lVar7 + (longlong)(int)uVar3 * 2;
      }
      uVar3 = 0;
      if (local_48 != 0) {
        uVar3 = *(uint *)(local_48 + -4) >> 1;
      }
      if (uVar3 != 0) {
        FUN_00409a70(local_48,lVar7,(longlong)(int)(uVar3 * 2));
        lVar7 = lVar7 + (longlong)(int)uVar3 * 2;
      }
      iVar6 = iVar6 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_004145c0(&local_50,3);
  return param_2;
}

