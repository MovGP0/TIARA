/* Ghidra address: 004c4390 */
/* Ghidra symbol: FUN_004c4390 */


void FUN_004c4390(longlong param_1,undefined4 param_2,longlong param_3)

{
  undefined1 uVar1;
  undefined4 local_res10 [6];
  
  local_res10[0] = param_2;
  FUN_004c3730(param_1,4);
  uVar1 = FUN_00458090(local_res10,0);
  *(undefined1 *)(*(longlong *)(param_1 + 0x10) + *(longlong *)(param_1 + 0x20)) = uVar1;
  if (1 < param_3) {
    uVar1 = FUN_00458090(local_res10,1);
    *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 1 + *(longlong *)(param_1 + 0x20)) = uVar1;
    if (2 < param_3) {
      uVar1 = FUN_00458090(local_res10,2);
      *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 2 + *(longlong *)(param_1 + 0x20)) = uVar1;
      if (3 < param_3) {
        uVar1 = FUN_00458090(local_res10,3);
        *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 3 + *(longlong *)(param_1 + 0x20)) = uVar1;
        if (4 < param_3) {
          *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + 4;
          FUN_004c3f90(param_1,0,param_3 + -4);
          return;
        }
      }
    }
  }
  *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + param_3;
  return;
}

