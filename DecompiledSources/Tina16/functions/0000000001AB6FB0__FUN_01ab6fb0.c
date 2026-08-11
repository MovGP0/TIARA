/* Ghidra address: 01ab6fb0 */
/* Ghidra symbol: FUN_01ab6fb0 */


void FUN_01ab6fb0(longlong param_1,char param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  FUN_01d2b010(param_1,param_2);
  if ((*(longlong *)(param_1 + 0x60) != 0) && (*(longlong *)(param_1 + 0x70) != 0)) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x60) + 0xd8);
    uVar2 = (**(code **)(*plVar1 + 0xc0))(plVar1,*(undefined8 *)(param_1 + 0x70));
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x70) + 0x80);
    uVar3 = (**(code **)(*plVar1 + 0xc0))(plVar1,param_1);
    if (param_2 == '\0') {
      FUN_01aee9c0(&local_28,0x42f,uVar2,uVar3);
      FUN_01aed550(*(undefined8 *)PTR_DAT_020041a8,local_28);
    }
    else {
      FUN_01aee9c0(local_20,0x425,uVar2,uVar3);
      FUN_01aed550(*(undefined8 *)PTR_DAT_020041a8,local_20[0]);
    }
  }
  FUN_00414560(&local_28,2);
  return;
}

