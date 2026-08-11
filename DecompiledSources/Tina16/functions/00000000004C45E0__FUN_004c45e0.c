/* Ghidra address: 004c45e0 */
/* Ghidra symbol: FUN_004c45e0 */


void FUN_004c45e0(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined1 uVar1;
  
  FUN_004c3730(param_1,10);
  uVar1 = FUN_0040a400(param_2,0);
  *(undefined1 *)(*(longlong *)(param_1 + 0x10) + *(longlong *)(param_1 + 0x20)) = uVar1;
  if (1 < param_3) {
    uVar1 = FUN_0040a400(param_2,1);
    *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 1 + *(longlong *)(param_1 + 0x20)) = uVar1;
    if (2 < param_3) {
      uVar1 = FUN_0040a400(param_2,2);
      *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 2 + *(longlong *)(param_1 + 0x20)) = uVar1;
      if (3 < param_3) {
        uVar1 = FUN_0040a400(param_2,3);
        *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 3 + *(longlong *)(param_1 + 0x20)) = uVar1;
        if (4 < param_3) {
          uVar1 = FUN_0040a400(param_2,4);
          *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 4 + *(longlong *)(param_1 + 0x20)) = uVar1
          ;
          if (5 < param_3) {
            uVar1 = FUN_0040a400(param_2,5);
            *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 5 + *(longlong *)(param_1 + 0x20)) =
                 uVar1;
            if (6 < param_3) {
              uVar1 = FUN_0040a400(param_2,6);
              *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 6 + *(longlong *)(param_1 + 0x20)) =
                   uVar1;
              if (7 < param_3) {
                uVar1 = FUN_0040a400(param_2,7);
                *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 7 + *(longlong *)(param_1 + 0x20)) =
                     uVar1;
                if (8 < param_3) {
                  uVar1 = FUN_0040a400(param_2,8);
                  *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 8 + *(longlong *)(param_1 + 0x20))
                       = uVar1;
                  if (9 < param_3) {
                    uVar1 = FUN_0040a400(param_2,9);
                    *(undefined1 *)
                     (*(longlong *)(param_1 + 0x10) + 9 + *(longlong *)(param_1 + 0x20)) = uVar1;
                    if (10 < param_3) {
                      *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + 10;
                      FUN_004c3f90(param_1,0,param_3 + -10);
                      return;
                    }
                  }
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

