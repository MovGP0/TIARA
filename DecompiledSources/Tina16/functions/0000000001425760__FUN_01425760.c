/* Ghidra address: 01425760 */
/* Ghidra symbol: FUN_01425760 */


void FUN_01425760(undefined8 param_1,undefined8 param_2,char param_3,undefined8 *param_4)

{
  undefined3 uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int local_84;
  int local_80;
  int local_7c;
  undefined1 local_78 [16];
  undefined1 local_68 [24];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  longlong local_30;
  
  local_40 = *param_4;
  local_38 = param_4[1];
  local_30 = param_4[2];
  if ((param_3 == '\x01') || ((byte)(param_3 - 5U) < 2)) {
    local_7c = (int)local_40;
    local_84 = 0;
    iVar3 = (int)local_40;
    if (-1 < (int)local_40 + -1) {
      do {
        lVar2 = (longlong)(local_84 * (int)local_40 + local_84);
        uVar1 = (undefined3)((uint)local_7c >> 8);
        FUN_016ed320(param_1,CONCAT31(uVar1,(char)local_7c + '\x01'),
                     *(undefined8 *)(local_38 + lVar2 * 0x10),0,0);
        FUN_00c44460(local_78,0x3ff0000000000000,0);
        FUN_00c44ac0(local_68,local_38 + lVar2 * 0x10,local_78);
        FUN_00c44a50(&local_50,local_30 + (longlong)local_84 * 0x10,local_68);
        FUN_016ed320(param_1,CONCAT31(uVar1,(char)local_7c + '\x02'),local_50,0,0);
        local_7c = local_7c + 2;
        local_84 = local_84 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    if ((1 < (int)local_40) && (local_84 = 0, iVar3 = (int)local_40, -1 < (int)local_40 + -1)) {
      do {
        local_80 = 0;
        iVar4 = (int)local_40;
        if (-1 < (int)local_40 + -1) {
          do {
            if (local_84 != local_80) {
              lVar2 = (longlong)(local_84 * (int)local_40 + local_80);
              uVar1 = (undefined3)((uint)local_7c >> 8);
              FUN_016ed320(param_1,CONCAT31(uVar1,(char)local_7c + '\x01'),
                           *(undefined8 *)(local_38 + lVar2 * 0x10),
                           *(undefined8 *)(local_38 + 8 + lVar2 * 0x10),0);
              FUN_00c44a50(&local_50,local_30 + (longlong)local_84 * 0x10,local_38 + lVar2 * 0x10);
              FUN_016ed320(param_1,CONCAT31(uVar1,(char)local_7c + '\x02'),local_50,local_48,0);
              local_7c = local_7c + 2;
            }
            local_80 = local_80 + 1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        local_84 = local_84 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  else if ((byte)(param_3 - 7U) < 2) {
    local_7c = (int)local_40;
    local_84 = 0;
    iVar3 = (int)local_40;
    if (-1 < (int)local_40 + -1) {
      do {
        lVar2 = (longlong)(local_84 * (int)local_40 + local_84);
        uVar1 = (undefined3)((uint)local_7c >> 8);
        FUN_016ed320(param_1,CONCAT31(uVar1,(char)local_7c + '\x01'),
                     *(undefined8 *)(local_38 + lVar2 * 0x10),
                     *(undefined8 *)(local_38 + 8 + lVar2 * 0x10),0);
        FUN_00c44460(local_78,0x3ff0000000000000,0);
        FUN_00c44ac0(local_68,local_38 + lVar2 * 0x10,local_78);
        FUN_00c44a50(&local_50,local_30 + (longlong)local_84 * 0x10,local_68);
        FUN_016ed320(param_1,CONCAT31(uVar1,(char)local_7c + '\x02'),local_50,local_48,0);
        local_7c = local_7c + 2;
        local_84 = local_84 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    if ((1 < (int)local_40) && (local_84 = 0, iVar3 = (int)local_40, -1 < (int)local_40 + -1)) {
      do {
        local_80 = 0;
        iVar4 = (int)local_40;
        if (-1 < (int)local_40 + -1) {
          do {
            if (local_84 != local_80) {
              lVar2 = (longlong)(local_84 * (int)local_40 + local_80);
              uVar1 = (undefined3)((uint)local_7c >> 8);
              FUN_016ed320(param_1,CONCAT31(uVar1,(char)local_7c + '\x01'),
                           *(undefined8 *)(local_38 + lVar2 * 0x10),
                           *(undefined8 *)(local_38 + 8 + lVar2 * 0x10),0);
              FUN_00c44a50(&local_50,local_30 + (longlong)local_84 * 0x10,local_38 + lVar2 * 0x10);
              FUN_016ed320(param_1,CONCAT31(uVar1,(char)local_7c + '\x02'),local_50,local_48,0);
              local_7c = local_7c + 2;
            }
            local_80 = local_80 + 1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        local_84 = local_84 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  return;
}

