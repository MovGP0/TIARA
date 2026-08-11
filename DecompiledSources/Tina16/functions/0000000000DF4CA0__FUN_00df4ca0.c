/* Ghidra address: 00df4ca0 */
/* Ghidra symbol: FUN_00df4ca0 */


void FUN_00df4ca0(longlong param_1,longlong param_2,char param_3,ulonglong param_4)

{
  double dVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  double dVar7;
  double local_58;
  double local_50;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x40) + -8 + (param_4 & 0xff) * 8);
  uVar4 = FUN_01b05600(param_1,**(undefined1 **)(lVar2 + 8));
  uVar5 = FUN_01b05600(param_1,*(undefined1 *)(*(longlong *)(lVar2 + 8) + 1));
  uVar6 = FUN_01b05690(param_1,param_4 & 0xffffffff,1);
  dVar7 = **(double **)(lVar2 + 0x18) * *(double *)(param_2 + 0x478);
  dVar1 = (*(double **)(lVar2 + 0x18))[3];
  FUN_017dc8c0(*(undefined8 *)(param_2 + 0xd8),0,0x3ff0000000000000,uVar4,uVar5,uVar6);
  FUN_017dc850(*(undefined8 *)(param_2 + 0xd8),0,dVar1,uVar6,uVar6);
  if (param_3 == '\b') {
    if (*(char *)(param_2 + 0x12f4) == '\x01') {
      lVar3 = *(longlong *)(lVar2 + 0x18);
      local_58 = (double)FUN_0040bcd0(*(undefined8 *)(lVar3 + 0x10));
      local_58 = *(double *)(lVar3 + 8) * local_58;
      lVar2 = *(longlong *)(lVar2 + 0x18);
      local_50 = (double)FUN_0040bdd0(*(undefined8 *)(lVar2 + 0x10));
      local_50 = *(double *)(lVar2 + 8) * local_50;
    }
    else {
      lVar3 = *(longlong *)(lVar2 + 0x18);
      local_58 = (double)FUN_0040bdd0(*(undefined8 *)(lVar3 + 0x10));
      local_58 = -*(double *)(lVar3 + 8) * local_58;
      lVar2 = *(longlong *)(lVar2 + 0x18);
      local_50 = (double)FUN_0040bcd0(*(undefined8 *)(lVar2 + 0x10));
      local_50 = *(double *)(lVar2 + 8) * local_50;
    }
    FUN_017dc850(*(undefined8 *)(param_2 + 0xd8),0,-local_58,uVar6,*(undefined4 *)(param_2 + 0x308))
    ;
    FUN_017dc850(*(undefined8 *)(param_2 + 0xd8),1,-local_50,uVar6,*(undefined4 *)(param_2 + 0x308))
    ;
  }
  else if (*(char *)(param_2 + 0x325) == '\0') {
    FUN_017dc850(*(undefined8 *)(param_2 + 0xd8),0,-dVar7,uVar6,*(undefined4 *)(param_2 + 0x308));
  }
  else {
    FUN_017dc850(*(undefined8 *)(param_2 + 0xd8),0,-dVar7,uVar6,*(undefined4 *)(param_2 + 0x308));
  }
  return;
}

