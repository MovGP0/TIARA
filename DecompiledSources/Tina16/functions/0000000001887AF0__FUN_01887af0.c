/* Ghidra address: 01887af0 */
/* Ghidra symbol: FUN_01887af0 */


void FUN_01887af0(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  longlong local_20 [2];
  
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_20[0] = 0;
  local_28 = 0;
  if (*(char *)(param_1 + 0x28) == '\0') {
    lVar5 = FUN_00410e60(&PTR_FUN_018857e8,1);
    *(undefined4 *)(lVar5 + 0x28) = 0;
  }
  else {
    FUN_00416660(&local_28,0xff);
    FUN_004168e0(local_20,*(undefined8 *)(param_1 + 0x20));
    iVar1 = FUN_00416420(local_20[0],0);
    if (iVar1 == 0) {
      FUN_00416660(local_20,0xff);
      uVar3 = FUN_00415f70(local_20[0]);
      uVar2 = thunk_FUN_0418dd92(0xff,uVar3);
      FUN_00416660(local_20,uVar2);
    }
    else {
      FUN_00415f90(local_20,&DAT_01887cf4);
    }
    iVar1 = FUN_00416420(local_20[0],0);
    if (iVar1 != 0) {
      iVar1 = FUN_00414cc0(local_20[0]);
      if (*(short *)(local_20[0] + -2 + (longlong)iVar1 * 2) != 0x5c) {
        FUN_00415f90(local_20,&DAT_01887cfc);
      }
    }
    uVar3 = FUN_00415f70(local_20[0]);
    uVar4 = FUN_00415f70(local_28);
    thunk_FUN_041b7910(uVar3,L"frPic",0,uVar4);
    uVar3 = FUN_00415f70(local_28);
    FUN_00442b00(&local_30,uVar3);
    FUN_004168e0(local_20,local_30);
    FUN_004168b0(&local_38,local_20[0]);
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x78))(*(longlong **)(param_1 + 0x18),local_38);
    FUN_004168b0(&local_40,local_20[0]);
    lVar5 = FUN_004b9860(&PTR_FUN_01885580,1,local_40,2);
    *(undefined4 *)(lVar5 + 0x18) = 0;
  }
  FUN_004ae7e0(*(undefined8 *)(param_1 + 0x10),lVar5);
  FUN_00414560(&local_40,3);
  FUN_004145c0(&local_28,2);
  return;
}

