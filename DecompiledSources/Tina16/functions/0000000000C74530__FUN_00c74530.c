/* Ghidra address: 00c74530 */
/* Ghidra symbol: FUN_00c74530 */


void FUN_00c74530(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  if (*(longlong *)(param_1 + 0x540) != 0) {
    iVar2 = FUN_007e2ef0();
    iVar4 = 0;
    if (-1 < iVar2 + -1) {
      do {
        lVar3 = FUN_007e2f10(*(undefined8 *)(*(longlong *)(param_1 + 0x540) + 0x80),iVar4);
        puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x550) + (longlong)iVar4 * 0x10);
        *(undefined8 *)(lVar3 + 0x110) = *puVar1;
        *(undefined8 *)(lVar3 + 0x118) = puVar1[1];
        iVar4 = iVar4 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  *(longlong *)(param_1 + 0x540) = param_2;
  if (param_2 != 0) {
    iVar2 = FUN_007e2ef0(*(undefined8 *)(param_2 + 0x80));
    FUN_00419260(param_1 + 0x550,&DAT_00c70648,1,(longlong)iVar2);
    iVar2 = FUN_007e2ef0();
    iVar4 = 0;
    if (-1 < iVar2 + -1) {
      do {
        lVar3 = FUN_007e2f10(*(undefined8 *)(*(longlong *)(param_1 + 0x540) + 0x80),iVar4);
        puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x550) + (longlong)iVar4 * 0x10);
        *puVar1 = *(undefined8 *)(lVar3 + 0x110);
        puVar1[1] = *(undefined8 *)(lVar3 + 0x118);
        lVar3 = FUN_007e2f10(*(undefined8 *)(*(longlong *)(param_1 + 0x540) + 0x80),iVar4);
        *(longlong *)(lVar3 + 0x118) = param_1;
        *(code **)(lVar3 + 0x110) = FUN_00c746c0;
        iVar4 = iVar4 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return;
}

