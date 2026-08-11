/* Ghidra address: 01a5e3c0 */
/* Ghidra symbol: FUN_01a5e3c0 */


void FUN_01a5e3c0(longlong param_1,char param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  FUN_01d2b010(param_1,param_2);
  if (*(longlong *)(param_1 + 0x88) != 0) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x88) + 0xe0);
    uVar2 = (**(code **)(*plVar1 + 0xc0))(plVar1,param_1);
    if (param_2 == '\0') {
      FUN_01aee630(&local_18,0x433,uVar2);
      FUN_01aed550(*(undefined8 *)PTR_DAT_020041a8,local_18);
    }
    else {
      FUN_01aee630(&local_10,0x429,uVar2);
      FUN_01aed550(*(undefined8 *)PTR_DAT_020041a8,local_10);
    }
  }
  FUN_00414560(&local_18,2);
  return;
}

