/* Ghidra address: 01bcf8f0 */
/* Ghidra symbol: FUN_01bcf8f0 */


void FUN_01bcf8f0(longlong *param_1)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined1 local_38 [12];
  int local_2c [3];
  
  FUN_01bff4c0(param_1);
  (**(code **)(*param_1 + 0x88))(param_1,0xff00001e);
  *(undefined4 *)(param_1 + 0x18) = 0xff000004;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0x646464;
  *(undefined4 *)(param_1 + 0x10) = 0xff00001d;
  *(undefined4 *)(param_1 + 0x11) = 0xff000008;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0xff000011;
  *(undefined4 *)(param_1 + 0x13) = 0xfcf7f4;
  *(undefined4 *)(param_1 + 0x12) = 0x808080;
  (**(code **)(*param_1 + 0x90))(param_1,0);
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0xfcf7f4;
  *(undefined4 *)(param_1 + 0x19) = 0x646464;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0xfcf7f4;
  *(undefined4 *)(param_1 + 0x1a) = 0x646464;
  uVar2 = FUN_00635840(0xff00000f,0xf);
  *(undefined4 *)(param_1 + 0x17) = uVar2;
  *(undefined4 *)(param_1 + 0x14) = 0x20000000;
  *(undefined4 *)(param_1 + 0x15) = 0x20000000;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0xff00001d;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0xff000015;
  uVar2 = FUN_00635840(0xff00000f,0xf);
  *(undefined4 *)((longlong)param_1 + 0xac) = uVar2;
  plVar3 = (longlong *)FUN_00781840();
  (**(code **)(*plVar3 + 200))(plVar3,local_38,2);
  cVar1 = FUN_007790b0(plVar3,local_38,6,local_2c);
  if ((cVar1 != '\0') && (local_2c[0] != 0x1fffffff)) {
    *(int *)((longlong)param_1 + 0x84) = local_2c[0];
  }
  cVar1 = FUN_007790b0(plVar3,local_38,2,local_2c);
  if ((cVar1 != '\0') && (local_2c[0] != 0x1fffffff)) {
    (**(code **)(*param_1 + 0x90))(param_1,local_2c[0]);
  }
  (**(code **)(*plVar3 + 0x158))(plVar3,local_38,10);
  cVar1 = FUN_007790b0(plVar3,local_38,1,local_2c);
  if ((cVar1 != '\0') && (local_2c[0] != 0x1fffffff)) {
    (**(code **)(*param_1 + 0x88))(param_1,local_2c[0]);
  }
  (**(code **)(*plVar3 + 0x158))(plVar3,local_38,0x1d);
  cVar1 = FUN_007790b0(plVar3,local_38,2,local_2c);
  if ((cVar1 != '\0') && (local_2c[0] != 0x1fffffff)) {
    *(int *)(param_1 + 0x11) = local_2c[0];
    *(int *)(param_1 + 0x16) = local_2c[0];
  }
  (**(code **)(*plVar3 + 0x158))(plVar3,local_38,0x1e);
  cVar1 = FUN_007790b0(plVar3,local_38,2,local_2c);
  if ((cVar1 != '\0') && (local_2c[0] != 0x1fffffff)) {
    *(int *)((longlong)param_1 + 0x94) = local_2c[0];
  }
  cVar1 = FUN_007790b0(plVar3,local_38,4,local_2c);
  if ((cVar1 != '\0') && (local_2c[0] != 0x1fffffff)) {
    *(int *)(param_1 + 0x13) = local_2c[0];
  }
  (**(code **)(*plVar3 + 0x158))(plVar3,local_38,0x12);
  cVar1 = FUN_007790b0(plVar3,local_38,4,local_2c);
  if ((cVar1 != '\0') && (local_2c[0] != 0x1fffffff)) {
    *(int *)((longlong)param_1 + 0xc4) = local_2c[0];
    *(int *)((longlong)param_1 + 0xcc) = local_2c[0];
  }
  cVar1 = FUN_007790b0(plVar3,local_38,6,local_2c);
  if ((cVar1 != '\0') && (local_2c[0] != 0x1fffffff)) {
    *(int *)(param_1 + 0x19) = local_2c[0];
    *(int *)(param_1 + 0x1a) = local_2c[0];
  }
  return;
}

