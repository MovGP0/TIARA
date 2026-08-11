/* Ghidra address: 006da840 */
/* Ghidra symbol: FUN_006da840 */


void FUN_006da840(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined8 local_10;
  
  local_20 = auStack_48;
  if (*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x498) != 0) {
    FUN_00410f20(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x490));
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x268))(*(longlong **)(param_1 + 0x40));
    *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x490) = uVar1;
    local_10 = FUN_004baeb0(&PTR_FUN_0047f878,1,
                            *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x498),0x400);
    FUN_004c23c0(local_10);
    FUN_004bf530(local_10,*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x490));
    FUN_00410f20(local_10);
    FUN_00410f20(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x498));
    *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x498) = 0;
  }
  return;
}

