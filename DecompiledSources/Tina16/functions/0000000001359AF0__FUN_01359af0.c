/* Ghidra address: 01359af0 */
/* Ghidra symbol: FUN_01359af0 */


undefined8 FUN_01359af0(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  
  local_38 = 0;
  FUN_00b956d0(param_1,0,0,0);
  iVar3 = *(int *)(param_2 + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar1 = FUN_00b94e60(param_2,iVar2);
      FUN_01359a90(auStack_58,uVar1);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar3 = FUN_00b95910(param_1);
  if ((0 < iVar3) && (iVar3 = FUN_00b95930(param_1), 0 < iVar3)) {
    FUN_00b95880(param_1,param_3,param_3);
  }
  return param_1;
}

