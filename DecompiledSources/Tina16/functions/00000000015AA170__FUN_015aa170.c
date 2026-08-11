/* Ghidra address: 015aa170 */
/* Ghidra symbol: FUN_015aa170 */


undefined8 * FUN_015aa170(longlong param_1,undefined8 *param_2,char *param_3,int param_4)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  int local_res20;
  char local_23;
  byte local_20;
  byte *local_10;
  
  FUN_004144d0(param_2);
  if (param_3 != (char *)0x0) {
    local_res20 = param_4;
    if (param_4 < 0) {
      local_res20 = FUN_00414ce0(param_3);
    }
    if (local_res20 != 0) {
      FUN_00415d10(param_2,local_res20 / 2 + 1,0);
      uVar4 = (**(code **)(param_1 + 0x28))(param_1);
      local_10 = (byte *)*param_2;
      bVar2 = 0;
      bVar1 = false;
      for (; 0 < local_res20; local_res20 = local_res20 + -1) {
        local_23 = *param_3;
        if ((byte)(local_23 + 0xa0U) < 0x20 && (1 << (local_23 + 0xa0U & 0x1f) & 0x7fffffeU) != 0) {
          local_23 = local_23 + -0x20;
        }
        iVar3 = FUN_015aa100(local_23,uVar4,0x12);
        param_3 = param_3 + 1;
        if (-1 < iVar3) {
          if (iVar3 < 0x11) {
            local_20 = (byte)iVar3;
            if ((bool)(bVar2 & 1)) {
              *local_10 = *local_10 | local_20;
              local_10 = local_10 + 1;
            }
            else {
              *local_10 = local_20 << 4;
            }
            bVar2 = bVar2 + 1;
          }
          else if (!bVar1) {
            bVar1 = true;
            bVar2 = 0;
            local_10 = (byte *)*param_2;
          }
        }
      }
      lVar5 = FUN_00415ab0(*param_2);
      FUN_00415d10(param_2,(longlong)local_10 - lVar5,0);
    }
  }
  return param_2;
}

