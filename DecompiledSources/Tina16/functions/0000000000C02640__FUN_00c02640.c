/* Ghidra address: 00c02640 */
/* Ghidra symbol: FUN_00c02640 */


void FUN_00c02640(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (*(longlong *)(param_1 + 0x4e8) != *(longlong *)(param_1 + 0x4f0)) {
    uVar2 = FUN_00c10e70(param_1);
    FUN_00c10e80(param_1,0);
    lVar1 = *(longlong *)(param_1 + 0x4e8);
    *(undefined8 *)(lVar1 + 0x98) = *(undefined8 *)(param_1 + 0x7f0);
    *(undefined8 *)(lVar1 + 0xa0) = *(undefined8 *)(param_1 + 0x7f8);
    *(undefined8 *)(lVar1 + 0xa8) = *(undefined8 *)(param_1 + 0x800);
    *(undefined8 *)(lVar1 + 0xb0) = *(undefined8 *)(param_1 + 0x808);
    *(undefined8 *)(lVar1 + 0xb8) = *(undefined8 *)(param_1 + 0x810);
    *(undefined8 *)(lVar1 + 0xc0) = *(undefined8 *)(param_1 + 0x818);
    *(undefined8 *)(lVar1 + 200) = *(undefined8 *)(param_1 + 0x820);
    *(undefined8 *)(lVar1 + 0xd0) = *(undefined8 *)(param_1 + 0x828);
    *(undefined8 *)(lVar1 + 0x88) = *(undefined8 *)(param_1 + 0x830);
    *(undefined8 *)(lVar1 + 0x90) = *(undefined8 *)(param_1 + 0x838);
    *(undefined8 *)(lVar1 + 0x78) = *(undefined8 *)(param_1 + 0x840);
    *(undefined8 *)(lVar1 + 0x80) = *(undefined8 *)(param_1 + 0x848);
    lVar1 = *(longlong *)(param_1 + 0x550);
    *(undefined8 *)(lVar1 + 0x38) = *(undefined8 *)(param_1 + 0x858);
    *(undefined8 *)(lVar1 + 0x40) = *(undefined8 *)(param_1 + 0x860);
    lVar1 = *(longlong *)(param_1 + 0x558);
    *(undefined8 *)(lVar1 + 0x38) = *(undefined8 *)(param_1 + 0x868);
    *(undefined8 *)(lVar1 + 0x40) = *(undefined8 *)(param_1 + 0x870);
    *(undefined8 *)(param_1 + 0x7f0) = 0;
    *(undefined8 *)(param_1 + 0x7f8) = 0;
    *(undefined8 *)(param_1 + 0x800) = 0;
    *(undefined8 *)(param_1 + 0x808) = 0;
    *(undefined8 *)(param_1 + 0x810) = 0;
    *(undefined8 *)(param_1 + 0x818) = 0;
    *(undefined8 *)(param_1 + 0x820) = 0;
    *(undefined8 *)(param_1 + 0x828) = 0;
    *(undefined8 *)(param_1 + 0x830) = 0;
    *(undefined8 *)(param_1 + 0x838) = 0;
    *(undefined8 *)(param_1 + 0x840) = 0;
    *(undefined8 *)(param_1 + 0x848) = 0;
    *(undefined8 *)(param_1 + 0x858) = 0;
    *(undefined8 *)(param_1 + 0x860) = 0;
    *(undefined8 *)(param_1 + 0x4e8) = *(undefined8 *)(param_1 + 0x4f0);
    *(undefined8 *)(param_1 + 0x550) = *(undefined8 *)(param_1 + 0x4f8);
    *(undefined8 *)(param_1 + 0x558) = *(undefined8 *)(param_1 + 0x500);
    FUN_00c02a60(param_1);
    FUN_00c10e80(param_1,uVar2);
  }
  return;
}

