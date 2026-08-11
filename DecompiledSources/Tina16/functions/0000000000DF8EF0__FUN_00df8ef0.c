/* Ghidra address: 00df8ef0 */
/* Ghidra symbol: FUN_00df8ef0 */


void FUN_00df8ef0(longlong param_1,longlong param_2,char param_3,ulonglong param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + -8 + (param_4 & 0xff) * 8);
  uVar2 = FUN_01b05600(param_1,**(undefined1 **)(lVar1 + 8));
  uVar3 = FUN_01b05600(param_1,*(undefined1 *)(*(longlong *)(lVar1 + 8) + 1));
  uVar4 = FUN_01b05600(param_1,*(undefined1 *)(*(longlong *)(lVar1 + 8) + 2));
  uVar5 = FUN_01b05600(param_1,*(undefined1 *)(*(longlong *)(lVar1 + 8) + 3));
  if (param_3 == '\b') {
    FUN_017dc770(*(undefined8 *)(param_2 + 0xd8),0,**(undefined8 **)(lVar1 + 0x18),uVar2,uVar3,uVar4
                 ,uVar5);
    FUN_017dc770(*(undefined8 *)(param_2 + 0xd8),1,*(undefined8 *)(*(longlong *)(lVar1 + 0x18) + 8),
                 uVar2,uVar3,uVar4,uVar5);
  }
  else if ((*(char *)(lVar1 + 0x70) == '\0') || (*(char *)(param_2 + 0xe0) != '\x02')) {
    FUN_017dc770(*(undefined8 *)(param_2 + 0xd8),0,
                 **(double **)(lVar1 + 0x18) * *(double *)(param_2 + 0x480),uVar2,uVar3,uVar4,uVar5)
    ;
  }
  return;
}

