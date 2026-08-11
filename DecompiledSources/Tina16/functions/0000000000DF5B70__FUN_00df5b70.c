/* Ghidra address: 00df5b70 */
/* Ghidra symbol: FUN_00df5b70 */


void FUN_00df5b70(longlong param_1,longlong param_2,char param_3,ulonglong param_4)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x40) + -8 + (param_4 & 0xff) * 8);
  uVar4 = FUN_01b05600(param_1,**(undefined1 **)(lVar3 + 8));
  uVar5 = FUN_01b05600(param_1,*(undefined1 *)(*(longlong *)(lVar3 + 8) + 1));
  uVar6 = FUN_01b05600(param_1,*(undefined1 *)(*(longlong *)(lVar3 + 8) + 2));
  uVar7 = FUN_01b05600(param_1,*(undefined1 *)(*(longlong *)(lVar3 + 8) + 3));
  uVar8 = FUN_01b05690(param_1,param_4 & 0xffffffff,1);
  uVar9 = FUN_01b05690(param_1,param_4 & 0xffffffff,2);
  dVar1 = *(double *)(*(longlong *)(lVar3 + 0x18) + 8);
  dVar2 = *(double *)(param_2 + 0x480);
  FUN_017dc8c0(*(undefined8 *)(param_2 + 0xd8),0,0x3ff0000000000000,uVar4,uVar5,uVar8);
  FUN_017dc8c0(*(undefined8 *)(param_2 + 0xd8),0,0x3ff0000000000000,uVar6,uVar7,uVar9);
  FUN_017dc850(*(undefined8 *)(param_2 + 0xd8),0,dVar1 * dVar2,uVar9,uVar8);
  if (((param_3 != '\b') && (*(char *)(param_2 + 0x325) == '\0')) &&
     (*(char *)(lVar3 + 0x39) == '\0')) {
    FUN_017dc850(*(undefined8 *)(param_2 + 0xd8),0,
                 -(**(double **)(lVar3 + 0x18) * *(double *)(param_2 + 0x480)),uVar9,
                 *(undefined4 *)(param_2 + 0x308));
  }
  return;
}

