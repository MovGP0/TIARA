/* Ghidra address: 01aa1570 */
/* Ghidra symbol: FUN_01aa1570 */


void FUN_01aa1570(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  short sVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_38 = *param_2;
  local_30 = param_2[1];
  local_48 = *param_3;
  local_40 = param_3[1];
  sVar2 = FUN_01d03160(*(undefined8 *)(param_1 + 0x550));
  uVar1 = *(undefined1 *)(param_1 + 0x567 + (longlong)(int)local_38);
  *(undefined1 *)(param_1 + 0x567 + (longlong)(int)local_38) =
       *(undefined1 *)(param_1 + -0x1e0 + (longlong)(int)local_30 * 0x788);
  *(undefined1 *)(param_1 + -0x1e0 + (longlong)(int)local_30 * 0x788) = uVar1;
  FUN_01aa14f0(auStack_68,&local_38);
  if (sVar2 == 0x3b) {
    FUN_01aa14f0(auStack_68,&local_48);
  }
  *(undefined1 *)(param_1 + -0x1df + (longlong)(int)local_30 * 0x788) = 0;
  *(undefined1 *)(param_1 + -0x1df + (longlong)(int)local_40 * 0x788) = 0;
  return;
}

