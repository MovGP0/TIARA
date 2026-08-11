/* Ghidra address: 00b2f040 */
/* Ghidra symbol: FUN_00b2f040 */


undefined8 FUN_00b2f040(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
  short sVar3;
  ushort uVar4;
  ushort uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined2 local_2a;
  
  local_2c = 0;
  local_2b = 0;
  if (*(char *)(param_3 + 0x13) == '\0') {
    local_2c = 0x40;
  }
  if (*(char *)(param_3 + 0x11) == '\0') {
    local_2c = local_2c | 0x80;
  }
  if (*(char *)(param_3 + 0x14) == '\0') {
    local_2b = 0x40;
  }
  if (*(char *)(param_3 + 0x12) == '\0') {
    local_2b = local_2b | 0x80;
  }
  local_2a = *(short *)(param_3 + 0xb);
  sVar3 = *(short *)(param_3 + 0xd);
  uVar4 = (ushort)*(byte *)(param_3 + 0xf);
  uVar5 = (ushort)*(byte *)(param_3 + 0x10);
  uVar6 = 0x24;
  uVar7 = 0x25;
  if ((*(char *)(param_1 + 0xb) != '\0') && ((local_2c != 0 || (local_2b != 0)))) {
    if ((local_2c & 0x80) != 0) {
      local_2a = local_2a - *(short *)(param_1 + 8);
    }
    if ((local_2b & 0x80) != 0) {
      sVar3 = sVar3 - *(short *)(param_1 + 8);
    }
    if ((local_2c & 0x40) != 0) {
      uVar4 = (ushort)*(byte *)(param_3 + 0xf) - (ushort)*(byte *)(param_1 + 10);
    }
    if ((local_2b & 0x40) != 0) {
      uVar5 = (ushort)*(byte *)(param_3 + 0x10) - (ushort)*(byte *)(param_1 + 10);
    }
    uVar6 = 0x2c;
    uVar7 = 0x2d;
  }
  if ((local_2a == sVar3) && (uVar4 == uVar5)) {
    FUN_00417360(param_2,0,5);
    puVar1 = (undefined1 *)FUN_00414df0(param_2);
    *puVar1 = uVar6;
    lVar2 = FUN_00414df0(param_2);
    *(short *)(lVar2 + 1) = local_2a;
    lVar2 = FUN_00414df0(param_2);
    *(char *)(lVar2 + 3) = (char)uVar4;
    lVar2 = FUN_00414df0(param_2);
    *(byte *)(lVar2 + 4) = local_2c;
  }
  else {
    FUN_00417360(param_2,0,9);
    puVar1 = (undefined1 *)FUN_00414df0(param_2);
    *puVar1 = uVar7;
    lVar2 = FUN_00414df0(param_2);
    *(short *)(lVar2 + 1) = local_2a;
    lVar2 = FUN_00414df0(param_2);
    *(short *)(lVar2 + 3) = sVar3;
    lVar2 = FUN_00414df0(param_2);
    *(char *)(lVar2 + 5) = (char)uVar4;
    lVar2 = FUN_00414df0(param_2);
    *(char *)(lVar2 + 7) = (char)uVar5;
    lVar2 = FUN_00414df0(param_2);
    *(byte *)(lVar2 + 6) = local_2c;
    lVar2 = FUN_00414df0(param_2);
    *(byte *)(lVar2 + 8) = local_2b;
  }
  return param_2;
}

