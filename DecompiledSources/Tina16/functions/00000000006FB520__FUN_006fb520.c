/* Ghidra address: 006fb520 */
/* Ghidra symbol: FUN_006fb520 */


void FUN_006fb520(longlong param_1,int param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  int local_res10;
  int local_res18;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_30 = auStack_58;
  FUN_006fd900(param_1);
  FUN_0065b830(param_1);
  FUN_0064fca0(param_1,0x41e,0x20,0);
  FUN_0064fca0(param_1,0x42f,(longlong)*(int *)(param_1 + 0x518),0);
  lVar1 = *(longlong *)(param_1 + 0x4e8);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_1 + 0x4f8);
    if (lVar1 == 0) {
      lVar1 = *(longlong *)(param_1 + 0x508);
      if (lVar1 == 0) {
        local_1c = 0;
        local_20 = 0;
      }
      else {
        local_1c = *(undefined4 *)(lVar1 + 0x94);
        local_20 = *(undefined4 *)(lVar1 + 0x90);
      }
    }
    else {
      local_1c = *(undefined4 *)(lVar1 + 0x94);
      local_20 = *(undefined4 *)(lVar1 + 0x90);
    }
  }
  else {
    local_1c = *(undefined4 *)(lVar1 + 0x94);
    local_20 = *(undefined4 *)(lVar1 + 0x90);
  }
  FUN_0064fca0(param_1,0x420,0,CONCAT22((undefined2)local_20,(undefined2)local_1c));
  local_res10 = param_2;
  if (param_2 < 1) {
    local_res10 = 1;
  }
  local_res18 = param_3;
  if (param_3 < 1) {
    local_res18 = 1;
  }
  FUN_0064fca0(param_1,0x41f,0,CONCAT22((undefined2)local_res18,(undefined2)local_res10));
  *(int *)(param_1 + 0x4a4) = local_res10;
  *(int *)(param_1 + 0x4a8) = local_res18;
  FUN_006fd910(param_1);
  iVar2 = FUN_006fd980();
  local_24 = 0;
  if (-1 < iVar2 + -1) {
    do {
      FUN_0064fca0(param_1,0x416,0,0);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_006fc6f0(param_1);
  FUN_006fcf30(param_1);
  FUN_006fb9c0(param_1,param_1 + 0x4a4,param_1 + 0x4a8);
  return;
}

