/* Ghidra address: 00ddf770 */
/* Ghidra symbol: FUN_00ddf770 */


void FUN_00ddf770(undefined8 param_1,undefined4 param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  longlong local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  int local_30;
  longlong local_18;
  undefined8 local_10;
  
  local_60 = 0;
  FUN_00dde8c0(param_1,param_2,&local_18);
  if (0xffff < local_18) {
    local_58 = local_10;
    local_50 = param_1;
    if (2 < (int)param_3[2]) {
      FUN_00419260(&local_60,&DAT_00ddf728,1,(longlong)((int)param_3[2] + -2));
    }
    iVar2 = (int)param_3[2];
    iVar1 = 1;
    if (0 < iVar2) {
      do {
        if (iVar1 == 1) {
          local_48 = *(undefined8 *)(*param_3 + 8 + (longlong)((int)param_3[2] + -1) * 0x18);
        }
        else if (iVar1 == 2) {
          local_40 = *(undefined8 *)(*param_3 + 8 + (longlong)((int)param_3[2] + -2) * 0x18);
        }
        else {
          *(undefined8 *)(local_60 + (longlong)(iVar1 + -3) * 8) =
               *(undefined8 *)(*param_3 + 8 + (longlong)((int)param_3[2] - iVar1) * 0x18);
        }
        iVar1 = iVar1 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    local_30 = 0;
    if (local_60 != 0) {
      local_30 = (int)*(undefined8 *)(local_60 + -8);
    }
    local_30 = local_30 << 3;
    local_38 = local_60;
    FUN_00ddf690(local_18,&local_58);
  }
  FUN_00419430(&local_60,&DAT_00ddf728);
  return;
}

