/* Ghidra address: 013657d0 */
/* Ghidra symbol: FUN_013657d0 */


void FUN_013657d0(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  
  if (*(byte *)(param_2 + 4) < 8) {
    bVar4 = ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (*(byte *)(param_2 + 4) & 0x1f) & 5U
            ) != 0;
  }
  else {
    bVar4 = false;
  }
  if (bVar4) {
    uVar2 = param_2[2];
    uVar3 = param_2[1];
  }
  else {
    uVar2 = *param_2;
    uVar3 = param_2[3];
  }
  local_48 = FUN_00b959a0(*param_2,param_2[1]);
  local_44 = FUN_00b959a0(uVar2,uVar3);
  local_40 = FUN_00b959a0(param_2[2],param_2[3]);
  uVar1 = FUN_013655b0(param_1,&local_48,2);
  *(undefined8 *)(param_1 + 0xb0) = uVar1;
  FUN_01365670(param_1,0,*(undefined8 *)(param_1 + 0xb0),param_3);
  return;
}

