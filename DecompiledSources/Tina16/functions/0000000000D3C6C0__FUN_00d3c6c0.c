/* Ghidra address: 00d3c6c0 */
/* Ghidra symbol: FUN_00d3c6c0 */


int * FUN_00d3c6c0(undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 local_b8 [8];
  int local_b0;
  undefined1 local_a8 [8];
  int local_a0;
  undefined1 local_88 [12];
  int local_7c;
  undefined1 local_68 [20];
  undefined4 local_54;
  int local_48;
  undefined4 local_44;
  undefined4 local_3c;
  undefined1 local_38 [16];
  
  FUN_004238d0(param_2,0,0,0,0);
  iVar1 = FUN_00d3c830(param_1);
  FUN_00d3c440(param_1,local_68);
  FUN_00d3c8b0(param_1,local_38);
  uVar2 = FUN_004230a0(local_38);
  FUN_00d3c440(param_1,local_88);
  FUN_00d3c440(param_1,local_a8);
  iVar3 = thunk_FUN_03f3ed25(local_54,uVar2,local_7c - local_a0);
  FUN_00d3c8b0(param_1,&local_48);
  FUN_004238d0(param_2,local_48 + iVar3,local_44,local_48 + iVar3 + iVar1,local_3c);
  FUN_00d3c8b0(param_1,local_b8);
  if (local_b0 < param_2[2]) {
    FUN_00d3c920(param_1,local_b8);
    param_2[2] = local_b0;
    *param_2 = local_b0 - iVar1;
  }
  return param_2;
}

