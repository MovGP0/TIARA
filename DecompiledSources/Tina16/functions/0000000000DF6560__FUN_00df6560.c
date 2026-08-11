/* Ghidra address: 00df6560 */
/* Ghidra symbol: FUN_00df6560 */


void FUN_00df6560(longlong param_1,longlong param_2,char param_3,ulonglong param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + -8 + (param_4 & 0xff) * 8);
  uVar2 = FUN_01b05600(param_1,**(undefined1 **)(lVar1 + 8));
  uVar3 = FUN_01b05600(param_1,*(undefined1 *)(*(longlong *)(lVar1 + 8) + 1));
  uVar4 = FUN_01b05600(param_1,*(undefined1 *)(*(longlong *)(lVar1 + 8) + 2));
  uVar5 = FUN_01b05600(param_1,*(undefined1 *)(*(longlong *)(lVar1 + 8) + 3));
  uVar6 = FUN_01b05690(param_1,param_4 & 0xffffffff,1);
  FUN_017dca30(*(undefined8 *)(param_2 + 0xd8),0,
               *(double *)(*(longlong *)(lVar1 + 0x18) + 8) * *(double *)(param_2 + 0x480),uVar6,
               uVar2,uVar3);
  FUN_017dc8c0(*(undefined8 *)(param_2 + 0xd8),0,0x3ff0000000000000,uVar4,uVar5,uVar6);
  if (((param_3 != '\b') && (*(char *)(param_2 + 0x325) == '\0')) &&
     (*(char *)(lVar1 + 0x39) == '\0')) {
    FUN_017dc850(*(undefined8 *)(param_2 + 0xd8),0,
                 -(**(double **)(lVar1 + 0x18) * *(double *)(param_2 + 0x480)),uVar6,
                 *(undefined4 *)(param_2 + 0x308));
  }
  return;
}

