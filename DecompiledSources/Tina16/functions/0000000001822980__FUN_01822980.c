/* Ghidra address: 01822980 */
/* Ghidra symbol: FUN_01822980 */


bool FUN_01822980(ulonglong *param_1,undefined8 *param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  undefined *puVar4;
  undefined6 uVar5;
  bool local_39;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  ulonglong local_20;
  
  local_28 = *param_1;
  local_20 = param_1[1];
  local_38 = *param_2;
  local_30 = param_2[1];
  FUN_004179d0(&local_28,&DAT_0183db48);
  puVar4 = &DAT_0183db48;
  FUN_004179d0(&local_38,&DAT_0183db48);
  local_39 = false;
  uVar3 = local_28 & 0xff;
  uVar5 = (undefined6)((ulonglong)puVar4 >> 0x10);
  if (uVar3 < 6) {
    if (uVar3 == 5) {
      if (((byte)local_38 == 7) ||
         (((byte)local_38 == 5 && (cVar1 = FUN_01822920(local_20,local_30,param_3), cVar1 != '\0')))
         ) {
        local_39 = true;
      }
      else {
        local_39 = false;
      }
    }
    else if (uVar3 == 0) {
      if ((byte)local_38 < 0x10) {
        local_39 = ((int)CONCAT62(uVar5,1) << ((byte)local_38 & 0x1f) & 0x585U) != 0;
      }
      else {
        local_39 = false;
      }
    }
    else if (uVar3 == 1) {
      local_39 = (byte)local_38 < 8 && (1 << ((byte)local_38 & 0x1f) & 0x82U) != 0;
    }
    else if (uVar3 == 2) {
      local_39 = (byte)local_38 < 8 && (1 << ((byte)local_38 & 0x1f) & 0x85U) != 0;
    }
    else if (uVar3 - 3 < 2) {
      if ((byte)local_38 < 8) {
        local_39 = ((int)CONCAT71((int7)(uVar3 - 3 >> 8),1) << ((byte)local_38 & 0x1f) & 0x98U) != 0
        ;
      }
      else {
        local_39 = false;
      }
    }
  }
  else if (uVar3 == 6) {
    local_39 = (byte)local_38 < 8 && (1 << ((byte)local_38 & 0x1f) & 0xc0U) != 0;
  }
  else if (uVar3 == 7) {
    local_39 = true;
  }
  else if (uVar3 == 8) {
    if ((byte)local_38 < 0x10) {
      local_39 = ((int)CONCAT62(uVar5,1) << ((byte)local_38 & 0x1f) & 0x581U) != 0;
    }
    else {
      local_39 = false;
    }
    if ((byte)local_38 == 8) {
      iVar2 = FUN_0043e6d0(local_20,local_30);
      local_39 = iVar2 == 0;
    }
  }
  else if (uVar3 == 10) {
    if ((byte)local_38 < 0x10) {
      local_39 = ((int)CONCAT62(uVar5,1) << ((byte)local_38 & 0x1f) & 0x585U) != 0;
    }
    else {
      local_39 = false;
    }
  }
  FUN_00417840(&local_38,&DAT_0183db48,2);
  return local_39;
}

