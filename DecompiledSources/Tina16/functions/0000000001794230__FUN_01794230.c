/* Ghidra address: 01794230 */
/* Ghidra symbol: FUN_01794230 */


void FUN_01794230(longlong param_1)

{
  undefined2 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined8 local_30 [2];
  undefined8 local_20;
  
  local_30[0] = 0;
  local_58 = 0;
  local_60 = 0;
  local_20 = 0;
  FUN_00410f20(*(undefined8 *)(param_1 + 0xd50));
  iVar4 = *(int *)(*(longlong *)(param_1 + 0xd10) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),iVar3);
      FUN_00410f20(uVar2);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 0xd10));
  FUN_00410f20(*(undefined8 *)(param_1 + 0xd28));
  FUN_01794150(param_1,*(undefined8 *)(param_1 + 0xd18));
  FUN_00410f20(*(undefined8 *)(param_1 + 0xd18));
  FUN_00410f20(*(undefined8 *)(param_1 + 0xd08));
  if (*(longlong *)(param_1 + 0xd20) != 0) {
    FUN_01794bc0(param_1);
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 0xcb8));
  FUN_00410f20(*(undefined8 *)(param_1 + 0xce0));
  FUN_00410f20(*(undefined8 *)(param_1 + 0xce8));
  FUN_00410f20(*(undefined8 *)(param_1 + 0xd48));
  FUN_00410f20(*(undefined8 *)(param_1 + 0xd00));
  if (*(longlong *)(param_1 + 0xcf0) != 0) {
    FUN_00441920(&local_60,*(undefined8 *)(param_1 + 0xc98));
    FUN_004414c0(&local_58,local_60,0);
    local_50 = local_58;
    local_48 = 0x11;
    local_40 = *(undefined8 *)(*(longlong *)(param_1 + 0xca8) + 0x10);
    local_38 = 0x11;
    FUN_00442f70(local_30,L"Library%s:Shape%s",&local_50,1);
    FUN_00416ba0(&local_20,local_30[0],&LAB_017944c0);
    uVar2 = FUN_00414de0(&local_20);
    uVar1 = thunk_FUN_041e8323(uVar2);
    thunk_FUN_0413e052(*(undefined8 *)(param_1 + 0xcf0),0x496,uVar1,0x108f1);
  }
  FUN_00414560(&local_60,2);
  FUN_00414480(local_30);
  FUN_00414480(&local_20);
  return;
}

