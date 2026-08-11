/* Ghidra address: 00a45790 */
/* Ghidra symbol: FUN_00a45790 */


longlong FUN_00a45790(undefined8 param_1,longlong *param_2,char param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined1 *local_40;
  longlong local_30;
  byte local_21;
  longlong local_18;
  longlong local_10;
  
  local_40 = auStack_78;
  local_10 = 0;
  if (param_2 != (longlong *)0x0) {
    local_18 = 0;
    (**(code **)(*param_2 + 0x48))(param_2,0,0);
    local_21 = FUN_00a444c0(param_2);
    if (local_21 != 0) {
      (**(code **)(*param_2 + 0x48))(param_2,0,0);
      if (local_10 == 0) {
        uVar1 = (ulonglong)local_21;
        if (uVar1 < 6) {
          if (uVar1 == 5) {
            FUN_00a454a0(auStack_78);
          }
          else if (uVar1 == 1) {
            FUN_00a45750(auStack_78);
          }
          else if (uVar1 - 2 < 2) {
            FUN_00a45640(auStack_78);
          }
          else if (uVar1 - 2 == 2) {
            FUN_00a45410(auStack_78);
          }
        }
        else if (uVar1 == 6) {
          FUN_00a45530(auStack_78);
        }
        else if (uVar1 == 8) {
          FUN_00a45380(auStack_78);
        }
      }
      if (local_18 != 0) {
        local_30 = 0;
        lVar2 = FUN_009ec7c0(local_18);
        if ((lVar2 == 0) && (param_3 == '\x02')) {
          local_30 = FUN_00a447b0(local_18,0,0);
        }
        local_18 = FUN_00a44730(local_18);
        if (local_30 != 0) {
          FUN_009ec7d0(local_18,1);
          FUN_009ec9b0(local_18,local_30);
          FUN_00410f20(local_30);
        }
        local_58 = 1;
        local_10 = FUN_00a47d90(&PTR_FUN_00a432a0,1,local_18,param_3);
      }
    }
  }
  return local_10;
}

