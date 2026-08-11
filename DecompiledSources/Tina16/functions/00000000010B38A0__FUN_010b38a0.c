/* Ghidra address: 010b38a0 */
/* Ghidra symbol: FUN_010b38a0 */


void FUN_010b38a0(longlong param_1,undefined8 *param_2,ushort param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  int local_3c [3];
  
  FUN_01d312f0(*param_2,param_1 + 0x10);
  if (0x35 < param_3) {
    FUN_01d32380(*param_2,*(undefined8 *)(param_1 + 0x20));
  }
  FUN_01d30f00(*param_2,local_3c,4);
  iVar4 = local_3c[0];
  if (-1 < local_3c[0] + -1) {
    do {
      lVar2 = FUN_010ae9e0(&DAT_010a8e80,1);
      FUN_01d312f0(*param_2,lVar2 + 0x30);
      uVar3 = FUN_010af3b0(lVar2);
      FUN_01d32380(*param_2,uVar3);
      if (0x38 < param_3) {
        FUN_01d312f0(*param_2,lVar2 + 0x38);
      }
      cVar1 = FUN_010b1970(param_1,*(undefined8 *)(lVar2 + 0x30));
      if (cVar1 == '\0') {
        FUN_004ae7e0(*(undefined8 *)(param_1 + 0x18),lVar2);
      }
      else {
        FUN_00410f20(lVar2);
      }
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (0x36 < param_3) {
    FUN_01d30f00(*param_2,local_3c,4);
    FUN_01d32710(*param_2,*(undefined8 *)(param_1 + 0x30),local_3c[0]);
  }
  if (0x37 < param_3) {
    FUN_01d30f00(*param_2,param_1 + 0x28,1);
    FUN_01d30f00(*param_2,param_1 + 0x29,1);
  }
  if (0x3b < param_3) {
    FUN_01d30f00(*param_2,param_1 + 0x2a,4);
  }
  if (0x3e < param_3) {
    FUN_01d316c0(*param_2,param_1 + 0x40);
  }
  iVar4 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x28))(*(longlong **)(param_1 + 0x20));
  if (iVar4 == 0) {
    FUN_010b0330(param_1);
  }
  else {
    FUN_010b00f0(param_1);
  }
  return;
}

