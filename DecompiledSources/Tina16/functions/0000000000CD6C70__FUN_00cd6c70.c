/* Ghidra address: 00cd6c70 */
/* Ghidra symbol: FUN_00cd6c70 */


undefined8 * FUN_00cd6c70(longlong param_1,undefined8 *param_2,undefined1 *param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  undefined1 *local_60;
  int local_54;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined8 local_30;
  
  local_30 = 0;
  local_48 = 0;
  FUN_004144d0(param_2);
  if (param_3 != (undefined1 *)0x0) {
    local_54 = param_4;
    if (param_4 < 0) {
      local_54 = FUN_00414ce0(param_3);
    }
    if (local_54 != 0) {
      FUN_00415d10(param_2,local_54,0);
      lVar3 = FUN_00415ab0(*param_2);
      uVar4 = (**(code **)(param_1 + 0x28))(param_1);
      local_60 = param_3;
      do {
        iVar1 = FUN_00cd63a0(*local_60,uVar4,0x40);
        if ((iVar1 < 0) || (0x2d < iVar1)) {
          FUN_0041ddd0(&local_30,PTR_PTR_02004600);
          (**(code **)(param_1 + 0x10))(param_1,&local_48);
          local_40 = local_48;
          local_38 = 0xb;
          uVar5 = FUN_0044d530(&PTR_FUN_00cd3e20,1,local_30,&local_40,0);
          FUN_004134c0(uVar5);
          lVar3 = param_1;
        }
        local_60 = local_60 + 1;
        for (; 0 < iVar1; iVar1 = iVar1 + -3) {
          uVar8 = 0;
          iVar7 = 4;
          for (; (0 < iVar7 && (local_60 <= param_3 + local_54)); local_60 = local_60 + 1) {
            uVar2 = FUN_00cd63a0(*local_60,uVar4,0x40);
            if (-1 < (int)uVar2) {
              uVar8 = (ulonglong)((int)uVar8 << 6 | uVar2 & 0xff);
              iVar7 = iVar7 + -1;
            }
          }
          iVar7 = 2;
          do {
            *(char *)(lVar3 + iVar7) = (char)uVar8;
            uVar8 = uVar8 >> 8;
            iVar7 = iVar7 + -1;
          } while (-1 < iVar7);
          if (iVar1 < 4) {
            lVar3 = lVar3 + iVar1;
          }
          else {
            lVar3 = lVar3 + 3;
          }
        }
      } while (local_60 < param_3 + local_54);
      lVar6 = FUN_00415ab0(*param_2);
      FUN_00415d10(param_2,lVar3 - lVar6,0);
    }
  }
  FUN_004144d0(&local_48);
  FUN_00414480(&local_30);
  return param_2;
}

