/* Ghidra address: 00d488f0 */
/* Ghidra symbol: FUN_00d488f0 */


void FUN_00d488f0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = thunk_FUN_041b2403(*(undefined8 *)(param_1 + 8),0x431,0,0);
  if ((iVar1 != 0) && (*(longlong *)(param_1 + 0x78) == 0)) {
    uVar2 = FUN_007d5080(&PTR_FUN_006441f8,1,0);
    *(undefined8 *)(param_1 + 0x78) = uVar2;
    FUN_007d55a0(uVar2,1);
    FUN_007d5670(*(undefined8 *)(param_1 + 0x78),iVar1);
  }
  iVar1 = thunk_FUN_041b2403(*(undefined8 *)(param_1 + 8),0x437,0,0);
  if ((iVar1 != 0) && (*(longlong *)(param_1 + 0x80) == 0)) {
    uVar2 = FUN_007d5080(&PTR_FUN_006441f8,1,0);
    *(undefined8 *)(param_1 + 0x80) = uVar2;
    FUN_007d55a0(uVar2,1);
    FUN_007d5670(*(undefined8 *)(param_1 + 0x80),iVar1);
  }
  return;
}

