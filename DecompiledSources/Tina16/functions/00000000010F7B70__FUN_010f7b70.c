/* Ghidra address: 010f7b70 */
/* Ghidra symbol: FUN_010f7b70 */


void FUN_010f7b70(longlong param_1,undefined8 param_2,char param_3)

{
  undefined8 uVar1;
  undefined4 local_38 [2];
  undefined8 local_30;
  undefined8 local_28;
  
  if (param_3 == '\0') {
    *(undefined1 *)(param_1 + 0x9c2) = 0;
    *(undefined4 *)(param_1 + 0x9bc) = 1;
    *(undefined1 *)(param_1 + 0x9b8) = 4;
    uVar1 = FUN_0065b870(*(undefined8 *)(param_1 + 0x7f0));
    FUN_00f832e0(uVar1,0x531,0,0,300);
    local_30 = 0;
    local_28 = 0;
    local_38[0] = 0x531;
    FUN_010f77a0(param_1,local_38);
  }
  return;
}

