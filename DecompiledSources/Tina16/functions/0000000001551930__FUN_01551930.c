/* Ghidra address: 01551930 */
/* Ghidra symbol: FUN_01551930 */


void FUN_01551930(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 local_res18 [2];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_28 = 0;
  local_20 = 0;
  local_10 = 0;
  local_18 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  (**(code **)(**(longlong **)(param_1 + 0x140) + 0x2d0))
            (*(longlong **)(param_1 + 0x140),0,param_1 + 0x148);
  *(uint *)(param_1 + 0x13c) = (uint)**(byte **)(param_1 + 0x148);
  FUN_01d43440(&local_10,param_2);
  FUN_017ff4a0(*(undefined8 *)(param_1 + 0x140),&local_18);
  FUN_00416cd0(*(longlong *)(param_1 + 0x180) + 0x218,4,local_res18[0],local_10,&DAT_01551c0c,
               local_18);
  uVar2 = FUN_015f6440(param_2,*(undefined1 *)(param_1 + 0x13c));
  *(undefined4 *)(param_1 + 0x138) = uVar2;
  iVar3 = FUN_00416db0(local_res18[0],&DAT_01551c1c);
  if (iVar3 != 0) {
    iVar3 = FUN_00416db0(local_res18[0],&DAT_01551c30);
    if (iVar3 != 0) {
      FUN_01d43440(&local_28,*(undefined4 *)(param_1 + 0x138));
      FUN_00416cd0(*(longlong *)(param_1 + 0x180) + 0x210,6,L" signal ",
                   *(undefined8 *)(*(longlong *)(param_1 + 0x180) + 0x218),&DAT_01551c64,
                   L"integer := ",local_28,&DAT_01551c9c);
      goto LAB_01551b44;
    }
  }
  FUN_01d43440(&local_20,*(undefined4 *)(param_1 + 0x13c));
  FUN_00416cd0(*(longlong *)(param_1 + 0x180) + 0x210,6,L" signal ",
               *(undefined8 *)(*(longlong *)(param_1 + 0x180) + 0x218),&DAT_01551c64,L"integer := ",
               local_20,&DAT_01551c9c);
LAB_01551b44:
  plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x180) + 0x270) + 0x48);
  iVar3 = (**(code **)(*plVar1 + 0xb0))
                    (plVar1,*(undefined8 *)(*(longlong *)(param_1 + 0x180) + 0x210));
  if (iVar3 == -1) {
    plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x180) + 0x270) + 0x48);
    (**(code **)(*plVar1 + 0x78))(plVar1,*(undefined8 *)(*(longlong *)(param_1 + 0x180) + 0x210));
  }
  FUN_00414560(&local_28,4);
  FUN_00414480(local_res18);
  return;
}

