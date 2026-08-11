/* Ghidra address: 01367da0 */
/* Ghidra symbol: FUN_01367da0 */


undefined8 FUN_01367da0(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint7 uVar3;
  undefined8 uVar2;
  uint uVar4;
  uint uVar5;
  undefined2 local_res10;
  undefined2 uStackX_12;
  undefined2 local_res18;
  undefined2 uStackX_1a;
  
  local_res18 = (short)param_3;
  local_res10 = (short)param_2;
  uVar4 = (int)local_res18 - (int)local_res10 >> 0x1f;
  uStackX_1a = (short)((uint)param_3 >> 0x10);
  uStackX_12 = (short)((uint)param_2 >> 0x10);
  uVar5 = (int)uStackX_1a - (int)uStackX_12 >> 0x1f;
  iVar1 = ((int)local_res18 - (int)local_res10 ^ uVar4) - uVar4;
  uVar3 = (uint7)(uint3)((uint)iVar1 >> 8);
  if (iVar1 < (int)(((int)uStackX_1a - (int)uStackX_12 ^ uVar5) - uVar5)) {
    uVar2 = CONCAT71(uVar3,2);
  }
  else {
    uVar2 = CONCAT71(uVar3,1);
  }
  return uVar2;
}

