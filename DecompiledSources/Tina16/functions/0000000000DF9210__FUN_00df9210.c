/* Ghidra address: 00df9210 */
/* Ghidra symbol: FUN_00df9210 */


void FUN_00df9210(longlong param_1,longlong param_2,char param_3,ulonglong param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + -8 + (param_4 & 0xff) * 8);
  uVar2 = FUN_01b05690(param_1,param_4 & 0xffffffff,1);
  uVar3 = FUN_01b05690(param_1,param_4 & 0xffffffff,2);
  if (param_3 == '\b') {
    FUN_017dc850(*(undefined8 *)(param_2 + 0xd8),0,**(undefined8 **)(lVar1 + 0x18),uVar3,uVar2);
    FUN_017dc850(*(undefined8 *)(param_2 + 0xd8),1,*(undefined8 *)(*(longlong *)(lVar1 + 0x18) + 8),
                 uVar3,uVar2);
  }
  else {
    FUN_017dc850(*(undefined8 *)(param_2 + 0xd8),0,
                 **(double **)(lVar1 + 0x18) * *(double *)(param_2 + 0x480),uVar3,uVar2);
  }
  return;
}

