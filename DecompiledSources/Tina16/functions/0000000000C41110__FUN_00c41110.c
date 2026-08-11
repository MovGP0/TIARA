/* Ghidra address: 00c41110 */
/* Ghidra symbol: FUN_00c41110 */


undefined8 FUN_00c41110(longlong param_1)

{
  short sVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 local_19 [9];
  
  local_19[0] = 0;
  sVar1 = FUN_00c3f420(param_1,0,0,local_19);
  iVar2 = (int)sVar1;
  if ((sVar1 == -1) && (0 < *(int *)(*(longlong *)(param_1 + 0x38) + 0x10))) {
    iVar2 = 0;
  }
  if (iVar2 < 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x38),iVar2);
  }
  return uVar3;
}

