/* Ghidra address: 017439d0 */
/* Ghidra symbol: FUN_017439d0 */


longlong FUN_017439d0(longlong param_1,char param_2,longlong *param_3)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  longlong local_res8;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  undefined1 *local_40;
  int local_1c;
  
  local_50 = auStack_78;
  local_res8 = param_1;
  puVar1 = auStack_78;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_50;
  }
  local_50 = puVar1;
  FUN_0173ce20(local_res8,0,param_3);
  *(undefined4 *)(local_res8 + 0xd0) = 1;
  uVar2 = (**(code **)(*param_3 + 0xf8))(param_3);
  uVar2 = uVar2 & 0xffff;
  if (uVar2 < 0x19a) {
    if ((uVar2 != 0x2c) && (uVar2 != 0x71)) goto LAB_01743acf;
  }
  else {
    if (uVar2 - 0x19a < 4) {
      *(undefined4 *)(local_res8 + 0xd0) = 2;
      goto LAB_01743acf;
    }
    if (uVar2 - 0x19f < 2) {
      *(undefined4 *)(local_res8 + 0xd0) = 3;
      goto LAB_01743acf;
    }
    if (1 < uVar2 - 0x460) goto LAB_01743acf;
  }
  *(undefined4 *)(local_res8 + 0xd0) = 1;
LAB_01743acf:
  iVar3 = *(int *)(local_res8 + 0xd0);
  local_1c = 1;
  if (0 < iVar3) {
    do {
      local_40 = (undefined1 *)(local_res8 + 8 + (longlong)local_1c * 0x30);
      *local_40 = 0;
      local_40[1] = 0;
      local_40[2] = 0;
      *(undefined8 *)(local_40 + 8) = 0;
      *(undefined8 *)(local_40 + 0x10) = 0;
      *(undefined4 *)(local_40 + 0x18) = 0xff;
      local_1c = local_1c + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *(undefined4 *)(local_res8 + 0xd4) = 0xffffffff;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

