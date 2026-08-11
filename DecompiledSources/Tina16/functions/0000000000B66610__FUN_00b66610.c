/* Ghidra address: 00b66610 */
/* Ghidra symbol: FUN_00b66610 */


void FUN_00b66610(longlong param_1)

{
  short sVar1;
  undefined2 uVar2;
  longlong lVar3;
  
  lVar3 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x18) + 8),
                       *(undefined4 *)(param_1 + 0x48));
  sVar1 = *(short *)(lVar3 + 0x68);
  lVar3 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x18) + 8),
                       *(undefined4 *)(param_1 + 0x48));
  uVar2 = *(undefined2 *)(lVar3 + 0x6a);
  if (sVar1 != 0) {
    FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),0x12);
    FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),2);
    FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),1);
    FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),0xdd);
    FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),2);
    FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),1);
    FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),99);
    FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),2);
    FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),1);
    FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),0x13);
    FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),2);
    FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),sVar1);
    FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),0x867);
    FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),0x17);
    FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),0x867);
    FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),0);
    FUN_00b62d00(*(undefined8 *)(param_1 + 0x40),0);
    FUN_00b62d00(*(undefined8 *)(param_1 + 0x40),0);
    FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),2);
    FUN_00b62cc0(*(undefined8 *)(param_1 + 0x40),1);
    FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),0xffffffff);
    FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),0xffffffff);
    FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),uVar2);
    FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),0);
  }
  return;
}

