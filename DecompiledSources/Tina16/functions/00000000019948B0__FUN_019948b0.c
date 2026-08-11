/* Ghidra address: 019948b0 */
/* Ghidra symbol: FUN_019948b0 */


undefined8 FUN_019948b0(longlong param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  int local_44;
  int iStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined8 local_34;
  undefined1 local_29;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  local_3c = 0;
  uStack_38 = 0;
  local_34 = 0;
  *param_2 = 0;
  local_58 = 0;
  FUN_00b956d0(&local_28,0,0,0);
  local_29 = 1;
  iVar3 = *(int *)(param_1 + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar1 = FUN_00b94e60(param_1,iVar2);
      FUN_019947a0(auStack_78,uVar1);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  local_44 = (local_20 + local_28) / 2;
  iStack_40 = (local_1c + local_24) / 2;
  local_34 = CONCAT44(iStack_40,local_44);
  FUN_01b1cd00(&local_34,(longlong)&local_34 + 4);
  return local_34;
}

