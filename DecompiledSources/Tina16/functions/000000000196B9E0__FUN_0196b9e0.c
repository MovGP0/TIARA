/* Ghidra address: 0196b9e0 */
/* Ghidra symbol: FUN_0196b9e0 */


void FUN_0196b9e0(longlong param_1,char param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0x1b1) != param_2) {
    uVar1 = *(undefined8 *)(param_1 + 0x238);
    *(undefined8 *)(param_1 + 0x238) = *(undefined8 *)(param_1 + 0x228);
    *(undefined8 *)(param_1 + 0x228) = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x1a8);
    uVar2 = *(undefined8 *)(param_1 + 0x1c8);
    if (param_2 == '\x01') {
      *(undefined8 *)(param_1 + 0x1a8) = *(undefined8 *)(param_1 + 0x1e0);
      *(undefined8 *)(param_1 + 0x1c8) = *(undefined8 *)(param_1 + 0x178);
      *(undefined8 *)(param_1 + 0x1e0) = uVar2;
      *(undefined8 *)(param_1 + 0x178) = uVar1;
    }
    else {
      *(undefined8 *)(param_1 + 0x1a8) = *(undefined8 *)(param_1 + 0x178);
      *(undefined8 *)(param_1 + 0x1c8) = *(undefined8 *)(param_1 + 0x1e0);
      *(undefined8 *)(param_1 + 0x1e0) = uVar1;
      *(undefined8 *)(param_1 + 0x178) = uVar2;
    }
    FUN_0196baa0(param_1);
  }
  *(char *)(param_1 + 0x1b1) = param_2;
  return;
}

