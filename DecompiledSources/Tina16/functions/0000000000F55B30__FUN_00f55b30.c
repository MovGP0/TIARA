/* Ghidra address: 00f55b30 */
/* Ghidra symbol: FUN_00f55b30 */


void FUN_00f55b30(undefined8 param_1,undefined8 param_2,undefined8 *param_3,short param_4,
                 undefined8 param_5,undefined8 param_6,byte *param_7)

{
  uint uVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  uint uVar4;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_38 = *param_3;
  uStack_30 = param_3[1];
  uVar1 = 1;
  uVar4 = (uint)*param_7;
  local_3c = 1;
  if (uVar4 != 0) {
    puVar2 = &local_38;
    pbVar3 = param_7 + 8;
    do {
      FUN_00f55420(param_1,param_2,*(undefined1 *)puVar2,
                   *(undefined1 *)
                    ((longlong)&local_3c + (longlong)(int)((uint)*param_7 + local_3c) + 3),
                   (char)(((int)param_4 & uVar1) >> ((char)local_3c - 1U & 0x1f)),param_5,param_6,
                   pbVar3);
      uVar1 = uVar1 * 2;
      local_3c = local_3c + 1;
      pbVar3 = pbVar3 + 0x10;
      puVar2 = (undefined8 *)((longlong)puVar2 + 1);
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return;
}

