/* Ghidra address: 01b3bf90 */
/* Ghidra symbol: FUN_01b3bf90 */


void FUN_01b3bf90(undefined8 param_1,undefined8 param_2,undefined8 param_3,ushort param_4,
                 longlong param_5,longlong *param_6,undefined8 param_7,undefined8 param_8,
                 int param_9)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 local_res18 [2];
  undefined8 local_28;
  undefined8 local_20;
  
  local_28 = 0;
  local_20 = 0;
  local_res18[0] = param_3;
  FUN_00419500(param_3);
  FUN_00414610(param_7);
  FUN_00414610(param_8);
  FUN_01b3b450(&local_20,param_7);
  FUN_00414ad0(param_5,local_20);
  *(int *)(param_5 + 0x34) = param_9;
  FUN_00419260(param_6,&DAT_004066f0,1,(longlong)param_9);
  FUN_00414ad0(param_5 + 8,param_8);
  *(uint *)(param_5 + 0x38) = (uint)param_4;
  FUN_01b388b0(param_5 + 8);
  FUN_01d04330(param_2,&local_28);
  FUN_00414ad0(param_5 + 0x18,local_28);
  iVar2 = 0;
  iVar3 = param_9;
  if (-1 < param_9 + -1) {
    do {
      uVar1 = FUN_01b3b5a0(param_1,param_2,local_res18[0],iVar2);
      *(undefined4 *)(*param_6 + (longlong)iVar2 * 4) = uVar1;
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00414560(&local_28,2);
  FUN_00419430(local_res18,&DAT_004066f0);
  FUN_00414560(&param_7,2);
  return;
}

