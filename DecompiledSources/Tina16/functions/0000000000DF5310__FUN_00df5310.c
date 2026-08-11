/* Ghidra address: 00df5310 */
/* Ghidra symbol: FUN_00df5310 */


void FUN_00df5310(longlong param_1,longlong param_2,char param_3,ulonglong param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  double dVar5;
  double local_48;
  double local_40;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + -8 + (param_4 & 0xff) * 8);
  uVar3 = FUN_01b05600(param_1,**(undefined1 **)(lVar1 + 8));
  uVar4 = FUN_01b05600(param_1,*(undefined1 *)(*(longlong *)(lVar1 + 8) + 1));
  dVar5 = **(double **)(lVar1 + 0x18) * *(double *)(param_2 + 0x478);
  FUN_017dc6a0(*(undefined8 *)(param_2 + 0xd8),0,(*(double **)(lVar1 + 0x18))[3],uVar3,uVar4);
  if (param_3 == '\b') {
    if (*(char *)(param_2 + 0x12f4) == '\x01') {
      lVar2 = *(longlong *)(lVar1 + 0x18);
      local_48 = (double)FUN_0040bcd0(*(undefined8 *)(lVar2 + 0x10));
      local_48 = *(double *)(lVar2 + 8) * local_48;
      lVar1 = *(longlong *)(lVar1 + 0x18);
      local_40 = (double)FUN_0040bdd0(*(undefined8 *)(lVar1 + 0x10));
      local_40 = *(double *)(lVar1 + 8) * local_40;
    }
    else {
      lVar2 = *(longlong *)(lVar1 + 0x18);
      local_48 = (double)FUN_0040bdd0(*(undefined8 *)(lVar2 + 0x10));
      local_48 = -*(double *)(lVar2 + 8) * local_48;
      lVar1 = *(longlong *)(lVar1 + 0x18);
      local_40 = (double)FUN_0040bcd0(*(undefined8 *)(lVar1 + 0x10));
      local_40 = *(double *)(lVar1 + 8) * local_40;
    }
    FUN_017dc990(*(undefined8 *)(param_2 + 0xd8),0,local_48,uVar4,uVar3,
                 *(undefined4 *)(param_2 + 0x308));
    FUN_017dc990(*(undefined8 *)(param_2 + 0xd8),1,local_40,uVar4,uVar3,
                 *(undefined4 *)(param_2 + 0x308));
  }
  else if (*(char *)(param_2 + 0x325) == '\0') {
    FUN_017dc990(*(undefined8 *)(param_2 + 0xd8),0,dVar5,uVar4,uVar3,
                 *(undefined4 *)(param_2 + 0x308));
  }
  else {
    FUN_017dc990(*(undefined8 *)(param_2 + 0xd8),0,dVar5,uVar4,uVar3,
                 *(undefined4 *)(param_2 + 0x308));
  }
  return;
}

