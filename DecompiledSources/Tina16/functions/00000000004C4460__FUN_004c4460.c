/* Ghidra address: 004c4460 */
/* Ghidra symbol: FUN_004c4460 */


void FUN_004c4460(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined1 uVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_004c3730(param_1,8);
  uVar1 = FUN_00458210(local_res10,0);
  *(undefined1 *)(*(longlong *)(param_1 + 0x10) + *(longlong *)(param_1 + 0x20)) = uVar1;
  if (1 < param_3) {
    uVar1 = FUN_00458210(local_res10,1);
    *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 1 + *(longlong *)(param_1 + 0x20)) = uVar1;
    if (2 < param_3) {
      uVar1 = FUN_00458210(local_res10,2);
      *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 2 + *(longlong *)(param_1 + 0x20)) = uVar1;
      if (3 < param_3) {
        uVar1 = FUN_00458210(local_res10,3);
        *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 3 + *(longlong *)(param_1 + 0x20)) = uVar1;
        if (4 < param_3) {
          uVar1 = FUN_00458210(local_res10,4);
          *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 4 + *(longlong *)(param_1 + 0x20)) = uVar1
          ;
          if (5 < param_3) {
            uVar1 = FUN_00458210(local_res10,5);
            *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 5 + *(longlong *)(param_1 + 0x20)) =
                 uVar1;
            if (6 < param_3) {
              uVar1 = FUN_00458210(local_res10,6);
              *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 6 + *(longlong *)(param_1 + 0x20)) =
                   uVar1;
              if (7 < param_3) {
                uVar1 = FUN_00458210(local_res10,7);
                *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 7 + *(longlong *)(param_1 + 0x20)) =
                     uVar1;
                if (8 < param_3) {
                  *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + 8;
                  FUN_004c3f90(param_1,0,param_3 + -8);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + param_3;
  return;
}

